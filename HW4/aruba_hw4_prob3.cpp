#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

  //to keep track of the amount of words in the file
  int count = 0;
  //filestream will send words here
  double num;
  //initial lowest score. Will be updated if a lower grade is found
  double low = 100;
  //object that reads a file
  ifstream fin;
  //to store the letter grade
  string score;

  double sum = 0;
  //open the text file in the same directory in this program
  fin.open("dat_hw4_prob3.txt");

  //if the file wasn't opened, print an error message and exit the program
  if (!fin.is_open()){
    cout<<"Failed to open file!"<<endl;
    exit(-1);
  }

  
  //while the end of the file hasn't been reached
  while(!fin.eof()){
    //stream the numbers into variable num
    fin>>num;
    //if the number is lower than the current low, make that number the new low
    if(num<low){
      low = num;
    }
    //keep track of how many numbers we've gone through
    count++;

    sum+=num;
  }

  //remove low from num
  sum-=double(low);
  //compute the average without the low
  double avg = sum/(double(count) - 1.0);

  //use if statements to get the letter grade
  if(avg>=90.0){
    score = 'A';
    }else if(avg>=80.0){
    score = 'B';
  }else if(avg>=70){
    score = 'C';
  }else{
    score = 'D';
  }
  //print out the average and the letter score
  cout<<"The average score is: "<<avg<<" and your final grade is a "<<score<<"."<<endl;

  return 0;
}
