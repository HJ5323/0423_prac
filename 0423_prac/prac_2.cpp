#include <iostream>
// 1���� ����ڰ� �Է��� ���ڱ����� ���� ����ϴ� �ڵ� �ۼ�
int main()
{
	int input, output = 0;

	std::cout << "1���� n������ �� ���ϱ�\n" << std::endl;
	std::cout << "����(���� ����)�� �Է��ϼ���. : " ;
	std::cin >> input;

	for (int i = 1; i <= input; i++) // 1���� 9���� �ݺ��ϸ鼭 1�� ����
	{
		
		output += i;

	}
	std::cout << "1���� " << input << "������ ���� :" << output << std::endl;

	return 0;

}