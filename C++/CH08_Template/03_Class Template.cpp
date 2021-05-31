#include <iostream>
#include <string>

using namespace std;
//클래스 집합
template <typename T>
class Data {
private:
	T data;
public:
	Data(T data) : data(data) { } //초기화 타입에 구애받지 않음
	void setData(T data) { this->data = data; }
	T getData() { return data; }
};

int main(void) {
	Data<int> data1(1);
	Data<string> data2("이경헌");
	cout << data1.getData() << " : " << data2.getData() << "\n";
	system("pause");
}