#include <iostream>
// �ݺ� Ƚ���� ������ ���� ��
int main()
{
	int loop_count = 323;

	for ( int i = 0; i < 5; i++) // 0���� 5���� �ݺ��ϸ鼭 1�� ����
	{
		std::cout << "Iteration : " << i << std::endl;
	}
	
	for (int j = 0; j < 5000; j++) // 0���� 5000���� �ݺ��ϸ鼭 1�� ����
	{

		if (loop_count == j)
		{

		}

		std::cout << j << std::endl;
	}
	
	return 0;
}




