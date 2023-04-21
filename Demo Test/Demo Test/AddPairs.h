#pragma once
#include <iostream>
#include <vector>

void AddPairs(std::vector<int> A, int x)
{
	//for (int i = 0; i < A.size(); i++)
	//	if (std::count(A.begin(), A.end(), A[i]) > 1 &&
	//		std::count(duplicate.begin(), duplicate.end(), A[i]) == 0)
	//		duplicate.push_back(A[i]);

	for (int i = 0; i < A.size(); i++)
	{
		for (int j = 0; j < A.size(); j++)
		{
			if (A[i] + A[j] == x)
				std::cout << A[i] << ", " << A[j] << std::endl;
		}
	}
}