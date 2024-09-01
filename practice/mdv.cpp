#include <iostream>
#include <vector>

int findClosestNumber(std::vector<int>& nums) {
	int ans = abs(nums[0]);
	int index = 0;

	for (int i = 1; i < nums.size(); i++) {
		if (abs(nums[i]) < ans) {
			ans = abs(nums[i]);
			index = i;
		} else if (nums[i] == ans) {
			index = i;
		}
	}

	return nums[index];
}

int main() {
	std::vector<int> nums = {-4, -2, 1, 4, 8};

	std::cout << findClosestNumber(nums) << std::endl;
	
	return 0;
}
