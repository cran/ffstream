#ifndef GUARD_detector_h
#define GUARD_detector_h

#include "fff.h"
#include<Rcpp.h>
#include<vector>

class Detector{
    public:
        Detector(); //default BL
        Detector(int); //setting BL

        //need virtual destructor - this adds AND defines it
        virtual ~Detector() {}
        //the update method will be implemented in derived classes
        virtual void update(double) {};

        int getBL();
        void setBL(int);
        double getStreamEstMean();
        void setStreamEstMean(double);
        double getStreamEstSigma();
        void setStreamEstSigma(double);
        double getPval();
        void setPval(double);
        bool getChangeDetected();

        //detect multiple changepoints
        //uses virtual update method
        //need to make it public so accessible in detectVectors.cpp
        Rcpp::List detectMultiple(Rcpp::NumericVector);
        Rcpp::List detectSingle(Rcpp::NumericVector);
        Rcpp::List detectSinglePrechangeKnown(Rcpp::NumericVector, double, double);
    protected: 
        int BL;
        int BLcount;
        double pval;
        bool inBurnIn;
        bool inDetectState;
        bool changeDetected;
        FFF streamEstimator;
        void setStreamEstMean();
        void setStreamEstSigma();
        void stopBurnIn();
        void startBurnIn();
    private:
        double streamEstMean;
        double streamEstSigma;

//     private:
};


#endif
