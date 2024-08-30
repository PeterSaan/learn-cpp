#include <iostream>
#include <vector>

int findClosestNumber(vector<int>& nums) {
	for(auto i: nums) {
		i = abs(i);

	}
	
	std::cout << nums << std::endl;
}

int main() {
	findClosestNumber({1, 2, 3, 4, 5});

	return 0;
}
