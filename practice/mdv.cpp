#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void test(vector<int> arr)
{
    vector<int> ans = {};
  
  for(int i = arr[0]; i <= arr[arr.size() - 1]; i++)
  {
    ans.push_back(i);
  }

    for(const auto& e: ans)
    {
        cout << e << endl;
    }
}

int main()
{
    test({1, 720});
}