#include <iostream>
#include <vector>

using namespace std;
//�迭ó�� ��밡��
int main(void) {
	vector<int> v;
	v.push_back(3);
	v.push_back(5);
	v.push_back(8);
	vector<int>::iterator iter;
	iter = v.begin();
	v.insert(iter + 1, 3, 7);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}
	cout << '\n';
	v.clear();
	cout << v.empty(); //��������� 1 ���
	cout << "\n";
	system("pause");
}