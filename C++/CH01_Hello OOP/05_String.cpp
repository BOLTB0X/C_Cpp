#include <iostream> 
#include <string>
using namespace std;

int main(void) { //C�� ���ڿ��� char arr[SIZE]
	string input; //C++�� string s
	cin >> input;
	for (int i = 0; i < input.size(); i++) {
		cout << input[i] << '\n';
	}

	system("pause");
	return 0;
}