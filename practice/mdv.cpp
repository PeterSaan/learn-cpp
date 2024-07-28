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
	vector<vector<int>> freqOfNumArr;

	for (size_t i = 0; i < arr.size(); i++) {
		int numOccurrencesInArr = count(numArr.begin(), numArr.end(), arr[i]);

		if (numOccurrencesInArr == 0) {
			numArr.push_back(arr[i]);
		}
	}

	for (size_t i = 0; i < numArr.size(); i++) {
		freqArr.push_back(count(arr.begin(), arr.end(), numArr[i]));
		
	}
}

int main() {
	cout << __cplusplus;
	frequencySort({3, 3, 2, 2, 2, 2, 1, 4});

	return 0;
}
