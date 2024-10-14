#include <iostream>

int main() {
	int a = 0, b = 0, c = 0,;
	std::cout << "Enter the three sides of a triangle: " << "\n";
	std::cin >> a >> b >> c;

	bool TriCheck = (a + b> c) && (c + b > a)&&(a + c > b)

	std::cout << (TriCheck ? "True" : "False")
	return 0;
}