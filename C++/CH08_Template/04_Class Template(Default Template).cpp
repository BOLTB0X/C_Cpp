#include <iostream>
#include <string>

using namespace std;

template <typename T=int> //타입에 대한 지정으 없으면 int
class Data {
private:
	T data;
public:
	Data(T data) : data(data) { }
	void setData(T data) { this->data = data; }
	T getData() { return data; }
};

int main(void) {
	Data<> data1(1);
	Data<string> data2("이경헌");
	cout << data1.getData() << " : " << data2.getData() << "\n";
	system("pause");
}