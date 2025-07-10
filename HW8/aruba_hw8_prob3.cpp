// aruba_hw8_prob3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int numMatch(vector<int>& winNum, vector <int>& playNum);

int main()
{	//vector that holds winning numbers
	vector<int> winNum = { 31,17,4,5,20 };

	//will hold play numbers
	vector<int> playNum(5);

	//filestream object
	ifstream fin;

	//holds the number of matches
	int match1=0, match2=0, match3=0, match4=0, match5 = 0;

	//vector that holds count variables
	vector<int> counts = {match1,match2,match3, match4, match5};

	/*
	//have the user inter the numbers into an array
	for (int i = 0; i < 5; i++) {
		//starting from 1 is natural
		cout << "Enter number " << i + 1 << ": ";
		cin >> winNum[i];
	}
	*/
	
	//cout << "Your numbers are: ";
	//for (int i = 0; i < 5; i++) {
	//	cout << winNum[i] << " ";
	//}

	

	//open the file
	fin.open("dat_hw8_prob3.txt");

	//if the file wasn't opened, return an error message and exit the program.
	if (!fin.is_open()) {
		cout << "Failed to open file!";
		exit(-1);
	}
	//while we haven't reached the end of the file...
	while (!fin.eof()) {
		


		int res = numMatch(winNum, playNum);

		switch (res) {
		case 1:
			counts[0]++;
			break;
		case 2: 
			counts[1]++;
			break;
		case 3:
			counts[2]++;
			break;
		case 4:
			counts[3]++;
			break;
		case 5:
			counts[4]++;
			break;
		default:
			break;

		}
		//use a for loop to fill playNum
		for (int i = 0; i < 5; i++) {
			fin >> playNum[i];

		}
		
	}

	fin.close();

	for (int i = 0; i < 5; i++) {
		if (i == 0) {
			cout << "There were " << counts[i] << " tickets that matched " << i + 1 << " number from the winning ticket." << endl;

		}
		else {
			if (counts[i] == 1) {
				cout << "There was " << counts[i] << " ticket that matched " << i + 1 << " numbers from the winning ticket." << endl;
			}
			else {
				cout << "There were " << counts[i] << " tickets that matched " << i + 1 << " numbers from the winning ticket." << endl;
			}
		}
	}


	return 0;
}

int numMatch(vector<int>& winNum, vector <int>& playNum) {
	int match = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			//for every element in the winning array, sweep through all elements in the player array and see if they match
			if (winNum[i] == playNum[j]) {
				match++;
			}
		}
	}
	return match;

}





