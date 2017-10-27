#include <iostream>
#include "../include/mergeSort.h"


void mergeSort(std::vector<int>& arr, int low, int high)
{
	if(low < high)
	{
		int mid = low + (high - low)/2;
		mergeSort(arr, low, mid);
		mergeSort(arr, mid+1, high);

		//combine the two sorted Arrays into a New sorted Array.
		combine(arr, low, mid, mid+1, high);
		printArray(arr);
	}
}


void combine(std::vector<int>& arr, int lowFirst, int lowEnd, int highFirst, int highEnd)
{
	std::vector<int> L;
	std::vector<int> R;

	//create two lists from the input list based on the mid

	int k = 0;
	for(int i = lowFirst; i <= lowEnd; ++i)
	{
		L[k] = arr[i];
		k++;
	}

	printArray(L);

	k = 0;
	for(int j = highFirst; j <= highEnd; ++j)
	{
		R[k] = arr[j];
		k++;
	}
	printArray(R);
	//compare the elements in two list and modify the original list accordingly

	int p = 0;
	int q = 0;
	int x = 0;
	while(p <= lowEnd && q <= highEnd)
	{
		if(L[p] <= R[q])
		{
			arr[x++] = L[p++];
		}
		else
			arr[x++] = R[q++];
	}
	while(p <= lowEnd)
	{
		arr[x++] = L[p++];
	}
	while(q <= highEnd)
	{
		arr[x++] = R[q++];
	}
}

void printArray(const std::vector<int>& arr)
{
	for(std::vector<int>::const_iterator itr = arr.begin(); itr != arr.end(); ++itr)
	{
		std::cout<<*itr<<" ";
	}
	std::cout<<std::endl;
}


