#include <iostream>
#include <vector>
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
}