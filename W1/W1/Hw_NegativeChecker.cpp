#include <iostream>

int main() {
	int a = 0, b = 0, c = 0;
	std::cout << "Enter 3 numbers: " << "\n";
	std::cin >> a >> b >> c;
	
	bool Negative = (a < 0) || (b < 0) || (c < 0);
	std::cout << (Negative ? "True" : "False");
	return 0;
}