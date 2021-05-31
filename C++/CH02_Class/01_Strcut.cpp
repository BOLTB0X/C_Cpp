#include <iostream>
#include <string>

using namespace std;

struct student { //c客 悼老
	string name;
	int score;
};

int main(void) {
	struct student a;
	a.name = "捞版清"; //c客 悼老
	a.score = 100;
	cout << a.name << ":" << a.score << "痢\n";
	system("pause");
}