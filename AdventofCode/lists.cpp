#include "lists.h"
#include <cmath>  
#include <algorithm>

using namespace std;

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