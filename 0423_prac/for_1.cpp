#include <iostream>

//int main()
//{
//	int j = 5;
//	std::cout << j << "단 출력" << std::endl;
//
//	for (int i = 1; i <= 9; i++) // 1부터 9까지 반복하면서 1씩 증가
//	{
//		std::cout << j << " * " << i << " = " << i * j << std::endl;
//	}
//
//	return 0;
//
//}


int main()
{
	std::cout << "1~9단 출력" << std::endl;

	for (int i = 1; i <= 9; i++) // 1부터 9까지 반복하면서 1씩 증가
	{
		std::cout << "----" << i << "단 ----" << std::endl;

		for (int j = 1; j <= 9; j++)
		{
			std::cout << i << " * " << j << " = " << i * j << std::endl;
		}
		std::cout << std::endl;
	}
	
	return 0;

}

