#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double factorial (int n);
double combo (int n, int k);

int main(){

  //declare a variable n and ask the user to give it a value
  int n;

  cout<<"Enter a number for n: ";
  cin>>n;
  cout<<'\n';

  while(n<=0){
    cout<<"That's an invalid value. Your input must be an integer greater than 0. Please input a positive integer: ";
    cin>>n;
  }

 int k = 1;

  while(k!=n){
    double term = combo(n,k);
    cout<<term<<endl;
    k++;
  }


}

//function for computing the factorial of a number
double factorial (int n){
//create a variable that'll hold the result of the factorial
  double result = 1.0;

 
  for (int i = 1;i<=n;i++){
    result*=i;
  }
  return result;
}



//run the combination function with 2 inputs
double combo(int n, int k){
  //stores the result of the combination function
  double comboTerm;

  //compute the term with the combination formula
  comboTerm = double((factorial(n)))/double((factorial(k)*factorial(n-k)));

  //return the result
  return comboTerm;

}
