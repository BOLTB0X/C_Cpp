#include <iostream>
#include <string>

using namespace std;
//정적멤버는 클래스에는 포함되어 있는 맴버이지만 모든 객체에서 공유 가능
//메모리 상에 오직 하나만 할당되어 관리
//public과 함께 선언하면 외부의 어떠한 클래스에서 접근 가능
class Person {
private:
	string name;
public:
	static int count;
	Person(string name) : name(name) {
		count++;
	}
};

int Person::count = 0;

int main(void) {
	Person p1("이경헌");
	Person p2("홍길동");
	Person p3("이순신");
	cout << "사람의 수: " << Person::count << "\n";
	system("pause");
}