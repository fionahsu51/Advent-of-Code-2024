#include "functions.h"
#include <cmath>  
#include <algorithm>
#include <iostream>      
#include <fstream>       
#include <sstream>
#include <vector> 

using namespace std;

void fillScholarLists(std::vector<int> &l1, std::vector<int> &l2) {
    int num1, num2;
    string s;
    ifstream inFile;
    inFile.open("input.txt");

    while(getline(inFile, s)) {
        istringstream ss(s);
        ss >> num1 >> num2;
        l1.push_back(num1);
        l2.push_back(num2);
    }

    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
}

int calculateTotalDifferences(const vector<int>& l1, const vector<int>& l2) {
    int total = 0;
    for (size_t i = 0; i < l1.size(); i++) {
        total += abs(l1[i] - l2[i]);  
    }
    return total;
}

int similarityScore(const vector<int> &l1, const vector<int> &l2) {
    int total = 0;
    int counter = 0;
    for (size_t i = 0; i < l1.size(); i++) {
        for (size_t j = 0; j < l2.size(); j++) {
            if(l1[i] == l2[j]) {
                counter += 1;
            }
        }
        total += counter * l1[i];
        counter = 0;
    }
    return total;
}