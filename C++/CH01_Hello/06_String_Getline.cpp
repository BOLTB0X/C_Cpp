#include <iostream> //입출력 표준 라이브러리
#include <string>
using namespace std;

int main(void) {
	string input;
	getline(cin, input);
	for (int i = 0; i < input.size(); i++) {
		cout << input[i] << '\n';
	}
	system("pause");
	return 0;
}