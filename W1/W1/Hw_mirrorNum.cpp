#include <iostream>

int main() {
	int a = 0;
	std::cin >> a;
	
	int hundreds = a / 100;
	a -= hundreds * 100;
	int ones = a % 10;
	a -= ones;

	bool PalindromeCheck = ((hundreds * 100 + a + ones) == (ones * 100 + a + hundreds));
	std::cout << hundreds * 100 << a << ones;
	return 0;
}