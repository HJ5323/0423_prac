#include <iostream>

//int main()
//{
//	int i = 1, j = 5;
//	std::cout << j << "�� ���" << std::endl;
//
//	while (i <= 9)
//	{
//		std::cout << j << " * " << i << " = " << i * j << std::endl;
//		i++;
//	}
//
//	return 0;
//
//}


int main()
{
	int i = 1;
	std::cout << "1~9�� ���" << std::endl;

	while (i <= 9) 
	{
		std::cout << "----" << i << "�� ----" << std::endl;
		
		int j = 1;

		while(j <= 9)
		{
			std::cout << i << " * " << j << " = " << i * j << std::endl;
			j++;
		}

		std::cout << std::endl;
		i++;
	}

	return 0;

}