#include <iostream>

using namespace std;
//weak_ptr�� �ϳ� �̻��� shared_ptr ��ü�� �������ϰ� �ִ� ��ü�� ���� ����
//�ν��Ͻ��� �����ϴ� ��ü������ ����
//���ΰ� ������ ����Ű�� �ΰ��� shared_ptr�� �ִٸ� ����Ƚ���� 0�� �� �� ����
//�׷��Ƿ� ��ȯ������ �����ϱ����� ��
int main(void) {
	int* arr = new int(1);
	shared_ptr<int> sp1(arr);
	weak_ptr<int>wp = sp1; //wp�� ���� Ƚ�� ��꿡�� ����
	cout << sp1.use_count() << "\n"; // 1�� ����
	cout << wp.use_count() << "\n";
	if (true) {
		shared_ptr<int> sp2 = wp.lock(); //shared_ptr ������ ��ȯ
		cout << sp1.use_count() << "\n";
		cout << wp.use_count() << "\n";
	}
	// ������(Scope)�� ����Ƿ� ����������� sp2�� ��ü
	cout << sp1.use_count() << '\n';
	cout << wp.use_count() << "\n";
	system("pause");
}