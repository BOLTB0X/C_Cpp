#include <iostream>
#include <string>
#include <map>

using namespace std;
//key�� value ������
int main(void) {
	map<string, int> m;
	m["�̰���"] = 1; m["ȫ�浿"] = 2; m["�̼���"] = 3;
	map<string, int>::iterator iter = m.begin();
	for (; iter != m.end(); iter++) {
		cout << iter->first << " : " << iter->second << '\n';
	}
	m["�ѽ�"] = 4;
	cout << m["���� ���"] << '\n';
	iter = m.begin();
	for (; iter != m.end(); iter++) {
		cout << iter->first << " : " << iter->second << '\n';
	} //�˾Ƽ� ��������
	system("pause");
}