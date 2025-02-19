#include <iostream>

void main1008()
{
	int A, B;

	std::cin >> A >> B;
	double result = double(A) / double(B);
	std::cout.precision(9);
	std::cout << result;
}