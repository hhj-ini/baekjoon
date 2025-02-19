#include <iostream>

int main()
{
	int a;
	std::cin >> a;


	for (int i = 1; i <= a; ++i) {
		for (int k = 0; k < a - i; ++k)
			std::cout << ' ';
		for (int j = 0; j < 2 * i - 1; ++j) 
			std::cout << '*';
		std::cout << std::endl;
	}


	for (int i = a - 1; i > 0; --i) {
		for (int j = 0; j < a - i; ++j)
			std::cout << ' ';
		for (int k = 0; k < 2 * i - 1; ++k)
			std::cout << '*';
		std::cout << std::endl;
	}

}