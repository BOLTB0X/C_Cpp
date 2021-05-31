#include <iostream>

using namespace std;
//try 특정한 코드블록에서 예외가 발생할 수 있음을 명시
//Catch 발생한 예외에 대해서 핸들러가 특정한 내용을 처리
//Throw Try 구문에서 발생한 오류를 전달
int main(void) {
	int a = 7, b = 0;
	try { //예외 발생
		if (b == 0) {
			throw "0으로 나눌 수 없습니다.\n";
		}
		cout << a / b << '\n';
	}
	catch (const char* str) { //throw말 그대로 던져서 catch가 잡음
		cout << str << 'n';
	}
	system("pause");
}