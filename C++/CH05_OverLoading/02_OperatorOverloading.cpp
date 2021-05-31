#include <iostream>
#include <string>

using namespace std;
//연산자 오버로딩의 사용규칙
//기존 존재하는 연산자 +,-,*,/ 만 사용 가능
//맴버연산자(.), 범위지정 연산자(::) 오버로딩 불능
//기본적인 연산자의 규칙을 따라야하 함
//오버로딩이 된 연산자의 피연산자 중 하나의 사용자 정의 자료형이어야 함

class Person {
private:
	string name;
public:
	Person() { name = "임꺽정"; }
	Person(string name) : name(name) { }
	Person operator +(const Person& other) { return Person(name + " & " + other.name); }
	void showName() { cout << "이름: " << name << "\n"; }
};

int main(void) {
	Person person1;
	Person person2("이경헌");
	Person result = person1 + person2;
	result.showName();
	system("pause");
}