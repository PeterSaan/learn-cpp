// Given an array of integers arr, sort the array in increasing oreder based on the frequency of the values.
// If multiple values have the same frequency, sort them in decreasing order.
// Return the sorted array.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void frequencySort(vector<int> arr) {
	vector<int> freqArr;
	vector<int> numArr;
	vector<int> sortedArr;

	for (size_t i: arr) {
		int numOccurrencesInArr = count(numArr.begin(), numArr.end(), i);

		if (numOccurrencesInArr == 0) {
			numArr.push_back(i);
		}
	}

	for (size_t i: numArr) {
		freqArr.push_back(count(arr.begin(), arr.end(), i));
	}
}

int main() {
	frequencySort({3, 3, 2, 2, 2, 2, 1, 4});

	return 0;
}
