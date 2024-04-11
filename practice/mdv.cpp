#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a = 0;
    decltype(a) b = a;
    b++;
    cout << a << b;
}