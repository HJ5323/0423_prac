#include <iostream>

int main()
{
	int a;
	int b;
	char c;

	std::cout << "����_1�� �Է��ϼ���. ";
	std::cin >> a;

	std::cout << "����_2�� �Է��ϼ���. ";
	std::cin >> b;
	
	std::cout << "�����ڸ� �Է��ϼ���. (+ or - or *) ";
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