#include <iostream>

int main() {
	int a = 0, b = 0, c = 0, d = 0;
	std::cout << "Enter a,b,c and d: "<<"\n";
	std::cin >> a >> b >> c >> d;
	bool IntervalCheck = (a <= c && b >= d) && (a <= c && b >= c) && (c <= a && d >= b) && (c <= a && c >= b);
	std::cout << IntervalCheck;


	return 0;
}