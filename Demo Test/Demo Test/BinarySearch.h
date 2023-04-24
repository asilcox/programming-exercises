#pragma once
#include <vector>

#include "InsertionSort.h"

int BinarySearch(std::vector<int> A, int key)
{
	int low = 0;
	int high = A.size() - 1;
	int mid = (low + high) / 2;

	while (low <= high)
	{
		if (A[mid] < key)
			low = mid + 1;
		else if (A[mid] == key)
			return mid;
		else
			high = mid - 1;
		mid = (low + high) / 2;
	}

	if (low > high)
		return -1;

	return -1;
}