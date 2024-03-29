% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/originalRcode.R
\name{CUSUM_stream_jumpdetect}
\alias{CUSUM_stream_jumpdetect}
\title{'CUSUM' change detection for a stream in R}
\usage{
CUSUM_stream_jumpdetect(stream, BL, params)
}
\arguments{
\item{stream}{The stream of observations.}

\item{BL}{The burn-in length, used to estimate the mean and variance.}

\item{params}{A list of parameters for the 'CUSUM' algorithm. Consists of
             \describe{
                 \item{\code{d}}{A control parameter also known as 
                                 \eqn{k}.}

                 \item{\code{B}}{A control parameter also known as 
                                 \eqn{h}.}
             }}
}
\value{
A vector of estimated changepoints.
}
\description{
Original implementation in R of 'CUSUM' change detector, now with
documentation.
}
\section{Author}{

Dean Bodenham
}

\section{References}{

D. A. Bodenham and N. M. Adams (2016) 
\emph{Continuous monitoring for changepoints in data 
streams using adaptive estimation}. 
Statistics and Computing  
doi:10.1007/s11222-016-9684-8
}

\keyword{internal}
