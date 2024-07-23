#include <iostream>
#include <vector>

using namespace std;

void frequencySort(vector<int> arr) {
	vector<int> freqArr;
	vecotr<int> numArr;
	vector<int> sortedArr;

	for (size_t i = 0; i < arr.size(); i++) {
		int freq = 0;

		for (size_t j = 0; j < arr.size(); j++) {
			if (arr[i] == arr[j]) {
				freq++;
			}
		}

				
	}

	for (size_t i: freqOfNumArr) {
		cout << freqOfNumArr[i] << " ";
	}
}

int main() {
	frequencySort({3, 3, 2, 2, 2, 2, 1});

	return 0;
}
