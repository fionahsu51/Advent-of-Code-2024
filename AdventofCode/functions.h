#ifndef functions_H
#define functions_H
#include <vector>

void fillScholarLists(std::vector<int> &l1, std::vector<int> &l2);
int calculateTotalDifferences(const std::vector<int>& l1, const std::vector<int>& l2);
int similarityScore(const std::vector<int> &l1, const std::vector<int> &l2);

#endif