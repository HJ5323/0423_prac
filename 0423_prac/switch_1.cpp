#include <iostream>

int main()
{
	int a;
	int b;
	char c;

	std::cout << "����_1�� �Է��ϼ���. : ";
	std::cin >> a;

	std::cout << "����_2�� �Է��ϼ���. : ";
	std::cin >> b;
	
	std::cout << "�����ڸ� �Է��ϼ���. (+ or - or *) : ";
	std::cin >> c;


	switch (c) // switch�� �� �� �ִ� Ÿ���� �������� �������� ����
	{
	case '+':
		std::cout << a + b;
		break;

	case '-':
		std::cout << a - b;
		break;

	case '*':
		std::cout << a * b;
		break;

	default:
		std::cout << "�ٽ� �Է��� �ּ���.";

	}


}