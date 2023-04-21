// https://app.codility.com/c%2Ffeedback%2FCS9JTM-MKJ%2F

#include "QuickSort.h"
#include "Palindrome.h"
#include "ReverseString.h"

#include <iostream>
#include <map>

int FindString(std::string S, int low, int high)
{
	if (low == high)
		return 1;

	if (S[low] == S[high])
		return FindString(S, low + 1, high - 1);

	return std::max(FindString(S, low, high - 1), FindString(S, low + 1, high));
}


int FindMinimum(std::string S, int low, int high)
{
	if (low >= high)
		return 0;

	if (S[low] == S[high])
		return FindMinimum(S, low + 1, high - 1);

	return 1 + std::min(FindMinimum(S, low + 1, high), FindMinimum(S, low, high - 1));
}

//int LCS(std::string S1, std::string s2, int length)
//{
//	const int arrLength = length;
//	int dp[arrLength + 1][arrLength + 1];
//}

int solution(std::string S)
{
	int low = 0;
	int high = S.length() - 1;
	return FindMinimum(S, low, high);

	//std::string reverse = S;
	//ReverseString(reverse);

	//return length - LCS(S, reverse, length);
}

int main()
{
	std::cout << solution("ervervige");

	return 0;
}