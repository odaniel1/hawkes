// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_hello
List rcpp_hello();
RcppExport SEXP _mds_rcpp_hello() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello());
    return rcpp_result_gen;
END_RCPP
}
// createEngine
Rcpp::List createEngine(int embeddingDimension, int locationCount, bool truncation, int tbb, int simd);
RcppExport SEXP _mds_createEngine(SEXP embeddingDimensionSEXP, SEXP locationCountSEXP, SEXP truncationSEXP, SEXP tbbSEXP, SEXP simdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type embeddingDimension(embeddingDimensionSEXP);
    Rcpp::traits::input_parameter< int >::type locationCount(locationCountSEXP);
    Rcpp::traits::input_parameter< bool >::type truncation(truncationSEXP);
    Rcpp::traits::input_parameter< int >::type tbb(tbbSEXP);
    Rcpp::traits::input_parameter< int >::type simd(simdSEXP);
    rcpp_result_gen = Rcpp::wrap(createEngine(embeddingDimension, locationCount, truncation, tbb, simd));
    return rcpp_result_gen;
END_RCPP
}
// setPairwiseData
void setPairwiseData(SEXP sexp, std::vector<double>& data);
RcppExport SEXP _mds_setPairwiseData(SEXP sexpSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type data(dataSEXP);
    setPairwiseData(sexp, data);
    return R_NilValue;
END_RCPP
}
// updateLocations
void updateLocations(SEXP sexp, std::vector<double>& locations);
RcppExport SEXP _mds_updateLocations(SEXP sexpSEXP, SEXP locationsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type locations(locationsSEXP);
    updateLocations(sexp, locations);
    return R_NilValue;
END_RCPP
}
// setPrecision
void setPrecision(SEXP sexp, double precision);
RcppExport SEXP _mds_setPrecision(SEXP sexpSEXP, SEXP precisionSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< double >::type precision(precisionSEXP);
    setPrecision(sexp, precision);
    return R_NilValue;
END_RCPP
}
// getLogLikelihoodGradient
std::vector<double> getLogLikelihoodGradient(SEXP sexp, size_t len);
RcppExport SEXP _mds_getLogLikelihoodGradient(SEXP sexpSEXP, SEXP lenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< size_t >::type len(lenSEXP);
    rcpp_result_gen = Rcpp::wrap(getLogLikelihoodGradient(sexp, len));
    return rcpp_result_gen;
END_RCPP
}
// getSumOfIncrements
double getSumOfIncrements(SEXP sexp);
RcppExport SEXP _mds_getSumOfIncrements(SEXP sexpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    rcpp_result_gen = Rcpp::wrap(getSumOfIncrements(sexp));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mds_rcpp_hello", (DL_FUNC) &_mds_rcpp_hello, 0},
    {"_mds_createEngine", (DL_FUNC) &_mds_createEngine, 5},
    {"_mds_setPairwiseData", (DL_FUNC) &_mds_setPairwiseData, 2},
    {"_mds_updateLocations", (DL_FUNC) &_mds_updateLocations, 2},
    {"_mds_setPrecision", (DL_FUNC) &_mds_setPrecision, 2},
    {"_mds_getLogLikelihoodGradient", (DL_FUNC) &_mds_getLogLikelihoodGradient, 2},
    {"_mds_getSumOfIncrements", (DL_FUNC) &_mds_getSumOfIncrements, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_mds(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
