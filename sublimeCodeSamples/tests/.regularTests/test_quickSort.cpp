#include <iostream>
#include "../include/quickSort.h"
#include "../include/student.h"

#if 0
int main()
{
	std::vector<int> in = {10, 7, 8, 9, 1, 5, 3, 4, 6, 2 };
	std::cout<<"Original array: "<<std::endl;
	printVect(in);

	quickSort(in, 0, in.size()-1);

	std::cout<<"Sorted array: "<<std::endl;
	printVect(in);
	return 0;
}

#endif


