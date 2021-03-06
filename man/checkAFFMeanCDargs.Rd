% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/errorMessage.R
\name{checkAFFMeanCDargs}
\alias{checkAFFMeanCDargs}
\title{Check the arguments for AFF mean change detector}
\usage{
checkAFFMeanCDargs(alpha, eta, BL, functionName = "")
}
\arguments{
\item{alpha}{The value of the threshold. Must be finite, in (0,1), etc.}

\item{eta}{The value of the step size in the gradient descent. 
Must be finite, in range [0,1], etc.}

\item{BL}{The value of the burn-in length. Must be finite, above 0, etc.}

\item{functionName}{The name of the original function which is being
called to check the parameters. Will help user
with debugging. Default is \code{""}, in which
case no function name will be displayed.}
}
\description{
A function which will do all the checks for AFF, check the parameters
are in the proper ranges, etc. Does not return any values.
}
\keyword{internal}
