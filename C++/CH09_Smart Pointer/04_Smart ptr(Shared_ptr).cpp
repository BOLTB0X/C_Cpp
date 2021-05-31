#include <iostream>

using namespace std;
//Ư�� ��ü�� �����ϴ� ����Ʈ �����Ͱ� �� ������� ����
//Ư���� ��ü�� ���ο� ����Ʈ �����Ͱ� �����Ҷ����� ���� Ƚ��(Reference Count)�� 1����
//�� ����Ʈ�������� ������ ���� ������ 1�� ����
//��������� ����Ƚ���� 0�� �Ǹ� delete Ű���带 �̿��Ͽ� �޸𸮿��� �����͸� �ڵ����� �Ҵ�����
int main(void) {
	int* arr = new int[10];
	arr[7] = 100;
	shared_ptr<int> p1(arr); 
	cout << p1.use_count() << "\n";
	shared_ptr<int> p2(p1);
	cout << p1.use_count() << "\n";
	shared_ptr<int> p3 = p2;
	cout << p1.use_count() << "\n";
	p1.reset();
	p2.reset();
	cout << "arr[7]: " << arr[7] << '\n';
	p3.reset();
	cout << p1.use_count() << '\n';
	cout << "arr[7]: " << arr[7] << '\n';
	system("pause");
}