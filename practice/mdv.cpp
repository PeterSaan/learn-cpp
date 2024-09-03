/*
 * You are given two strings (word1 and word2).
 * Merge the strings by adding letters in alternating order, starting with word1.
 * If a string is longer than the other, append the additional letters onto the end of the merged string.
 * Return the merged string.
*/

#include <iostream>
#include <string>

void mergeAlternately(std::string word1, std::string word2) {
	std::string ans = "";
	int diff = word1.length() - word2.length();

	if (diff == 0) {
		for (int i = 0; i < word1.length(); i++) {
			ans = ans + word1[i] + word2[i];
		}
	} else if (diff < 0) {
		for (int i = 0; i < word1.length(); i++) {
			ans = ans + word1[i] + word2[i];
		}
		for (int i = word1.length(); i < word2.length(); i++) {
			ans += word2[i];
		}
	} else if (diff > 0) {
		for (int i = 0; i < word2.length(); i++) {
			ans = ans + word1[i] + word2[i];
		}
		for (int i = word2.length(); i < word1.length(); i++) {
			ans += word1[i];
		}
	}
	
	std::cout << ans << std::endl;
}

int main() {
	mergeAlternately("cdf", "a");
	
	return 0;
}
