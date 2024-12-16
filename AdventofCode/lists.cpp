#include "lists.h"
#include <cmath>  
#include <algorithm>

int calculateTotalDifferences(const std::vector<int>& l1, const std::vector<int>& l2) {
    int total = 0;
    for (size_t i = 0; i < l1.size(); i++) {
        total += std::abs(l1[i] - l2[i]);  
    }
    return total;
}