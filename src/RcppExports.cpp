// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cpp_detectFFFMeanMultiple
Rcpp::List cpp_detectFFFMeanMultiple(Rcpp::NumericVector x, double lambda, double alpha, int BL);
RcppExport SEXP ffstream_cpp_detectFFFMeanMultiple(SEXP xSEXP, SEXP lambdaSEXP, SEXP alphaSEXP, SEXP BLSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type BL(BLSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_detectFFFMeanMultiple(x, lambda, alpha, BL));
    return rcpp_result_gen;
END_RCPP
}
// cpp_detectFFFMeanSingle
Rcpp::List cpp_detectFFFMeanSingle(Rcpp::NumericVector x, double lambda, double alpha, int BL);
RcppExport SEXP ffstream_cpp_detectFFFMeanSingle(SEXP xSEXP, SEXP lambdaSEXP, SEXP alphaSEXP, SEXP BLSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type BL(BLSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_detectFFFMeanSingle(x, lambda, alpha, BL));
    return rcpp_result_gen;
END_RCPP
}
// cpp_detectFFFMeanSinglePrechange
Rcpp::List cpp_detectFFFMeanSinglePrechange(Rcpp::NumericVector x, double lambda, double alpha, double prechangeMean, double prechangeSigma);
RcppExport SEXP ffstream_cpp_detectFFFMeanSinglePrechange(SEXP xSEXP, SEXP lambdaSEXP, SEXP alphaSEXP, SEXP prechangeMeanSEXP, SEXP prechangeSigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type prechangeMean(prechangeMeanSEXP);
    Rcpp::traits::input_parameter< double >::type prechangeSigma(prechangeSigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_detectFFFMeanSinglePrechange(x, lambda, alpha, prechangeMean, prechangeSigma));
    return rcpp_result_gen;
END_RCPP
}
// cpp_detectAFFMeanMultiple
Rcpp::List cpp_detectAFFMeanMultiple(Rcpp::NumericVector x, double alpha, double eta, int BL);
RcppExport SEXP ffstream_cpp_detectAFFMeanMultiple(SEXP xSEXP, SEXP alphaSEXP, SEXP etaSEXP, SEXP BLSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< int >::type BL(BLSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_detectAFFMeanMultiple(x, alpha, eta, BL));
    return rcpp_result_gen;
END_RCPP
}
// cpp_detectAFFMeanSingle
Rcpp::List cpp_detectAFFMeanSingle(Rcpp::NumericVector x, double alpha, double eta, int BL);
RcppExport SEXP ffstream_cpp_detectAFFMeanSingle(SEXP xSEXP, SEXP alphaSEXP, SEXP etaSEXP, SEXP BLSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< int >::type BL(BLSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_detectAFFMeanSingle(x, alpha, eta, BL));
    return rcpp_result_gen;
END_RCPP
}
// cpp_detectAFFMeanSinglePrechange
Rcpp::List cpp_detectAFFMeanSinglePrechange(Rcpp::NumericVector x, double alpha, double eta, double prechangeMean, double prechangeSigma);
RcppExport SEXP ffstream_cpp_detectAFFMeanSinglePrechange(SEXP xSEXP, SEXP alphaSEXP, SEXP etaSEXP, SEXP prechangeMeanSEXP, SEXP prechangeSigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type prechangeMean(prechangeMeanSEXP);
    Rcpp::traits::input_parameter< double >::type prechangeSigma(prechangeSigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_detectAFFMeanSinglePrechange(x, alpha, eta, prechangeMean, prechangeSigma));
    return rcpp_result_gen;
END_RCPP
}
// cpp_detectCUSUMMeanMultiple
Rcpp::List cpp_detectCUSUMMeanMultiple(Rcpp::NumericVector x, double k, double h, int BL);
RcppExport SEXP ffstream_cpp_detectCUSUMMeanMultiple(SEXP xSEXP, SEXP kSEXP, SEXP hSEXP, SEXP BLSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< int >::type BL(BLSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_detectCUSUMMeanMultiple(x, k, h, BL));
    return rcpp_result_gen;
END_RCPP
}
// cpp_detectCUSUMMeanSingle
Rcpp::List cpp_detectCUSUMMeanSingle(Rcpp::NumericVector x, double k, double h, int BL);
RcppExport SEXP ffstream_cpp_detectCUSUMMeanSingle(SEXP xSEXP, SEXP kSEXP, SEXP hSEXP, SEXP BLSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< int >::type BL(BLSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_detectCUSUMMeanSingle(x, k, h, BL));
    return rcpp_result_gen;
END_RCPP
}
// cpp_detectCUSUMMeanSinglePrechange
Rcpp::List cpp_detectCUSUMMeanSinglePrechange(Rcpp::NumericVector x, double k, double h, double prechangeMean, double prechangeSigma);
RcppExport SEXP ffstream_cpp_detectCUSUMMeanSinglePrechange(SEXP xSEXP, SEXP kSEXP, SEXP hSEXP, SEXP prechangeMeanSEXP, SEXP prechangeSigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type prechangeMean(prechangeMeanSEXP);
    Rcpp::traits::input_parameter< double >::type prechangeSigma(prechangeSigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_detectCUSUMMeanSinglePrechange(x, k, h, prechangeMean, prechangeSigma));
    return rcpp_result_gen;
END_RCPP
}
// cpp_detectEWMAMeanMultiple
Rcpp::List cpp_detectEWMAMeanMultiple(Rcpp::NumericVector x, double r, double L, int BL);
RcppExport SEXP ffstream_cpp_detectEWMAMeanMultiple(SEXP xSEXP, SEXP rSEXP, SEXP LSEXP, SEXP BLSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type BL(BLSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_detectEWMAMeanMultiple(x, r, L, BL));
    return rcpp_result_gen;
END_RCPP
}
// cpp_detectEWMAMeanSingle
Rcpp::List cpp_detectEWMAMeanSingle(Rcpp::NumericVector x, double r, double L, int BL);
RcppExport SEXP ffstream_cpp_detectEWMAMeanSingle(SEXP xSEXP, SEXP rSEXP, SEXP LSEXP, SEXP BLSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type BL(BLSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_detectEWMAMeanSingle(x, r, L, BL));
    return rcpp_result_gen;
END_RCPP
}
// cpp_detectEWMAMeanSinglePrechange
Rcpp::List cpp_detectEWMAMeanSinglePrechange(Rcpp::NumericVector x, double r, double L, double prechangeMean, double prechangeSigma);
RcppExport SEXP ffstream_cpp_detectEWMAMeanSinglePrechange(SEXP xSEXP, SEXP rSEXP, SEXP LSEXP, SEXP prechangeMeanSEXP, SEXP prechangeSigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type prechangeMean(prechangeMeanSEXP);
    Rcpp::traits::input_parameter< double >::type prechangeSigma(prechangeSigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_detectEWMAMeanSinglePrechange(x, r, L, prechangeMean, prechangeSigma));
    return rcpp_result_gen;
END_RCPP
}
// cpp_computeFFFMean
double cpp_computeFFFMean(Rcpp::NumericVector x, double lambda);
RcppExport SEXP ffstream_cpp_computeFFFMean(SEXP xSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_computeFFFMean(x, lambda));
    return rcpp_result_gen;
END_RCPP
}
// cpp_computeAFFMean
double cpp_computeAFFMean(Rcpp::NumericVector x, double eta);
RcppExport SEXP ffstream_cpp_computeAFFMean(SEXP xSEXP, SEXP etaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_computeAFFMean(x, eta));
    return rcpp_result_gen;
END_RCPP
}
// computeOneSidedPvalueRcpp
Rcpp::NumericVector computeOneSidedPvalueRcpp(Rcpp::NumericVector x_, Rcpp::NumericVector a_, Rcpp::NumericVector b_);
RcppExport SEXP ffstream_computeOneSidedPvalueRcpp(SEXP x_SEXP, SEXP a_SEXP, SEXP b_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x_(x_SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type a_(a_SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type b_(b_SEXP);
    rcpp_result_gen = Rcpp::wrap(computeOneSidedPvalueRcpp(x_, a_, b_));
    return rcpp_result_gen;
END_RCPP
}
// combineTwoOneSidedPvaluesRcpp
Rcpp::NumericVector combineTwoOneSidedPvaluesRcpp(Rcpp::NumericVector p1_, Rcpp::NumericVector p2_);
RcppExport SEXP ffstream_combineTwoOneSidedPvaluesRcpp(SEXP p1_SEXP, SEXP p2_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type p1_(p1_SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type p2_(p2_SEXP);
    rcpp_result_gen = Rcpp::wrap(combineTwoOneSidedPvaluesRcpp(p1_, p2_));
    return rcpp_result_gen;
END_RCPP
}
// convertPvalueToCorrectSideRcpp
Rcpp::NumericVector convertPvalueToCorrectSideRcpp(Rcpp::NumericVector p_);
RcppExport SEXP ffstream_convertPvalueToCorrectSideRcpp(SEXP p_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type p_(p_SEXP);
    rcpp_result_gen = Rcpp::wrap(convertPvalueToCorrectSideRcpp(p_));
    return rcpp_result_gen;
END_RCPP
}
// computeTwoSidedPvalueRcpp
Rcpp::NumericVector computeTwoSidedPvalueRcpp(Rcpp::NumericVector x_, Rcpp::NumericVector a_, Rcpp::NumericVector b_);
RcppExport SEXP ffstream_computeTwoSidedPvalueRcpp(SEXP x_SEXP, SEXP a_SEXP, SEXP b_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x_(x_SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type a_(a_SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type b_(b_SEXP);
    rcpp_result_gen = Rcpp::wrap(computeTwoSidedPvalueRcpp(x_, a_, b_));
    return rcpp_result_gen;
END_RCPP
}
// computeStdNormCdf
Rcpp::NumericVector computeStdNormCdf(Rcpp::NumericVector x_);
RcppExport SEXP ffstream_computeStdNormCdf(SEXP x_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x_(x_SEXP);
    rcpp_result_gen = Rcpp::wrap(computeStdNormCdf(x_));
    return rcpp_result_gen;
END_RCPP
}
// makeTwoSidedPvalueOneSidedR
Rcpp::NumericVector makeTwoSidedPvalueOneSidedR(Rcpp::NumericVector p2_);
RcppExport SEXP ffstream_makeTwoSidedPvalueOneSidedR(SEXP p2_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type p2_(p2_SEXP);
    rcpp_result_gen = Rcpp::wrap(makeTwoSidedPvalueOneSidedR(p2_));
    return rcpp_result_gen;
END_RCPP
}
