#include <iostream>

int main() {
	int a = 0, b = 0;
	std::cout << "Enter a and b: " << "\n";
	std::cin << a << b;

	b = b + a;
	a = b - a;
	b = b - a;

	std::cout << "a(first): " << a << "b(seconds)" << b;

	return 0;
}