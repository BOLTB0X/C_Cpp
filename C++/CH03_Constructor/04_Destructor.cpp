#include <iostream>
#include <string>

using namespace std;
//소멸자(Destructor)
//객체의 수명이 끝났을 때 자동으로 컴파일러가 소멸자 함수를 호출
//객체 제거용
// ~기호 사용
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
	Character* character1 = new Character("슬라임", 10, 20);
	character1->pointUp();
	//Character character2(*character1);
	//character2.pointUp();
	character1->show();
	//character2.show();

	delete character1; //동적할당을 이용했으므로 성곡적으로 소멸
//	delete character2; //동적할당을 이용하지 않으므로 오류 발생
	system("pause");
}