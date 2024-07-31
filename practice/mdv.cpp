// Given an array of integers arr, sort the array in increasing oreder based on the frequency of the values.
// If multiple values have the same frequency, sort them in decreasing order.
// Return the sorted array.

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>

void frequencySort(std::vector<int> arr) {
	std::unordered_map<int, int> numMap;

	for (int i: arr) {
		numMap[i] = std::count(arr.cbegin(), arr.cend(), i);
	}

	sort(arr.begin(), arr.end(), [&](int a, int b) {
		if (numMap[a] == numMap[b]) {
			return a > b;
		}
		return numMap[a] < numMap[b];
	});

	for (auto i: arr) {
		std::cout << i << "\n";
	}
}

int main() {
	frequencySort({3, 3, 2, 2, 2, 2, 1, 4});

	return 0;
}
