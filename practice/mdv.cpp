/*
* Given two strings `s` and `t`, return true if `s` is a subsequence of `t`, or false otherwise.
* A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters
* without disturbing the relative positions of the remaining characters. 
* i.e., "ace" is a subsequence of "abcde" while "aec" is not.
*/

#include <iostream>

bool isSubsequence(std::string s, std::string t) {
	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < t.length(); j++) {

		}
	}
}

int main() {
	std::cout << isSubsequence("ace", "abcde") << std::endl;

	return 0;
}


