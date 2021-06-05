#include <iostream> //C++ 표준 입출력 라이브러리
#include <string>
//using namespace std 
//기본 입출력
int main(void) {
	std::string input;
	std::cin >> input;
	std::cout << input << std::endl;
	// >>는 공백을 기준으로 입력받음
	system("pause");
	return 0;
}