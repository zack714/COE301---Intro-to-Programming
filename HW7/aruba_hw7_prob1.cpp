// aruba_hw7_prob3.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

//prototype for combo function
int combo(int, int);

int main() {
	for (int i = 0; i < 6; i++){
		cout << combo(6, i + 1) << endl;
}
	return 0;
}

//calculate the combo here
int combo(int n, int k) {
	//base cases
	//if the term is on the left or right edge, return 1
	if (k==0 || k == n) {
		return 1;
	}
	//otherwise follow the genereal case
	else {
		//for testing output
		//cout << combo(n - 1, k - 1) + combo(n - 1, k) << " ";
		
		//general pattern
		return combo(n - 1, k - 1) + combo(n - 1, k);
	}
}

