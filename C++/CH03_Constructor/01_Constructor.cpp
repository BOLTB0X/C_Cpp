#include <iostream>
#include <string>

using namespace std;

class Character { //ĳ���� Ŭ����
private:
	string name;
	int ragePoint;
	int hp;
	int damage;
public:
	Character(string name, int hp, int damge) {
		this->name = name;
		this->ragePoint = 0;
		this->hp = hp;
		this->damage = damge;
	}
	void show() {
		cout << name << " [ " << ragePoint << " ]  " << hp << " " << damage << "\n";
	}
};

int main(void) {
	Character character = Character("���", 50, 10);
	character.show();
	system("pause");
}