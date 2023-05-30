context("Test 16: Checking methods when vectors are passed")

test_that("Check if no change, and change is sought", {
    set.seed(1)
    stream <- rnorm(100)
    k <- 1.00
    h <- 4.00
    #single
    result <- detectCUSUMMean(stream, k=k, h=h, 
                              single=TRUE, usePrechange=TRUE, 
                              prechangeMean=0, prechangeSigma=1)

    #should find nothing
    expect_equal(length(result$tauhat), 0)
})


test_that("Check if usePrechange, that multiple will not work", {
    set.seed(1)
    stream <- rnorm(10)
    k <- 1.00
    h <- 4.00

    #multiple
    expect_error( detectCUSUMMean(stream, k=k, h=h, 
                              multiple=TRUE, usePrechange=TRUE, 
                              prechangeMean=0, prechangeSigma=1), 
                  "using prechange values with multiple")

})


test_that("Check if change, and single changes is sought", {
    set.seed(1)
    stream <- rnorm(100) + rep(c(0, 3), each=50)
    k <- 1.00
    h <- 4.00
    soln_tauhat <- 53


    result <- detectCUSUMMean(stream, k=k, h=h, 
                              single=TRUE, usePrechange=TRUE, 
                              prechangeMean=0, prechangeSigma=1)

    #should find a change
    expect_equal(length(result$tauhat), 1)
    expect_equal(result$tauhat, soln_tauhat)
})



test_that("Another check if change, and single changes is sought", {
    #discovered error - multiple=TRUE cannot have  usePrechange=TRUE
    #need to modify constructors

    set.seed(2)
    stream3 <- rnorm(100) + rep(c(0, 1), each=50)
    k <- 1.00
    h <- 4.00
    soln_tauhat <- 92

    result_sing <- detectCUSUMMean(stream3, k=k, h=h, single=TRUE, usePrechange=TRUE, prechangeMean=0, prechangeSigma=1)
    #[1] 92
    expect_equal( result_sing$tauhat[1], soln_tauhat)
})




#
#    result_mult <- detectCUSUMMean(stream3, k=1.00, h=4.00, multiple=TRUE, usePrechange=TRUE, prechangeMean=0, prechangeSigma=1)
#    #$tauhat
#    #integer(0)
#
#    expect_equal(result_sing$tauhat[1], result_mult$tauhat[1])
#

#    > set.seed(2)
#    > stream3 <- rnorm(100) + rep(c(0, 1), each=50)
#    > detectCUSUMMean(stream3, k=1.00, h=4.00, single=TRUE, usePrechange=TRUE, prechangeMean=0, prechangeSigma=1)
#    $tauhat
#    [1] 92
#
#    > detectCUSUMMean(stream3, k=1.00, h=4.00, multiple=TRUE, usePrechange=TRUE, prechangeMean=0, prechangeSigma=1)
#    $tauhat
#    integer(0)


#> set.seed(1)
#> stream2 <- rnorm(100) + rep(c(0, 3), each=50)
#> detectCUSUMMean(stream2, k=1.00, h=4.00, single=TRUE, usePrechange=TRUE, prechangeMean=0, prechangeSigma=1)
#$tauhat
#[1] 53
#
#> detectCUSUMMean(stream2, k=1.00, h=4.00, multiple=TRUE, usePrechange=TRUE, prechangeMean=0, prechangeSigma=1)
#$tauhat
#[1] 52



