#include <iostream>

int main() {
	int num  = 0;
	std::cout << "Enter a number: " << "\n";
	std::cin >> num;

	int thousands = a / 1000;
	a -= thousands * 1000;
	int hundreds = a / 100;
	a -= hundreds * 100;
	int tens = a / 10;
	a -= tens;
	int ones = a;

	
	std::cout << thousands+hundreds+tens+ones<< " " << thousands * hundreds * tens * ones << " " << (thousands + hundreds + tens + ones)/4;
	return 0;
}