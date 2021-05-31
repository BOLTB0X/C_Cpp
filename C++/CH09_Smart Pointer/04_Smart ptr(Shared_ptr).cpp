#include <iostream>

using namespace std;
//특정 객체를 참조하는 스마트 포인터가 총 몇개인지를 참조
//특정한 객체를 새로운 스마트 포인터가 참조할때마다 참조 횟수(Reference Count)가 1증가
//각 스마트포인터의 수명이 다할 때마다 1씩 감소
//결과적으로 참조횟수가 0이 되면 delete 키워드를 이용하여 메모리에서 데이터를 자동으로 할당해제
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