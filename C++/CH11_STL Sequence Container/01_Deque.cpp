#include <iostream>
#include <deque>

using namespace std;

int main(void) {
	deque<int> d;
	d.push_front(3);
	d.push_back(7);
	d.pop_front();
	d.push_front(4);
	for (int i = 0; i < d.size(); i++) { cout << d[i] << ' '; }
	cout << '\n';
	deque<int>::iterator iter; //iter로 어디로 접근할지 정함
	iter = d.begin();
	d.insert(iter + 1, 3, 5); //위치에 1 더한 값,몇 번,값
	iter = d.begin();
	d.insert(iter + 1, 1, 9);
	for (int i = 0; i < d.size(); i++) { cout << d[i] << ' '; }
	cout << "\n";
	d.clear();
	cout << d.empty() << "\n";
	system("pause");
}