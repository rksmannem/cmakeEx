#include <iostream>
#include "../include/quickSort.h"

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printVect(const std::vector<int>& v)
{
	//std::cout<<"size = "<<v.size()<<std::endl;
	for(std::vector<int>::const_iterator itr = v.begin(); itr != v.end(); ++itr)
		std::cout<<*itr<<" ";

	std::cout<<std::endl;
}

int partition(std::vector<int>& V, int low, int high)
{
	int pivot = V[high];
	int i = low - 1;

	for(int j =  low; j <= high-1; j++)
	{
		if(V[j] >= pivot)
		{
			i++;
			swap(&V[i], &V[j]);
		}
	}

	swap(&V[i+1], &V[high]);
	return (i+1);
}

void quickSort(std::vector<int>& inSequence, int low, int high)
{
	if(low < high)
	{
		int pi = partition(inSequence, low, high);
		//printVect(inSequence);
		quickSort(inSequence, low, pi-1);
		//printVect(inSequence);
		quickSort(inSequence, pi+1, high);
	}
}