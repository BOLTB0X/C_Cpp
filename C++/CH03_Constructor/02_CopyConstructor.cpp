#include <iostream>
#include <string>

using namespace std;
//기본생성자(Default Constructor)
//기본생성자는 매개변수를 가지지 않음
//맴버변수는 0,NULL등의 값으로 초기화
class Character {
private:
	string name;
	int ragePoint;
	int hp;
	int damage;
public:
	Character(string name,int hp,int damage): name(name),ragePoint(0),hp(hp),damage(damage) { }
	Character(const Character& other) {
		name = other.name;
		ragePoint = other.ragePoint;
		hp = other.hp;
		damage = other.damage;
	}
	void pointUp() { ragePoint++; }
	void show() {
		cout << name << "[" << ragePoint << "] " << hp << " " << damage << '\n';
	}
};

int main(void) {
	Character character1("슬라임",10,20);
	character1.pointUp();
	Character character2(character1);
	character2.pointUp();
	character1.show();
	character2.show();
	system("pause");
}