#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

int main(){

  std::ofstream patternfile;

  patternfile.open("pattern.txt");
    
  //create a nested for loop here
  for(int i = 0; i<=101 ; i++){

    //print out columns along a row
    for(int j = 0; j <= 101 ; j++){
      if( (sqrt(pow(double(i-51),2) + pow(double(j-51),2) ) )  < 30.0 )
	{
	  std::cout << std::setw(2) << "x";
	}else{
	std::cout <<" ";
      }
    }
    std::cout<<std::endl;
  }

  patternfile.close();


  return 0;
}
