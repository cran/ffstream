% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/init.R
\name{initAFFMean}
\alias{initAFFMean}
\title{Initialisation of AFF mean}
\usage{
initAFFMean(eta = 0.1)
}
\arguments{
\item{eta}{The value of the step size in the gradient descent. 
Default is eta=0.01.}
}
\value{
An AFF object.
}
\description{
This function makes it simple to initalise an AFF object.
}
\examples{
library(Rcpp)
aff1 <- initAFFMean()     # initialises with eta=0.01

aff2 <- initAFFMean(0.1)  # initialises with eta=0.1

}
