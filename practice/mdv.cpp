// Given an array of integers arr, sort the array in increasing oreder based on the frequency of the values.
// If multiple values have the same frequency, sort them in decreasing order.
// Return the sorted array.

#include <iostream>
#include <vector>
#include <algorithm>
#include <typeinfo>

void frequencySort(std::vector<int> arr) {
	std::vector<int> freqArr;
	std::vector<int> numArr;
	std::vector<int> sortedArr;
	std::vector<std::vector<int>> freqOfNumArr;

	if (arr.size() > 0) {
		for (std::size_t i = 0; i < arr.size(); i++) {
			int numOccurrencesInArr = count(numArr.begin(), numArr.end(), arr[i]);

			if (numOccurrencesInArr == 0) {
				numArr.push_back(arr[i]);
			}
		}

		// The vector holds values like this: {{number, freq}, {number, freq}}
		for (std::size_t i = 0; i < numArr.size(); i++) {
			freqArr.push_back(count(arr.begin(), arr.end(), numArr[i]));
			freqOfNumArr.push_back({numArr[i], freqArr[i]});
		}

		
	} else {
		std::cout << "Bitch the array you provided is fucking empty, what you want me to do?\n";
	}
}

int main() {
	frequencySort({3, 3, 2, 2, 2, 2, 1, 4});

	return 0;
}
