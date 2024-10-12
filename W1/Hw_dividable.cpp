#include <iostream>

int main() {
	int n = 0;
	std::cin >> n;
	bool dividable = (n % 2 == 0 && n % 3 != 0);

	
	//std::cout << std::boolalpha << dividable;
	std::cout << (dividable ? "true" : "false") << "\n";

	return 0;
}