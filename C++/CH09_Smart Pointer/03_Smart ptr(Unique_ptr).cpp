#include <iostream>

using namespace std;

int main(void) {
	int* arr = new int[10];
	unique_ptr<int> p1(arr);
	for (int i = 0; i < 10; i++) {
		arr[i] = 1;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' ';
	}
	p1.reset(); //�����ϸ�
	cout << "\n";
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' '; //������ �� ���
	}
	system("pause");
}
