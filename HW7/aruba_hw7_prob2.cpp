// COE301HW7P2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include<vector>

using std::srand;
using std::rand;
using std::cout;
using std::endl;
using std::vector;

//include random function
int random3();


int main()
{


	//create a vector with 18 elements
	//declare srand
	srand(time(NULL));
	//for(int i = 0; i<=20; i++)
	//cout << random3() << endl;
	//if sum = vector element, increment vector element by 1
	//an element in the vector is all the times the sum got that specific number
	//so make another for loop that takes each element, divides it by 10000, and
	//multiplies it by 100 to get the probability?
	
	//Make a vector that'll hold the sum of each 3-coin-flip
	vector<int> sumCounts(16, 0);
	//make a for loop that calls the function, and stores the result in the vector
	for (int i = 1; i <= 10001; i++) {
		//call the random function
		int s = random3();
		//cout << s << endl;
		//for every sum random3 gets, go to the (sum-1) 
		//element in sumCounts (since we start from 0) and increment 
		//that by 1.
		sumCounts[s - 3] += 1;
	}

	//make another for loop starting from 0, and go through every element 
	//in sumCounts, divide it by 10000, then multiply it by 100. That's the
	//probability. Display that. 
	// 'i' will reach the 15th index which should show the amount of times 18 was summed. 
	//Therefore, add 3 to 'i' when displaying the odds.
	for (int i = 0; i < 16; i++) {
		//cout << i << endl;
		double prob = (double(sumCounts[i]) / 10000.0) * 100.0;
		cout << "The probability of summing " << i + 3 << " from 3 dice is " << prob << "%." << endl;;
	}

	return 0;


}

//random function that returns a sum of three coin flips between 1 and 18
int random3() {
	//-declare 3 double variables that are probabiltiies (rand()/RAND_MAX) and multiply them by six
	double a, b, c;
	a = (rand() % 6) + 1.0;
	b = (rand() % 6) + 1.0;
	c = (rand() % 6) + 1.0;
	//-make a variable *sum* that holds their total
	int sum = a + b + c;
	return sum;
}



