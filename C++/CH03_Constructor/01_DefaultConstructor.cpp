#include <iostream>
#include <string>

using namespace std;
//기본생성자(Default Constructor)
//기본생성자는 매개변수를 가지지 않음
//맴버변수는 0,NULL등의 값으로 초기화
//클래스와 동일한 이름인 메소드
class Character {
private:
	string name;
	int ragePoint;
	int hp;
	int damage;
public:
	void show() {
		cout << name << " [ " << ragePoint << " ]  " << damage << "\n";
	}
};

int main(void) {
	Character character = Character(); //별도로 생성자를 생성하지 않으면
	character.show(); //0으로 출력
	system("pause");
}