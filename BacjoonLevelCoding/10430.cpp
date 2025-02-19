#include <iostream>

void main10430()
{
	int A, B, C;
	std::cin >> A >> B >> C;

	std::cout << (A + B) % C << std::endl;
	std::cout << ((A % C) + (B % C)) % C << std::endl;
	std::cout << (A * B) % C << std::endl;
	std::cout << ((A % C) * (B % C)) % C << std::endl;

}