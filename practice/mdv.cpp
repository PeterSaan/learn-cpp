#include <iostream>
#include <vector>
#include <string>

void countSeniors(std::vector<std::string> details) {
	int ans = 0;

	for (std::size_t i = 0; i < details.size(); i++) {
		char firstNum = details[i][11];
		char secondNum = details[i][12];

		auto ageStr = std::string(1, firstNum) + secondNum;
		int ageNum = stoi(ageStr);

		if (ageNum > 60) {
			ans++;
		}
	}

	std::cout << ans << std::endl;
}

int main() {
	countSeniors({"7868190130M7522","5303914400F9211","9273338290F4010"});
	/*char first = '4';
	char sec = '3';
	auto ageS = std::string(1, first) + sec;

	std::cout << ageS << std::endl;*/

	return 0;
}
