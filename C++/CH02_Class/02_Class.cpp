#include <iostream>
#include <string>

using namespace std;

class Student { //클래스 안에 있는 것들이 멤버
private: //클래스,맴버등을 내부에서만 활용, 외부에서 접근X
	string name;  //멤버 변수를 속성 or 프로퍼티(property)
	int score;
public: //클래스,맴버등을 외부로 공개, 어디서든 접근O
	Student(string n, int s) { name = n; score = s; } //멤버 함수를 메소드라 부름
	void show() { cout << name << " : " << score << "점\n"; }
};

int main(void) {
	Student a = Student("이경헌", 100); //클래스를 활용하여 만든 변수를 인스턴스
	a.show();
	system("pause");
}