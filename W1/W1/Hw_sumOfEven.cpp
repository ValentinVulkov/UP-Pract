#include <iostream>

int main() {
	int a = 0, b = 0, c = 0, d = 0;
	std::cout << "Enter a, b, c and d: " << "\n";
	std::cin >> a >> b >> c >> d;
	std::cout << (a + b + c + d) - (a * (a % 2) + b * (b % 2) + c * (c % 2) + d * (d % 2));

	return 0;
}