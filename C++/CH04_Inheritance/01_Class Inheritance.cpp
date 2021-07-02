#include <iostream>
#include <string>

using namespace std;

//부모클래스 정의하기
class Person {
private:
	string name;
public:
	Person(string name) : name(name) {} //초기화
	//맴버 변수 name은 Person으로 부터 물려받음
	string getName() {
		return name;
	}
	void showName() {
		cout << "이름: " << getName() << '\n';
	}
};
//자식(파생)클래스 정의 및 사용하기
//자식 클래스의 인스턴스를 만들 때 가장 먼저 부모클래스의 생성자가 호출
//이후에 자식클래스의 생성자가 호출
// 수명을 다했을 때 자식클래스가 먼저 호출

class Student : Person {
private:
	int studentID;
public:
	Student(int studentID, string name) : Person(name) {
		this->studentID = studentID;
	}
	//name에 대한 정보가 없어도 물려받아서 사용
	void show() {
		cout << "학생 번호: " << studentID << "\n";
		cout << "학생 이름: " << getName() << "\n";
	}
};

int main(void) {
	Student student(1, "이삼삼");
	student.show();
	system("pause");
}
