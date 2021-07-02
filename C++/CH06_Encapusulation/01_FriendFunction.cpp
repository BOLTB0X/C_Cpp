#include <iostream>
#include <string>

using namespace std;
//프렌드 키워드를 이용하면 특정 객체의 모든 멤버(private)까지 접근 가능
//캡슐화란 관련된 함수는 멤버들은 되도록 하나의 클래스에서 관리 또는
// 같이 실행되어야 하는 기능들도 하나의 클래스에 넣어서 각 객체가 응집된 기능을 가질 수 있도록 하는 것

class Student {
private:
	int studentID;
	string name;
public:
	Student(int studentID,string name): studentID(studentID),name(name) { }
	//프렌드 키워들을 붙여 private 멤버 변수에 접근
	friend Student operator +(const Student& student, const Student& other) {
		return Student(student.studentID, student.name + " & " + other.name);
	//friend 키워드를 이용해 이름에 접근
	}
	void showName() { 
		cout << "이름: " << name << "\n"; 
	}
};

int main(void) {
	Student student(1, "항우");
	Student result = student + student;
	result.showName();
	system("pause");
}
