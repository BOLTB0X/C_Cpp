#include <iostream>
#include <string>

using namespace std;

template <typename T> //자료형에 구해X
//한번 인스턴스를 생성하면 쭈우우욱 씀
void change(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main(void) {
	string a = "한신";
	string b = "유방";
	change(a, b);
	cout << a << " : " << b << endl;
	system("pause");
}
