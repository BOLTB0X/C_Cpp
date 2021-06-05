#include <iostream>
#include <string>

using namespace std;

class Student { //클래스 안에 있는 것들이 멤버
private: //클래스,맴버등을 내부에서만 활용, 외부에서 접근X
	string name;  //멤버 변수를 속성 or 프로퍼티(property)
	int mathScore;
	int englishScore;
	int getSum() { return englishScore + mathScore; } //정보은닉
public: //클래스,맴버등을 외부로 공개, 어디서든 접근O
	Student(string n, int e, int m) {
		this->name = n; //자기 자신의 맴버 변수에 접근
		this->englishScore = e; //this포인터는 값 변경X
		this->mathScore = m;
	} //맴버 선언
	void show() { cout << name << " : [ 합계 " << getSum() << "점 ]\n"; } //정보 은닉
};

int main(void) {
	Student a = Student("이사사", 100, 98); //클래스를 활용하여 만든 변수를 인스턴스
	a.show();
	//cout << a.getSum(); private 접근 한정자는 외부에서 접근 불가
	system("pause");
}