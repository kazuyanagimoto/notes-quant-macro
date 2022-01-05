#include <Rcpp.h>
using namespace Rcpp;


// [[Rcpp::export]]
NumericVector solve_single(int nx, NumericVector x_grid, int ne, NumericVector e_grid, 
                            NumericMatrix P, double ssigma, double bbeta, 
                            int T, double r, double w) {
  
  NumericVector V (nx * ne * T) ;
  
  for(int t = T; t > 0; t--){
    for(int ix = 0; ix < nx; ix++){
      for(int ie = 0; ie < ne; ie++){
        
        double utility = -pow(10, 9);
        
        for(int ixp = 0; ixp < nx; ixp++){
          
          double expected = 0;
          if(t < T){
            for(int iep = 0; iep < ne; iep++){
              expected += P(ie, iep) * V[t * nx * ne + ne * ixp + iep];
            }
          }
          
          double c = (1 + r) * x_grid[ix] + e_grid[ie] * w - x_grid[ixp] ;
          
          if(c > 0){
            
            double utility_new = pow(c, 1 - ssigma) / (1 - ssigma) + bbeta * expected;
            
            if(utility_new > utility){
              
              utility = utility_new;  
              
            }
            
          }
          
          V[(t - 1) * nx * ne + ne * ix + ie] = utility;
          
        }
      }
    }
      
  }
  
  return V;
}
