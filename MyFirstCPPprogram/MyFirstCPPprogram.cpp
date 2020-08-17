#include <iostream>

int cinNumber(int a, int b)
{
	return a + b;
}

int main()
{
	int a, b;
	std::cout << "Enter first number: " << std::endl;
	std::cin >> a;
	std::cout << "Enter second number: " << std::endl;
	std::cin >> b;
	std::cout << "Sum " << a << " + " << b << " = " << cinNumber(a, b) << std::endl;
	return 0;
}