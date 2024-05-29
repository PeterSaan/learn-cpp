#include <iostream>
#include <vector>
<<<<<<< HEAD
#include <ctime>

using namespace std;

void test(vector<int> arr)
{
	vector<int> ans = {};

	for (int i = arr[0]; i <= arr[arr.size() - 1]; i++)
	{
		if (i % 2 == 0)
		{
			ans.push_back(i);
		}
	}

	for (const auto &e : ans)
	{
		cout << e << endl;
	}
}

int main()
{
	test({1, 100});
	// int n = rand();
	// int* point_n = &n;
	// cout << rand();
=======


using namespace std;

// vector<int> digitize(int n) {
//   vector<int> arr;
  
  
// }

int main() {
  vector<int> arr = {1, 2, 3, 4, 5};

  cout << arr.size();
>>>>>>> 8660048 (Did some Codewars)
}