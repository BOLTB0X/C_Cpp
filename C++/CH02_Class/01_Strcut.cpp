#include <iostream>
#include <string>

using namespace std;

struct student { //c�� ����
	string name;
	int score;
};

int main(void) {
	struct student a;
	a.name = "�̰���"; //c�� ����
	a.score = 100;
	cout << a.name << ":" << a.score << "��\n";
	system("pause");
}