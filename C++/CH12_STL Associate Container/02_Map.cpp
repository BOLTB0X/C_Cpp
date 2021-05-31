#include <iostream>
#include <string>
#include <map>

using namespace std;
//key와 value 쌍으로
int main(void) {
	map<string, int> m;
	m["이경헌"] = 1; m["홍길동"] = 2; m["이순신"] = 3;
	map<string, int>::iterator iter = m.begin();
	for (; iter != m.end(); iter++) {
		cout << iter->first << " : " << iter->second << '\n';
	}
	m["한신"] = 4;
	cout << m["없는 사람"] << '\n';
	iter = m.begin();
	for (; iter != m.end(); iter++) {
		cout << iter->first << " : " << iter->second << '\n';
	} //알아서 정렬해줌
	system("pause");
}