#pragma once
#include <algorithm>
#include <string>

bool Anagrams(std::string str1, std::string str2)
{
	if (str1.length() != str2.length())
		return false;
	else
	{
		std::string anagram1 = str1;
		std::string anagram2 = str2;

		std::sort(anagram1.begin(), anagram1.end());
		std::sort(anagram2.begin(), anagram2.end());

		return anagram1._Equal(anagram2);
	}
}