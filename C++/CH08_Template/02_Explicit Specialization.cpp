#include <iostream>
#include <string>

using namespace std;

template <typename T>
void change(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <> void change<int>(int& a, int& b) { //명시적으로 int을 지정
	cout << "정수형 데이터를 교체합니다.\n";
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(void) {
	string a = "이경헌";
	string b = "홍길동";
	change(a, b);
	cout << a << " : " << b << endl;
	system("pause");
}