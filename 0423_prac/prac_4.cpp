#include <iostream>

using namespace std; // std::cout, std::endl 등에 std:: 안 붙여도 됨

//실습3_ 실습 1, 2를 while문으로
int main()
{
	int i = 1;
	std::cout << "1~9단 출력" << std::endl;

	while (i <= 9)
	{
		std::cout << "----" << i << "단 ----" << std::endl;

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


//실습4_사용자가 입력한 숫자 더하기
int main()
{
	int input, output = 0;

	cout << "사용자가 입력한 숫자 더하기\n" << endl;



	while (true) // 1부터 9까지 반복하면서 1씩 증가
	{
		cout << "숫자를 입력하세요. (0 : exit) : ";
        cin >> input;


        if (input == 0)
            break;

		output += input;

	}

	cout << "사용자가 입력한 수의 합은 : " << output << endl;

}

//번외_입력한 숫자만큼 별 찍기
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
