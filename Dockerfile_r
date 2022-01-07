FROM rocker/tidyverse:latest

# R Packages
RUN R -e "install.packages( \
    c('here', 'markdown', 'Rcpp', 'patchwork', 'microbenchmark', 'Rtauchen'))"

# GitHub Packages
RUN R -e "devtools::install_github('tnagler/RcppThread')"