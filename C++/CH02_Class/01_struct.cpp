#include <iostream>
#include <string>

using namespace std;

struct student { //C 방식 구조체
	string name;
	int score;
};

int main(void) {
	struct student a;
	a.name = "아무개";
	a.score = 100;
	cout << a.name << ":" << a.score << "Á¡\n";
	system("pause");
}
