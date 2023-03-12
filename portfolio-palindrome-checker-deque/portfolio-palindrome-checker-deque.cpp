// portfolio-palindrome-checker-deque.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Palindrome Checker using Deque and cctype
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <iomanip>
#include <cctype>

bool is_palindrome(const std::string& s) {
	std::deque<char> d;
	for (char c : s)
		if (std::isalpha(c))
			d.push_back(std::toupper(c));
	char c1{};
	char c2{};
	while (d.size() > 1) {
		c1 = d.front();
		c2 = d.back();
		d.pop_front();
		d.pop_back();
		if (c1 != c2)
			return false;
	}
	return true;
}

int main()
{
	std::string string1 = "Jenny Gabriel";
	std::cout << std::boolalpha;
	std::cout << string1 << " - is a palindrone - " <<
		is_palindrome(string1);
	return 0;
}
