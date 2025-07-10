#include<iostream>

int main(){

  double num;
  int cutNum;
  

  std::cout<<"Enter a number to round: ";
  std::cin>>num;
  
  
  cutNum = int(num);
  
  //fraction is not being calculated properly...
  double fraction = double(num) - int(cutNum);


  if(fraction<0.5){
    num-=fraction;
    std::cout<<'\n'<<"Your new balance is: "<<num<<"."<<std::endl;
  }else if(fraction>0.5){
    num = num + (1 - fraction);
   std::cout<<'\n'<<"Your new balance is: "<<num<<"."<<std::endl;
  }else if(fraction == 0.5){
    if(cutNum%2 == 0){
      num-=fraction;
      std::cout<<'\n'<<"Your new balance is: "<<num<<"."<<std::endl;
    }else{
      num+=fraction;
      std::cout<<'\n'<<"Your new balance is: "<<num<<"."<<std::endl;  }
  }



  return 0;
}

/*purpose of the banker's rounding algorithm:
to save data/power by rounding doubles into integers

if the money has a equal chance of being greater or less than .5, then these round ups and downs
will cancel out

why the .5 rule?

if you round up everytime with .5, you'll introudce a bias and you'll have less money than you actuall
have in your account. Ditto for rounding down with .5, but you'll have more money than you actually
estimate in your account

we do different roundings for even and off n.5s since there's a 50/50 chnace you get an even or odd
n.


 */
