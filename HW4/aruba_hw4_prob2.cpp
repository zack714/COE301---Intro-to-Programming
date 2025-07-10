//use the monte carlo method to estiate PI.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;

int main(){

  
  //place a seed for the rand() function
  srand(time(NULL));

  //declare N which will store the number of samples the user wants, and variables for tracking different cases
  int N, inCir=0, outCir=0;

  //x and y coordinates for a random point
  double x, y;

  //declare PI constant to compare your estamation to
  const double PI = 3.14159265;
  //ask user for the amount of samples they want and store it in N
  cout<<"Enter the amount of random points you want to use in this simulation: ";
  cin>>N;

  //making a variable that'll end the while loop
  int count = 0;

  //while we haven't made the amount of samples the user wants
  while(count<N){

    //x and y will always be less than or equal to one.
    //In other words, they'll always be inside the square
    x = double(rand())/double(RAND_MAX);
    y = double(rand())/double(RAND_MAX);

    //If the point is inside the circle
    if(((x*x) + (y*y)) < 1){
      //count how many points are inside the circle.
      inCir++;
    }
    count++;
}
  //based on ratio btw area of circle/area of square equaling points inside circle/total points and solving for pi
  double estim = (4*double(inCir))/double(N);
  //to calculate how off your estimation was
  double diff = abs(PI-estim);

  //print out your estimation, and how off it was
  cout<<"Your estimation was: "<<estim<<"."<<'\n';
  cout<<"The difference between your estimation and the exact value was: "<<diff<<"."<<endl;
  
  return 0;
}
