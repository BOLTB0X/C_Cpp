#include <iostream>
#define SIZE 100

using namespace std;

int* arr;
int main(void) {
	arr = new int[SIZE]; //동적할당시작
	for (int i = 0; i < SIZE; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << ' ';
	}
	delete arr; //동적할당 해제¦
	system("pause");
	return 0;
}
