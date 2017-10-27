#ifndef __MD_SCS_INC_MSORT_H__
#define __MD_SCS_INC_MSORT_H__

#include <vector>

void printArray(const std::vector<int>& arr);
void mergeSort(std::vector<int>& arr, int low, int high);
void combine(std::vector<int>& arr, int low, int lowEnd, int highFirst, int high);


#endif