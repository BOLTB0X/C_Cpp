#include <stdio.h>

struct Student {
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
}s = { "17013123" ,"�̰���" ,3,"����������Ű��а�" };

int main(void) {
	printf("�й�:%s\n", s.studentId);
	printf("�̸�:%s\n", s.name);
	printf("�г�:%d\n", s.grade);
	printf("�а�:%s\n", s.major);
	system("pause");
	return 0;
}