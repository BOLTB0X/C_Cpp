#include <iostream>
#include <string>

using namespace std;

struct student { //C ����ü ����
	string name;
	int score;
};

int main(void) {
	struct student a;
	a.name = "������";
	a.score = 100;
	cout << a.name << ":" << a.score << "��\n";
	system("pause");
}