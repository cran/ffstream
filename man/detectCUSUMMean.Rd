% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/detectCUSUMMeanCDR.R
\name{detectCUSUMMean}
\alias{detectCUSUMMean}
\title{Detect a change/changes in a vector using 'CUSUM' method}
\usage{
detectCUSUMMean(
  x,
  k = 0.25,
  h = 8,
  BL = 50,
  multiple = TRUE,
  single = !multiple,
  usePrechange = FALSE,
  prechangeMean = NULL,
  prechangeSigma = NULL,
  prechangeVar = NULL,
  skipCheck = FALSE
)
}
\arguments{
\item{x}{The vector (stream) in which to detect change(s).}

\item{k}{control parameter for 'CUSUM'. Default is \code{0.25}.}

\item{h}{control parameter for 'CUSUM'. Defqult is \code{8.00}.}

\item{BL}{The burn-in length. Default is \code{BL=50}.}

\item{multiple}{Boolean to use to decide whether to detect multiple changes
or only a single change. Default is \code{TRUE} (i.e. detect 
multiple changes).}

\item{single}{Boolean to use to decide whether to detect only a single 
change or multiple changes. Set to \code{!multiple}, i.e.
default is FALSE. If both \code{single} and \code{multiple}
are set to \code{TRUE}, then only a single change will be
detected; if both set to \code{FALSE} then multiple changes
will be detected (i.e. \code{single} dominates).}

\item{usePrechange}{Boolean indicating whether prechange parameters
(mean and variance) are known and will be used 
(or not). Default is
\code{FALSE}. If \code{TRUE}, then prechange mean
and standard deviation variance must be specified.
See parameters \code{prechangeMean},
\code{prechangeSigma} and \code{prechangeVar}.}

\item{prechangeMean}{Value to be used for the prechange mean. 
Default is \code{NULL}. 
If \code{prechangeKnown = TRUE} and value is
\code{NULL}, this will result in an error.}

\item{prechangeSigma}{Value to be used for the prechange standard 
deviation. Default is \code{NULL}. 
If \code{prechangeKnown = TRUE} and value is
\code{NULL}, this will result in an error, unless
\code{prechangeVar} is not \code{NULL}.}

\item{prechangeVar}{Value to be used for the prechange variance. 
Default is \code{NULL}. 
If \code{prechangeKnown = TRUE} and value is
\code{NULL}, this will result in an error, unless
\code{prechangeSigma} is not \code{NULL}.
\code{prechangeVar} is set to 
\code{sqrt(prechangeSigma)}.}

\item{skipCheck}{A boolean which allows the function to skip the check 
of the stream. Default is \code{FALSE}.}
}
\value{
A list with the following elements:
        \describe{
            \item{\code{tauhat}}{A vector of the changepoints found.}
         }
}
\description{
Given a vector \code{x}, use the 'CUSUM' method to sequentially detect 
changes (or a single change) in the MEAN of the vector.
}
\details{
'CUSUM' updates via: 
         \deqn{S_{j} = \max{0, S_{j-1} + (x_{j} - \mu)/ \sigma - k}}
         and 
         \deqn{T_{j} = \max{0, S_{j-1} - (x_{j} - \mu)/ \sigma - k}}
         where \eqn{\mu} and \eqn{\sigma} are, respectively, the mean 
         and variance of the in-control stream, 
         \eqn{x_j} is the observation at time \eqn{j}
         and \eqn{k} 
         is a control parameter for 'CUSUM'. Then, a change is signalled
         if \eqn{S_j > h} or \eqn{T_j > h},
         where \eqn{h} is the other control parameter. This is the 
         formulation for using 'CUSUM' to detect an increase or decrease
         in the mean.
}
\section{Author}{

Dean Bodenham
}

\section{References}{

E. S. Page (1954) \emph{Continuous inspection schemes}. 
Biometrika, 41(1/2), 100-115
}

\examples{
# create a stream with three changepoints
set.seed(8)
x <- rnorm(400, 5, 1) + rep(c(0:3), each=100) # mean is 5 and s.d. is 1

# multiple changepoints
list_cusum <- detectCUSUMMean(x, k=0.25, h=8.00, BL=50, multiple=TRUE)

# now only a single (the first) changepoint
list_cusum2 <- detectCUSUMMean(x, k=0.25, h=8.00, BL=50, single=TRUE)

# now only a single (the first) changepoint, but with the prechange 
# mean and variance known
list_cusum3 <- detectCUSUMMean(x, k=0.25, h=8.00, BL=50, single=TRUE,
                               prechangeMean=5, prechangeSigma=1)




}
