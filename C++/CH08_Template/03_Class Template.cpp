#include <iostream>
#include <string>

using namespace std;
//Ŭ���� ����
template <typename T>
class Data {
private:
	T data;
public:
	Data(T data) : data(data) { } //�ʱ�ȭ Ÿ�Կ� ���ֹ��� ����
	void setData(T data) { this->data = data; }
	T getData() { return data; }
};

int main(void) {
	Data<int> data1(1);
	Data<string> data2("�̰���");
	cout << data1.getData() << " : " << data2.getData() << "\n";
	system("pause");
}