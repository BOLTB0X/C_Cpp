#include <iostream>
#include <string>

using namespace std;
//기본생성자(Default Constructor)
//객체의 수명이 끝났을 때 객체 제거용
//기본생성자는 매개변수를 가지지 않음
//맴버변수는 0,NULL등의 값으로 초기화
//클래스의 이름과 동일한 이름의 메소드로 구현
class Character {
private:
	string name;
	int ragePoint;
	int hp;
	int damage;
public:
	Character(string name, int hp, int damage) : name(name), ragePoint(0), hp(hp), damage(damage) { } //생성자
	~Character() { //소멸자 생성
			cout << "[객체가 소멸됩니다.]\n";
	}
	void pointUp() { ragePoint++; }
	void show() {
		cout << name << "[" << ragePoint << "] " << hp << " " << damage << '\n';
	}
};

int main(void) {
	Character* character1= new Character("슬라임", 10, 20);
	character1->pointUp();
	//Character character2(*character1);
	//character2.pointUp();
	character1->show();
	//character2.show();

	delete character1; //동적할당을 이용했으므로 성곡적으로 소멸
//	delete character2; //동적할당을 이용하지 않으므로 오류 발생
	system("pause");
}