#include "CommonElements.h"

#include <iostream>
#include <map>

int main()
{
	std::vector<int> commonElements = CommonElements(
		{ 1, 5, 10, 20, 40, 80 }, { 6, 7, 20, 80, 100 }, { 3, 4, 15, 20, 30, 70, 80, 120 });
	
	for (int i = 0; i < commonElements.size(); i++)
		std::cout << commonElements[i] << " ";

	return 0;
}