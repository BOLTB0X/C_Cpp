#include <iostream>

using namespace std;
//weak_ptr은 하나 이상의 shared_ptr 객체가 참조하하고 있는 객체에 접근 가능
//인스턴스가 소유하는 객체에대한 접근
//서로가 상대방을 가리키는 두개의 shared_ptr이 있다면 참조횟수는 0이 될 수 없음
//그러므로 순환참조를 제거하기위해 씀
int main(void) {
	int* arr = new int(1);
	shared_ptr<int> sp1(arr);
	weak_ptr<int>wp = sp1; //wp는 참조 횟수 계산에서 제외
	cout << sp1.use_count() << "\n"; // 1로 동일
	cout << wp.use_count() << "\n";
	if (true) {
		shared_ptr<int> sp2 = wp.lock(); //shared_ptr 포인터 반환
		cout << sp1.use_count() << "\n";
		cout << wp.use_count() << "\n";
	}
	// 스코프(Scope)를 벗어나므로 사용하지않은 sp2가 해체
	cout << sp1.use_count() << '\n';
	cout << wp.use_count() << "\n";
	system("pause");
}