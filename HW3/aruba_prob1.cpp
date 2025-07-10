#include <iostream>
using namespace std;

char letter;

int main(){

  cout<<"Enter a character: ";
  cin>>letter;

  if((letter>='A') && (letter<='Z'))
    {
      letter+= 32;
    }

  cout<<letter<<endl;

  //print out the value whether its an uppercase or a lowercase!
  return 0;
}
