#ifndef __MD_SCS_INC_QSORT_H__
#define __MD_SCS_INC_QSORT_H__

#include <string>
#include <vector>

void printVect(const std::vector<int>&);
void swap(int*, int*);
int partition(std::vector<int>&, int, int);
void quickSort(std::vector<int>&, int, int);

#endif
