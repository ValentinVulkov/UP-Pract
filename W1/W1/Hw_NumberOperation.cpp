#include <iostream>

int main() {
	int a = 0, b = 0,c = 0,x = 0;
	std::cout << "Enter the three coefficients of a quadratic trinomial and the value of x: " << "\n";
	std::cin >> a >> b >> c >> x;

	std::cout << a * x * x + b * x + c;


	return 0;
}