// aruba_hw8_prob1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//PURPOSE: create a vector that checks if a vector is sorted in increasing order.

#include <iostream>
#include <vector>
using namespace std;
//protoype for function
bool isSorted(const vector<int>& v);

int main()
{
    //sample input vectors
    vector<int> vec1 = {1,2,5,6};
    vector<int> vec2 = { 5,6,0,1 };
    vector<int> vec3 = {};
    vector<int> vec4 = { 10 };
    vector<int> vec5 = { 10,5,10 };
    vector<int> vec6 = { 10,10,20 };
    vector <int> vec7 = { 10,10,20,5 };

    vector<vector<int>> vecs = { vec1,vec2,vec3,vec4,vec5,vec6,vec7 };

    for (int i = 0; i < vecs.size(); i++) {
        
        for (int elem: vecs[i]) {
            cout << elem << " ";
        }
        bool res = isSorted(vecs[i]);
        cout<<" <- "<<res<<endl;
        
    }
    //will show whether the vector is sorted or not
    //bool res = isSorted(vec);
    //output result
    //cout <<" "<< res <<" "<< endl;
    return 0;
}

//will check and return whether a vector is sorted in increasing order or not
bool isSorted(const vector<int>& v) {
    int size = v.size();

    //if the vector empty or has 1 element. It's automatically sorted. 
    if (size == 0 || size == 1) {
        return true;
    }
    
    for (int i = 0; i <= size-1; i++) {
       
        //if the next element is less than the current element, it's not sorted. Return false.
        if (v.at(i + 1) < v.at(i)) {
            return false;
            break;
        }
        //if you've reached the second to last element by this point and haven't returned false, the vector is sorted
        if (i == size - 2) {
            return true;
        }
    }



}


