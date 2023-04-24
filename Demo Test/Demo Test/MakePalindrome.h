#pragma once
#include <string>
#include <vector>

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

int lps(std::string S)
{
	int n = S.length();

	std::vector<std::vector<int>> L;

	for (int i = 0; i < n; i++)
	{
		L.push_back({});
		for (int j = 0; j < n; j++)
			L[i].push_back({});
	}

	for (int i = 0; i < n; i++)
		L[i][i] = 0;

	for (int cl = 2; cl <= n; cl++)
	{
		for (int i = 0; i < n - cl + 1; i++)
		{
			int j = i + cl - 1;
			if (S[i] == S[j])
				L[i][j] = L[i + 1][j - 1];
			else
				L[i][j] = std::min(L[i][j - 1], L[i + 1][j]) + 1;
		}
	}

	return L[0][n - 1];
}

int solution(std::string S)
{
	//int low = 0;
	//int high = S.length() - 1;
	//return FindMinimum(S, low, high);

	//std::string reverse = S;
	//ReverseString(reverse);

	//return length - LCS(S, reverse, length);

	int n = S.length();

	int len = lps(S);
	return len;
}