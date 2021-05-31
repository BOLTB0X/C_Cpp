#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
public:
	Person() { name = "임꺽정"; }
	Person(string name): name(name) { }
	void showName() { cout << "이름: " << name << "\n"; }
};

int main(void) {
	Person person1;
	person1.showName(); //디폴트로 출력
	Person person2("이경헌");
	person2.showName(); //함수 오버로딩
	system("pause");
}