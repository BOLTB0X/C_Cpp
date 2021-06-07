#include <iostream>
#include <string>
//상속
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
//자식(파생)클래스 정의 및 사용하기
class Student : Person {
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
	//오버라이딩 
	void showName() {
		cout << "학생 이름: " << getName() << "\n";
	}
};

int main(void) {
	Student student(1, "이이이");
	student.showName();
	system("pause");
}