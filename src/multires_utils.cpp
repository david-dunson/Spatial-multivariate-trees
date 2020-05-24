#include "multires_utils.h"
using namespace std;


arma::vec armarowsum(const arma::mat& x){
  return arma::sum(x, 1);
}

arma::vec armacolsum(const arma::mat& x){
  return arma::trans(arma::sum(x, 0));
}

arma::sp_mat Zify(const arma::mat& x) {
  //x: list of matrices 
  unsigned int n = x.n_rows;
  int rdimen = 0;
  int cdimen = 0;
  
  arma::ivec dimrow(n);
  arma::ivec dimcol(n);
  
  for(unsigned int i=0; i<n; i++) {
    dimrow(i) = 1;
    dimcol(i) = x.n_cols;
    rdimen += dimrow(i);
    cdimen += dimcol(i);
  }
  
  arma::mat X = arma::zeros(rdimen, cdimen);
  int idx=0;
  int cdx=0;
  for(unsigned int i=0; i<n; i++){
    arma::uvec store_rows = arma::regspace<arma::uvec>(idx, idx + dimrow(i) - 1);
    arma::uvec store_cols = arma::regspace<arma::uvec>(cdx, cdx + dimcol(i) - 1);
    
    X(store_rows, store_cols) = x.row(i);
    
    idx = idx + dimrow(i);
    cdx = cdx + dimcol(i);
  }
  return arma::conv_to<arma::sp_mat>::from(X);
}


arma::mat join_horiz_mult(const arma::field<arma::mat>& blocks){
  unsigned int n = blocks.n_elem;
  int dimen = 0;
  arma::uvec cdimvec(n);
  int nrows = blocks(0).n_rows;
  for(unsigned int i=0; i<n; i++) {
    cdimvec(i) = blocks(i).n_cols;
    dimen += blocks(i).n_cols;
  }
  
  arma::mat x = arma::zeros(nrows, dimen);
  
  int cdx=0;
  for(unsigned int i=0; i<n; i++) {
    x.submat( 0, cdx, nrows - 1, cdx + cdimvec(i) - 1 ) = blocks(i);
    cdx = cdx + cdimvec(i);
  }
  return x;
}


arma::mat join_vert_mult(const arma::field<arma::mat>& blocks){
  unsigned int n = blocks.n_elem;
  int dimen = 0;
  arma::uvec rdimvec(n);
  int ncols = blocks(0).n_cols;
  for(unsigned int i=0; i<n; i++) {
    rdimvec(i) = blocks(i).n_rows;
    dimen += blocks(i).n_rows;
  }
  
  arma::mat x = arma::zeros(dimen, ncols);
  
  int rdx=0;
  for(unsigned int i=0; i<n; i++) {
    x.submat(rdx, 0, rdx + rdimvec(i) - 1, ncols - 1) = blocks(i);
    rdx = rdx + rdimvec(i);
  }
  return x;
  
}

arma::mat invsympd_block(const arma::mat& Ai, const arma::mat& B, const arma::mat& D){
  // inverse of 2x2 block matrix using precomputed inverse of topleft corner (Ai)
  arma::mat result = arma::zeros(Ai.n_rows + D.n_rows, Ai.n_cols + D.n_cols);
  arma::mat Si = arma::inv_sympd(D - B.t() * Ai * B);
  arma::mat topleft = Ai + Ai * B * Si * B.t() * Ai;
  arma::mat offdiag = - Ai * B * Si;
  
  result.submat(0, 0, Ai.n_rows-1, Ai.n_cols-1) = topleft;
  result.submat(Ai.n_rows, 0, result.n_rows-1, Ai.n_cols-1) = offdiag.t();
  result.submat(0, Ai.n_cols, Ai.n_rows-1, result.n_cols-1) = offdiag;
  result.submat(Ai.n_rows, Ai.n_cols, result.n_rows-1, result.n_cols-1) = Si;
  return result;
}

arma::mat invchol_block(const arma::mat& LAi, const arma::mat& B, const arma::mat& D){
  // cholesky of 2x2 block matrix using precomputed inverse of Cholesky of topleft corner (LAi)
  arma::mat result = arma::zeros(LAi.n_rows + D.n_rows, LAi.n_cols + D.n_cols);
  
  arma::mat topleft = arma::inv(arma::trimatl(LAi));
  arma::mat LS = arma::chol(arma::symmatu(D - B.t() * LAi.t() * LAi * B), "lower");
  arma::mat offdiag = LAi * B;
  
  result.submat(0, 0, LAi.n_rows-1, LAi.n_cols-1) = topleft;
  result.submat(LAi.n_rows, 0, result.n_rows-1, LAi.n_cols-1) = offdiag.t();
  result.submat(LAi.n_rows, LAi.n_cols, result.n_rows-1, result.n_cols-1) = LS;
  return arma::inv(arma::trimatl(result));
}

void invchol_block_inplace(
    arma::mat& output_reg,
    arma::mat& output_inv,
    const arma::mat& LA, const arma::mat& LAiBt, const arma::mat& cholSchur){
  // cholesky of 2x2 block matrix using precomputed inverse of Cholesky of topleft corner (LAi)
  //arma::mat result = arma::zeros(LAi.n_rows + D.n_rows, LAi.n_cols + D.n_cols);
  
  //arma::mat topleft = arma::inv(arma::trimatl(LAi));
  //arma::mat LS = arma::chol(arma::symmatu(D - B.t() * LAi.t() * LAi * B), "lower");
  //arma::mat offdiag = LAi * B;
  
  output_reg.submat(0, 0, LA.n_rows-1, LA.n_cols-1) = LA;
  output_reg.submat(LA.n_rows, 0, output_inv.n_rows-1, LA.n_cols-1) = LAiBt;
  output_reg.submat(LA.n_rows, LA.n_cols, output_inv.n_rows-1, output_inv.n_cols-1) = cholSchur;
  output_inv = arma::inv(arma::trimatl(output_reg));
  
  
}


void invchol_block_inplace_direct(
    arma::mat& output_inv,
    const arma::mat& LAi, const arma::mat& C_times_LAi, const arma::mat& invcholSchur){
  // cholesky of 2x2 block matrix using precomputed inverse of Cholesky of topleft corner (LAi)
  //arma::mat result = arma::zeros(LAi.n_rows + D.n_rows, LAi.n_cols + D.n_cols);
  
  //arma::mat topleft = arma::inv(arma::trimatl(LAi));
  //arma::mat LS = arma::chol(arma::symmatu(D - B.t() * LAi.t() * LAi * B), "lower");
  //arma::mat offdiag = LAi * B;
  
  output_inv.submat(0, 0, LAi.n_rows-1, LAi.n_cols-1) = LAi;
  output_inv.submat(LAi.n_rows, 0, output_inv.n_rows-1, LAi.n_cols-1) = -invcholSchur*C_times_LAi;
  output_inv.submat(LAi.n_rows, LAi.n_cols, output_inv.n_rows-1, output_inv.n_cols-1) = invcholSchur;
  
}


