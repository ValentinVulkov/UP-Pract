#include <iostream>

int main() {
	int a = 0;
	std::cin << a;
	int thousands = a / 1000;
	a -= thousands * 1000;
	int hundreds = a / 100;
	a -= hundreds * 100;
	int tens = a / 10;
	a -= tens * 10;
	std::cout >> thousands >> hundreds >> tens > a;
	return 0;
}