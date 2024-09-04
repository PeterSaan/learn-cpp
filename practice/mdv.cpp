// Roman to integer

#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <typeinfo>

void romanToInt(std::string s) {
	int ans = 0;
	std::reverse(s.begin(), s.end());
	std::unordered_map<char, int> romanValues;
	
	romanValues['I'] = 1;
	romanValues['V'] = 5;
	romanValues['X'] = 10;
	romanValues['L'] = 50;
	romanValues['C'] = 100;
	romanValues['D'] = 500;
	romanValues['M'] = 1000;
	
	for (int i = 0; i < s.length(); i++) {
		if (i > 0 && romanValues[s[i]] < romanValues[s[i-1]]) {
			ans -= romanValues[s[i]];
		} else {
			ans += romanValues[s[i]];
		}
	}
	
	std::cout << ans << std::endl;
}

int main() {
	romanToInt("MCMXCIV");
	
	return 0;
}
