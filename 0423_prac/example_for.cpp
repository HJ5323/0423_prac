#include <iostream>
// 반복 횟수가 정해져 있을 때
int main()
{
	int loop_count = 323;

	for ( int i = 0; i < 5; i++) // 0부터 5까지 반복하면서 1씩 증가
	{
		std::cout << "Iteration : " << i << std::endl;
	}
	
	for (int j = 0; j < 5000; j++) // 0부터 5000까지 반복하면서 1씩 증가
	{

		if (loop_count == j)
		{

		}

		std::cout << j << std::endl;
	}
	
	return 0;
}




