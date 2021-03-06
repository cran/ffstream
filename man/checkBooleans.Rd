% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/errorMessage.R
\name{checkBooleans}
\alias{checkBooleans}
\title{Check the multiple and single flags, as well as usePrechange and skipCheck}
\usage{
checkBooleans(multiple, single, usePrechange, skipCheck, functionName = "")
}
\arguments{
\item{multiple}{A boolean}

\item{single}{A boolean}

\item{usePrechange}{A boolean}

\item{skipCheck}{A boolean}

\item{functionName}{The name of the original function which is being
called to check the parameters. Will help user
with debugging. Default is \code{""}, in which
case no function name will be displayed.}
}
\description{
Make sure the booleans \code{multiple} and \code{single} are not both 
\code{NULL}. Also
}
\keyword{internal}
