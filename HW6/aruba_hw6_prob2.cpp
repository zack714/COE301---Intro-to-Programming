
#include <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

//protype for 'numflips'
int numFlips(int n);

int main(){
  //seed the random number generator *IN MAIN*
  srand(time(NULL));

  //initialize the total number of flips after 5000 loops
  int totalFlips = 0;

  //compute the total amount of flips it takes to get 5 heads in a row, 5000 times.
  for(int i = 0; i<=5000; i++){
    totalFlips+=numFlips(5);
  }
  
  //compute the average number of flips it took to get 5 heads in a row, and print out the result
  double avgFlips = double(totalFlips)/5000.0;

  cout<<"The average number of flips it took to get 5 heads in a row was: "<<avgFlips<<" flips."<<endl;
}

//function that returns the number of flips it took to get 'n' heads in a row
int numFlips(int n){

  //variables for simulating flips, storing the current number of heads in a row we have, and how many flips it takes

  /*you were preforming integer division here, and it's the bug that held you back for so long.
   YOU CAN NEVER BE TOO CAREFUL WITH CASTING! */

  double flip = double(rand())/double(RAND_MAX);		       
  int targetHeads = n;
  int heads = 0;
  int flips = 0;

  //while you haven't reached five heads in a row
  while(heads!=targetHeads)
    {
  //if the flip value is greater than or equal to 0.5, that's heads. incrememnt heads 
  if(flip>=0.5){
    heads++;
    flips++;
    flip = double(rand())/double(RAND_MAX);
    //if not, set heads back to 0. We want to get 5 heads in a row
    //still increment flips and recalculate the flip.
  }else{
    heads = 0;
    flips++;
    flip = double(rand())/double(RAND_MAX);
  }
    }
  //return how many flips it took you to get 5 heads in a row.
  return flips;

}
