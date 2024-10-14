#include <iostream>

int main() {
	int a = 0, b = 0, c = 0;
	std::cout << "Enter the three sides of a triangle: " << "\n";
	std::cin >> a >> b >> c;

	int perimeter = a + b + c;
	int area = sqrt( (perimeter/2)*(perimeter / 2-a) * (perimeter / 2 - b) * (perimeter / 2 - c));

	std::cout << "Perimeter: "<< perimeter << "\n";
	std::cout << "Area: " << area;
	return 0;
}