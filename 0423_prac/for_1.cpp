#include <iostream>

//int main()
//{
//	int j = 5;
//	std::cout << j << "�� ���" << std::endl;
//
//	for (int i = 1; i <= 9; i++) // 1���� 9���� �ݺ��ϸ鼭 1�� ����
//	{
//		std::cout << j << " * " << i << " = " << i * j << std::endl;
//	}
//
//	return 0;
//
//}


int main()
{
	std::cout << "1~9�� ���" << std::endl;

	for (int i = 1; i <= 9; i++) // 1���� 9���� �ݺ��ϸ鼭 1�� ����
	{
		std::cout << "----" << i << "�� ----" << std::endl;

		for (int j = 1; j <= 9; j++)
		{
			std::cout << i << " * " << j << " = " << i * j << std::endl;
		}
		std::cout << std::endl;
	}
	
	return 0;

}

