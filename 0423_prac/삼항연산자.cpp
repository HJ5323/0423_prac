#include <iostream>

int main()
{
	int a;
	
	std::cout << "���ڸ� �Է��ϼ���. : ";
	std::cin >> a;

		a % 5 == 0 ? std::cout << a << "�� 5�� ����Դϴ�."
					: std::cout << a << "�� 5�� ����� �ƴϳ׿�Ф�.";

		// %�� ������ �����ڷ� �������� 0�̸� 5�� ���

}
