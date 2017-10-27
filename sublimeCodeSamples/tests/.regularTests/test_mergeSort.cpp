#include <iostream>
#include "../include/mergeSort.h"

#if 0
int main()
{
	std::vector<int> in = {10, 7, 8, 9, 1, 5, 3, 4, 6, 2 };
	std::cout<<"Original array: "<<std::endl;
	printArray(in);

	int low = 0;
	int high = in.size() -1 ;

	mergeSort(in, low, high);
	std::cout<<"Sorted array: "<<std::endl;
	printArray(in);
	return 0;
}

#endif
