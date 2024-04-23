#include <iostream>

int main()
{
	int a;
	int b;
	char c;

	std::cout << "변수_1을 입력하세요. ";
	std::cin >> a;

	std::cout << "변수_2을 입력하세요. ";
	std::cin >> b;
	
	std::cout << "연산자를 입력하세요. (+ or - or *) ";
	std::cin >> c;


	switch (c)
	{
	case '+':
		std::cout << a + b;

	case '-':
		std::cout << a - b;

	case '*':
		std::cout << a * b;

	default:

		break;
	}


}