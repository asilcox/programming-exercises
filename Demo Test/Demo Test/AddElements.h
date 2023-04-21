#pragma once
#include <vector>

int AddElements(std::vector<int> A)
{
	int sum = 0;

	for (int i = 0; i < A.size(); i++)
		sum += A[i];

	return sum;
}