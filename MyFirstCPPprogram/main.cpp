#include <iostream>

int getUserInput()
{
	std::cout << "Please enter an integer:";
	int value;
	std::cin >> value;
	return value;
}

char getMathematicalOperation()
{
	std::cout << "Please enter which operator you want:";
	char op;
	std::cin >> op;
	return op;
}

int calculateResult(int x, char op, int y)
{
	switch (op)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	case '%':
		return x % y;
	}
	return -1;
}

void printResult(int result)
{
	std::cout << "Your result is: " << result << std::endl;
}

int main()
{
	int input1 = getUserInput();
	int operation = getMathematicalOperation();
	int input2 = getUserInput();
	int result = calculateResult(input1, operation, input2);
	printResult(result);
	return 0;
}