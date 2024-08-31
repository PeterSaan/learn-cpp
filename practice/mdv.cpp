#include <iostream>
#include <vector>

void number(int& num) {
	std::cout << num << std::endl;
}

int main() {
	int num = 1;
	number(num);
}
