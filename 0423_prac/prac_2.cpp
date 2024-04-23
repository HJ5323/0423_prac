#include <iostream>
// 1부터 사용자가 입력한 숫자까지의 합을 출력하는 코드 작성
int main()
{
	int input, output = 0;

	std::cout << "1부터 n까지의 합 구하기\n" << std::endl;
	std::cout << "숫자(양의 정수)를 입력하세요. : " ;
	std::cin >> input;

	for (int i = 1; i <= input; i++) // 1부터 9까지 반복하면서 1씩 증가
	{
		
		output += i;

	}
	std::cout << "1부터 " << input << "까지의 합은 :" << output << std::endl;

	return 0;

}