#include <iostream>      // For input/output (cin, cout, etc.)
#include <fstream>       // For file handling (ifstream)
#include <sstream>       // For string stream (istringstream)
#include <vector>        // For using the vector container
#include <algorithm>     // For sort() and other algorithms
#include "lists.h"
using namespace std;

int main() {
    vector<int> l1, l2;
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

    int total = calculateTotalDifferences(l1, l2);

    cout << total;
}