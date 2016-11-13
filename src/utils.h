#ifndef GUARD_utils_h
#define GUARD_utils_h

#include "fff.h"
#include<Rcpp.h>
#include<string>


const double N01QUANTILE_0975 =  1.959964;
const double N01QUANTILE_0025 = -1.959964;
const double DEFAULT_PVALUE = 0.5;
const double INIT_STREAM_EST_MEAN = INIT_XBAR;
const double INIT_STREAM_EST_SIGMA = INIT_S2;
const int INIT_BL_COUNT = 0;
const int DEFAULT_BL = 50;
const bool INIT_IN_BURN_IN = true;
const bool INIT_IN_DETECT_STATE = false;
const bool INIT_CHANGE_DETECTED = false;
const std::string CHANGEPOINT_FIELD_NAME = "tauhat";
const std::string AFF_FIELD_NAME = "lambda";
const std::string IS_CHANGE_DETECTED_FIELD_NAME = "changeDetected";


double stdnormcdf(double);
double normcdf(double, double, double);
double convertPvalueToCorrectSide(double);
double makeTwoSidedPvalueOneSided(double);
double computeOneSidedPvalue(double, double, double);
double combineTwoOneSidedPvalues(double, double);
double computeTwoSidedPvalue(double, double, double);



#endif
