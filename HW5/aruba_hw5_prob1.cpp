#include <iostream>
#include <cmath>

//compute PI using the numerical integration method.
int main(){


  const double PI = 3.14159265;

  int n;

  double xi = 0.0;

  //ask the user for the number of rectangles they want

  std::cout<<"Enter the amount of rectangles you would like: ";
  std::cin>>n;

  //define the width of a rectangle based on the user's input (dx)
  double dx = 1.0/double(n);

  //define total area (s) = 0;
  double sTot = 0.0;

  //run for loop starting at i = 1
  //eliminate the last term because the rectangle will be zero anyway and we don't want a rounding error for xi to make us take the square root of a negative number
  //we're underestimating PI but that's okay because with enough calculations it will converge to the true value of PI
  for(int i = 1; i<=(n-1) ; i++){
    //define xi+=dx;
    xi+=dx;

    double yi=sqrt(1.0-(xi*xi));

    double si = dx*yi;

    sTot+=si;
  }

  double piTot = sTot*4.0;

  std::cout<<"Your total area was: "<<piTot<<std::endl;

  std::cout<<"Your estimation from PI was off by "<<double((PI-piTot))<<"."<<std::endl;

  return 0;
}
