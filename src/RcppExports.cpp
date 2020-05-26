// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// find_not_nan
arma::field<arma::mat> find_not_nan(const arma::field<arma::mat>& infield, const arma::field<arma::mat>& filtering);
RcppExport SEXP _spamtree_find_not_nan(SEXP infieldSEXP, SEXP filteringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::mat>& >::type infield(infieldSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::mat>& >::type filtering(filteringSEXP);
    rcpp_result_gen = Rcpp::wrap(find_not_nan(infield, filtering));
    return rcpp_result_gen;
END_RCPP
}
// list_mean
arma::mat list_mean(const arma::field<arma::mat>& x);
RcppExport SEXP _spamtree_list_mean(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::mat>& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(list_mean(x));
    return rcpp_result_gen;
END_RCPP
}
// list_qtile
arma::mat list_qtile(const arma::field<arma::mat>& x, double q);
RcppExport SEXP _spamtree_list_qtile(SEXP xSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::mat>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(list_qtile(x, q));
    return rcpp_result_gen;
END_RCPP
}
// mesh_multires_mcmc
Rcpp::List mesh_multires_mcmc(const arma::mat& y, const arma::mat& X, const arma::mat& Z, const arma::mat& coords, const arma::uvec& blocking, const arma::field<arma::uvec>& parents, const arma::field<arma::uvec>& children, const arma::vec& layer_names, const arma::vec& layer_gibbs_group, const arma::field<arma::uvec>& indexing, const arma::mat& set_unif_bounds_in, const arma::mat& start_w, const arma::vec& theta, const arma::vec& beta, const double& tausq, const double& sigmasq, const arma::mat& mcmcsd, int mcmc_keep, int mcmc_burn, int mcmc_thin, int num_threads, char use_alg, bool adapting, bool verbose, bool debug, bool printall, bool sample_beta, bool sample_tausq, bool sample_sigmasq, bool sample_theta, bool sample_w, bool sample_predicts);
RcppExport SEXP _spamtree_mesh_multires_mcmc(SEXP ySEXP, SEXP XSEXP, SEXP ZSEXP, SEXP coordsSEXP, SEXP blockingSEXP, SEXP parentsSEXP, SEXP childrenSEXP, SEXP layer_namesSEXP, SEXP layer_gibbs_groupSEXP, SEXP indexingSEXP, SEXP set_unif_bounds_inSEXP, SEXP start_wSEXP, SEXP thetaSEXP, SEXP betaSEXP, SEXP tausqSEXP, SEXP sigmasqSEXP, SEXP mcmcsdSEXP, SEXP mcmc_keepSEXP, SEXP mcmc_burnSEXP, SEXP mcmc_thinSEXP, SEXP num_threadsSEXP, SEXP use_algSEXP, SEXP adaptingSEXP, SEXP verboseSEXP, SEXP debugSEXP, SEXP printallSEXP, SEXP sample_betaSEXP, SEXP sample_tausqSEXP, SEXP sample_sigmasqSEXP, SEXP sample_thetaSEXP, SEXP sample_wSEXP, SEXP sample_predictsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type coords(coordsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type blocking(blockingSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::uvec>& >::type parents(parentsSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::uvec>& >::type children(childrenSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type layer_names(layer_namesSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type layer_gibbs_group(layer_gibbs_groupSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::uvec>& >::type indexing(indexingSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type set_unif_bounds_in(set_unif_bounds_inSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type start_w(start_wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const double& >::type tausq(tausqSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigmasq(sigmasqSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mcmcsd(mcmcsdSEXP);
    Rcpp::traits::input_parameter< int >::type mcmc_keep(mcmc_keepSEXP);
    Rcpp::traits::input_parameter< int >::type mcmc_burn(mcmc_burnSEXP);
    Rcpp::traits::input_parameter< int >::type mcmc_thin(mcmc_thinSEXP);
    Rcpp::traits::input_parameter< int >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< char >::type use_alg(use_algSEXP);
    Rcpp::traits::input_parameter< bool >::type adapting(adaptingSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type debug(debugSEXP);
    Rcpp::traits::input_parameter< bool >::type printall(printallSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_beta(sample_betaSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_tausq(sample_tausqSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_sigmasq(sample_sigmasqSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_theta(sample_thetaSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_w(sample_wSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_predicts(sample_predictsSEXP);
    rcpp_result_gen = Rcpp::wrap(mesh_multires_mcmc(y, X, Z, coords, blocking, parents, children, layer_names, layer_gibbs_group, indexing, set_unif_bounds_in, start_w, theta, beta, tausq, sigmasq, mcmcsd, mcmc_keep, mcmc_burn, mcmc_thin, num_threads, use_alg, adapting, verbose, debug, printall, sample_beta, sample_tausq, sample_sigmasq, sample_theta, sample_w, sample_predicts));
    return rcpp_result_gen;
END_RCPP
}
// kthresholds
arma::vec kthresholds(arma::vec x, int k);
RcppExport SEXP _spamtree_kthresholds(SEXP xSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(kthresholds(x, k));
    return rcpp_result_gen;
END_RCPP
}
// col_to_string
Rcpp::StringMatrix col_to_string(const arma::imat& X);
RcppExport SEXP _spamtree_col_to_string(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::imat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(col_to_string(X));
    return rcpp_result_gen;
END_RCPP
}
// part_axis_parallel_lmt
arma::mat part_axis_parallel_lmt(const arma::mat& coords, const arma::field<arma::vec>& thresholds);
RcppExport SEXP _spamtree_part_axis_parallel_lmt(SEXP coordsSEXP, SEXP thresholdsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type coords(coordsSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type thresholds(thresholdsSEXP);
    rcpp_result_gen = Rcpp::wrap(part_axis_parallel_lmt(coords, thresholds));
    return rcpp_result_gen;
END_RCPP
}
// multires_graph
Rcpp::List multires_graph(const arma::mat& parchimat, const arma::uvec& non_empty_blocks);
RcppExport SEXP _spamtree_multires_graph(SEXP parchimatSEXP, SEXP non_empty_blocksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type parchimat(parchimatSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type non_empty_blocks(non_empty_blocksSEXP);
    rcpp_result_gen = Rcpp::wrap(multires_graph(parchimat, non_empty_blocks));
    return rcpp_result_gen;
END_RCPP
}
// number_revalue
arma::umat number_revalue(const arma::umat& original_mat, const arma::uvec& from_val, const arma::uvec& to_val);
RcppExport SEXP _spamtree_number_revalue(SEXP original_matSEXP, SEXP from_valSEXP, SEXP to_valSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::umat& >::type original_mat(original_matSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type from_val(from_valSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type to_val(to_valSEXP);
    rcpp_result_gen = Rcpp::wrap(number_revalue(original_mat, from_val, to_val));
    return rcpp_result_gen;
END_RCPP
}
// spamtree_Cinv
Eigen::SparseMatrix<double> spamtree_Cinv(const arma::mat& coords, const arma::uvec& blocking, const arma::field<arma::uvec>& parents, const arma::vec& block_names, const arma::field<arma::uvec>& indexing, const arma::vec& theta, const arma::mat& Dmat, int num_threads, bool verbose, bool debug);
RcppExport SEXP _spamtree_spamtree_Cinv(SEXP coordsSEXP, SEXP blockingSEXP, SEXP parentsSEXP, SEXP block_namesSEXP, SEXP indexingSEXP, SEXP thetaSEXP, SEXP DmatSEXP, SEXP num_threadsSEXP, SEXP verboseSEXP, SEXP debugSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type coords(coordsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type blocking(blockingSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::uvec>& >::type parents(parentsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type block_names(block_namesSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::uvec>& >::type indexing(indexingSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Dmat(DmatSEXP);
    Rcpp::traits::input_parameter< int >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type debug(debugSEXP);
    rcpp_result_gen = Rcpp::wrap(spamtree_Cinv(coords, blocking, parents, block_names, indexing, theta, Dmat, num_threads, verbose, debug));
    return rcpp_result_gen;
END_RCPP
}
// spamtree_sample
Eigen::VectorXd spamtree_sample(const arma::mat& coords, const arma::uvec& blocking, const arma::field<arma::uvec>& parents, const arma::vec& block_names, const arma::field<arma::uvec>& indexing, const arma::vec& theta, const arma::mat& Dmat, int num_threads, bool verbose, bool debug);
RcppExport SEXP _spamtree_spamtree_sample(SEXP coordsSEXP, SEXP blockingSEXP, SEXP parentsSEXP, SEXP block_namesSEXP, SEXP indexingSEXP, SEXP thetaSEXP, SEXP DmatSEXP, SEXP num_threadsSEXP, SEXP verboseSEXP, SEXP debugSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type coords(coordsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type blocking(blockingSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::uvec>& >::type parents(parentsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type block_names(block_namesSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::uvec>& >::type indexing(indexingSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Dmat(DmatSEXP);
    Rcpp::traits::input_parameter< int >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type debug(debugSEXP);
    rcpp_result_gen = Rcpp::wrap(spamtree_sample(coords, blocking, parents, block_names, indexing, theta, Dmat, num_threads, verbose, debug));
    return rcpp_result_gen;
END_RCPP
}
// vec_to_symmat
arma::mat vec_to_symmat(const arma::vec& x);
RcppExport SEXP _spamtree_vec_to_symmat(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(vec_to_symmat(x));
    return rcpp_result_gen;
END_RCPP
}
// xCovHUV_base
double xCovHUV_base(double h, double u, double v, const arma::vec& params, int q, int dim);
RcppExport SEXP _spamtree_xCovHUV_base(SEXP hSEXP, SEXP uSEXP, SEXP vSEXP, SEXP paramsSEXP, SEXP qSEXP, SEXP dimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type u(uSEXP);
    Rcpp::traits::input_parameter< double >::type v(vSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type dim(dimSEXP);
    rcpp_result_gen = Rcpp::wrap(xCovHUV_base(h, u, v, params, q, dim));
    return rcpp_result_gen;
END_RCPP
}
// xCovHUV
arma::mat xCovHUV(const arma::mat& coords, const arma::uvec& ind1, const arma::uvec& ind2, const arma::vec& cparams, const arma::mat& Dmat, bool same);
RcppExport SEXP _spamtree_xCovHUV(SEXP coordsSEXP, SEXP ind1SEXP, SEXP ind2SEXP, SEXP cparamsSEXP, SEXP DmatSEXP, SEXP sameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type coords(coordsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type ind1(ind1SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type ind2(ind2SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type cparams(cparamsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Dmat(DmatSEXP);
    Rcpp::traits::input_parameter< bool >::type same(sameSEXP);
    rcpp_result_gen = Rcpp::wrap(xCovHUV(coords, ind1, ind2, cparams, Dmat, same));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_spamtree_find_not_nan", (DL_FUNC) &_spamtree_find_not_nan, 2},
    {"_spamtree_list_mean", (DL_FUNC) &_spamtree_list_mean, 1},
    {"_spamtree_list_qtile", (DL_FUNC) &_spamtree_list_qtile, 2},
    {"_spamtree_mesh_multires_mcmc", (DL_FUNC) &_spamtree_mesh_multires_mcmc, 32},
    {"_spamtree_kthresholds", (DL_FUNC) &_spamtree_kthresholds, 2},
    {"_spamtree_col_to_string", (DL_FUNC) &_spamtree_col_to_string, 1},
    {"_spamtree_part_axis_parallel_lmt", (DL_FUNC) &_spamtree_part_axis_parallel_lmt, 2},
    {"_spamtree_multires_graph", (DL_FUNC) &_spamtree_multires_graph, 2},
    {"_spamtree_number_revalue", (DL_FUNC) &_spamtree_number_revalue, 3},
    {"_spamtree_spamtree_Cinv", (DL_FUNC) &_spamtree_spamtree_Cinv, 10},
    {"_spamtree_spamtree_sample", (DL_FUNC) &_spamtree_spamtree_sample, 10},
    {"_spamtree_vec_to_symmat", (DL_FUNC) &_spamtree_vec_to_symmat, 1},
    {"_spamtree_xCovHUV_base", (DL_FUNC) &_spamtree_xCovHUV_base, 6},
    {"_spamtree_xCovHUV", (DL_FUNC) &_spamtree_xCovHUV, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_spamtree(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
