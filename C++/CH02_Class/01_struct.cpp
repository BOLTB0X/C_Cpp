#include <iostream>
#include <string>

using namespace std;

struct student { //C 구조체 선언
	string name;
	int score;
};

int main(void) {
	struct student a;
	a.name = "이이이";
	a.score = 100;
	cout << a.name << ":" << a.score << "점\n";
	system("pause");
}