#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){

  //var that will hold the sum of all 'k' terms of x in the series
  double approx;
  
  //x value the user inputs
  double x;

  //will store the x term of the current iteration
  double xTerm;
  
  //ask the user for the x value they'd like to approximate
  cout<<"Enter the x value you'd like to approximate: ";
  cin>>x;
  cout<<'\n';

  
  //use a variable k to make 10 approximations of sin(x)
  for(int k = 1; k<=10; k++) {
    //make sure approx is reset each loop and doesn't accumulate
   approx = 0.0;
   
  //for loop here: this will eventually generate up to 10 terms
    for(int n = 0; n<=(k-1); n++){
    
    //create a variable factorial product to hold the result of your factorial for each iteration. initialize it as one.
    double factProd = 1.0;
    
    //create a nested for loop with the upper limit being 2n+1. Multiply factorial product by each new integer the loop reaches.
    for(int j = 1; j <= ( (2*n) + 1 ); j++){
      factProd*=double(j);
    }

    //multiply x (raised to the 2n+1 power) by negative one raised to the n and divide it by factorial product
    xTerm = ((pow(-1.0,n)*pow(x,(2*n+1))))/factProd;
    //add xTerm to a variable that holds the sum of all the x terms
    approx+=xTerm;
  }

  //print out the final sum of all x terms and compare it to sin(x) with the sin() function
  cout<<"Your approximation (with "<<k<<" terms) was: "<<approx<<"."<<endl;

  //compare it to the actual use of the function
  cout<<"The absolute difference between your approximation and the actual value of sin("<<x<<") was: "<<fabs(double(sin(x)-approx))<<"."<<endl;
  }
  
  return 0;
}
