#include <iostream>

using namespace std;
//try Ư���� �ڵ��Ͽ��� ���ܰ� �߻��� �� ������ ���
//Catch �߻��� ���ܿ� ���ؼ� �ڵ鷯�� Ư���� ������ ó��
//Throw Try �������� �߻��� ������ ����
int main(void) {
	int a = 7, b = 0;
	try { //���� �߻�
		if (b == 0) {
			throw "0���� ���� �� �����ϴ�.\n";
		}
		cout << a / b << '\n';
	}
	catch (const char* str) { //throw�� �״�� ������ catch�� ����
		cout << str << 'n';
	}
	system("pause");
}