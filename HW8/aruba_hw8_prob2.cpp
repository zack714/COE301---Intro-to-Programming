// aruba_hw8_prob2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

//function prototype
vector<double> movingAverage(vector<double>& v, int n);

int main()
{
	vector<double> test = { 1.0,2.0,3.0,4.0,3.0,3.5 };
	int n = 2;
	for (int i = 0; i < 3; i++) {
		vector<double> out = movingAverage(test, n);
		cout << "With n = " << n << "..." << endl;
		for (int i = 0; i < out.size(); i++) {
			cout << " " << out[i] << " ";
		}
		cout << endl;
		n++;
	}
	return 0;

}

vector<double> movingAverage(vector<double>& v, int n) {
	//output vector of same size as vout
	vector<double> vout(v.size());
	
	for (int i = 0; i < vout.size(); i++) {
		//start at the element of interest
		double sum = 0.0;
		//add up all the previous elements of interested element
		for (int j = (i - n+1); !(j>i); j++) {
			//cout << "i: " << i;
			//cout <<" j: "<< j <<endl;
			//if the index is out of range, add 0 to the sum.
			if (j < 0) {
				sum += 0.0;
			}
			//otherwise, it's in the vector. Add it to the sum.
			else {
				sum += v[j];
			}
		}
		//after you've calculated the sum, divide it by n
		double res = sum / n;
		//put the final value in vout
		vout[i] = res;
	}

	return vout;


}




