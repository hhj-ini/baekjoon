#include <iostream>
#include <cmath>

void main2588()
{
	int A, B;
	std::cin >> A >> B;

	
	for (int i = 1; i <= 3; ++i) {
		int n = std::pow(10, i);
		int n2 = std::pow(10, i - 1);
		std::cout << A * ((B % n) - (B%n2)) / n2<< std::endl;
	}

	std::cout << A * B << std::endl;
}