#include <iostream>

int main()
{
	int a;
	
	std::cout << "숫자를 입력하세요. : ";
	std::cin >> a;

		a % 5 == 0 ? std::cout << a << "는 5의 배수입니다."
					: std::cout << a << "는 5의 배수가 아니네요ㅠㅠ.";

		// %는 나머지 연산자로 나머지가 0이면 5의 배수

}
