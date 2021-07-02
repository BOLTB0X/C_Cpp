#include <iostream> 
#include <string>
using namespace std;

int main(void) { 
	//C언어에서 문자열을 이용하기 위해서는 char arr[SIZE] 이렇게 선언했다.
	string input; //C++은 타입형으로 선언
	cin >> input;
	for (int i = 0; i < input.size(); i++) {
		cout << input[i] << '\n';
	}

	system("pause");
	return 0;
}
