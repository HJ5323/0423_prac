#include <iostream>

using namespace std; // std::cout, std::endl � std:: �� �ٿ��� ��

//�ǽ�3_ �ǽ� 1, 2�� while������
int main()
{
	int i = 1;
	std::cout << "1~9�� ���" << std::endl;

	while (i <= 9)
	{
		std::cout << "----" << i << "�� ----" << std::endl;

		int j = 1;

		while (j <= 9)
		{
			std::cout << i << " * " << j << " = " << i * j << std::endl;
			j++;
		}

		std::cout << std::endl;
		i++;
	}

	return 0;

}


//�ǽ�4_����ڰ� �Է��� ���� ���ϱ�
int main()
{
	int input, output = 0;

	cout << "����ڰ� �Է��� ���� ���ϱ�\n" << endl;



	while (true) // 1���� 9���� �ݺ��ϸ鼭 1�� ����
	{
		cout << "���ڸ� �Է��ϼ���. (0 : exit) : ";
        cin >> input;


        if (input == 0)
            break;

		output += input;

	}

	cout << "����ڰ� �Է��� ���� ���� : " << output << endl;

}

//����_�Է��� ���ڸ�ŭ �� ���
#include <iostream>

using namespace std;

int main()
{
	int input, output;

	cout << "input : ";
	cin >> input;
	cout << "output : " << endl;


		for (int i = 1; i <= input; i++)
		{

				for (int j = 1; j <= i; j++)
				{
					cout << "*" ;
					
				}
				cout << endl;

			}
		
		return 0;
}
