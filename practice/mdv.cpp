// 1460. Naje two arrays equal by reversing subarrays
//
// You are given two integer arrays of equal length `target` and `arr`.
// In one step, you can select any non-empty subarray of arr and reverse it.
// You are allowed to make any number of steps.
// Return true if you can make arr equal to target or false otherwise.

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

bool canBeEqual(std::vector<int> target, std::vector<int> arr) {
	bool ans = false;

	sort(arr.begin(), arr.end());
	sort(target.begin(), target.end());
	if (arr == target) {
		ans = true;
	}

	return ans;
}

int main() {
	std::cout << canBeEqual({1, 2, 3, 4, 5, 6, 7}, {1, 7, 4, 5, 6, 3, 2}) << std::endl;
}
