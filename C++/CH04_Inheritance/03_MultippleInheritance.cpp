#include <iostream>
#include <string>
//다중상속
using namespace std;

//부모클래스 정의하기
class Person {
private:
	string name;
public:
	Person(string name) : name(name) {}
	string getName() {
		return name;
	}
	void showName() {
		cout << "이름: " << getName() << '\n';
	}
};

//다중상속:부모클래스 하나 더 정의 즉 부모클래스가 여러명
class Temp {
public:
	void showTemp() {
		cout << "임시 부모 클래스입니다.\n";
	}
};

//자식클래스 정의 및 사용하기
class Student : Person, public Temp {
private:
	int studentID;
public:
	Student(int studentID, string name) : Person(name) {
		this->studentID = studentID;
	}
	void show() {
		cout << "학생 번호: " << studentID << "\n";
		cout << "학생 이름: " << getName() << "\n";
	}
	void showName() {
		cout << "학생 이름: " << getName() << "\n";
	}
};

int main(void) {
	Student student(1, "이삼삼");
	student.showName();
	student.showTemp();
	system("pause");
}