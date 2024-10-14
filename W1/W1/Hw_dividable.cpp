#include <iostream>

int main() {
	int a = 0;
	int b = 0;
	std::cout << "Enter Divident: ";
	std::cin >> a;
	std::cout << "Enter Divisor: ";
	std::cin >> b;
	/*Quotient: 6
Remainder: 2 */
	std::cout << "Quotient: " << a / b << "\n";
	std::cout << "Remainder: " << a % b;

	return 0;
}