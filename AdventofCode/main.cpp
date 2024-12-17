#include <iostream>      // For input/output (cin, cout, etc.)
#include <fstream>       // For file handling (ifstream)
#include <sstream>       // For string stream (istringstream)
#include <vector>        // For using the vector container
#include <algorithm>     // For sort() and other algorithms
#include "functions.h"

using namespace std;

int main() {
    vector<int> l1, l2;

    fillScholarLists(l1, l2);
    int differences = calculateTotalDifferences(l1, l2);
    int similarityscore = similarityScore(l1, l2);

    cout << differences << endl;
    cout << "Simalarity Score: " << similarityscore;
}