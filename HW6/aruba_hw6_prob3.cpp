#include <string>
#include <fstream>
#include<iostream>

using namespace std; 

//function prototype
void countDoc(const string& filename, int& wordCount, int& charCount);

int main() {
  //declare and initialize arguments
    int wordCount = 0;
    int charCount = 0;

    //call countDoc
    countDoc("dat_hw6_prob3.txt", wordCount, charCount);

}

//function "countDoc" will read any file sent to it and print out the number of words and characters in it
void countDoc(const string& fileName, int& wordCount, int& charCount) {

  //declare filestream object
    ifstream fin;
    //open the file
    fin.open(fileName);
    //while we haven't reached the end of the file...
        //will store the number of spaces in this document
        int spaces = 0;
        //store all strings in x;
        string x;
	//take lines from fin and send it to x
        getline(fin,x);

	//charCount *initially* holds all of our characters, including spaces
        charCount += x.length();

	//for every character in the variable that holds our document...
        for (char i : x) {
	  //if element i is whitespace, increment variable 'spaces'
            if (i == ' ') {
                spaces++;
            }
	}
        
        //subtract spaces from charCount to get the number of characters excluding spaces
        charCount -= spaces;

        //there's always one less space than a word in a sentence, so...
        wordCount = spaces + 1;
    
    //print out your results
	cout << "Number of words: " << wordCount << " words."<<endl<<"Number of characters (excluding spaces): " << charCount << " characters." << endl;

}
