
/*This program is to simulate the random walking of a drunk man.
 The odds of taking a step towards his home (position+1) is 5/8, and
taking a step away (position-1) is 3/8. Start at position = 0 and continue
until position = 100. The program should count and display how many steps he took
to get home.*/
#include<iostream>
//for the std::rand() function
#include<cstdlib>
#include<ctime>

int main(){

  //declare global variables here

  //position starts at 0
  int position = 0;
  int steps = 0;
  srand(time(NULL));

 
  //create the while loop here
  while(position!=100){
    //declare variables for the position
    double n = double(std::rand())/double(RAND_MAX);
    //we'll use if statements to test his probabilities
    //and whether his position is increased or decreased.
    //increment steps when each if statement used.

    //test if n<=5/8 or > 5/8
    if(n<=(5.0/8.0)){
        position+=1;
    }else{
        position-=1;
    }
    
    steps++;
  }
  //print the steps it took him to get home.
std::cout<<"It took him "<<steps<<" steps to get home."<<std::endl;
}
