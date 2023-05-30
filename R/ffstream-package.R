#' ffstream package 0.1.7
#' 
#' This function gives information on the package and how to see the vignette.
#'
ffstream <- function(){
    s <- "See the ffstream documentation or vignette for more details.\n"
    s <- paste0(s, "To see the command to run the vignette, ")
    s <- paste0(s, "run the function `ffstream_vignette()`\n")
    message(s)
}


#' ffstream vignette 0.1.7
#' 
#' This function opens the ffstream vignette.
#' 
#' @return Does not return anything.
#'
#' @examples
#' ffstream_vignette()
#' @export
ffstream_vignette <- function(){
    message('To see the vignette, run `vignette("intro", package="ffstream")`\n')
    message(vignette("intro", package="ffstream") )
}
