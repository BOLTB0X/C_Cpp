#include <stdio.h>

struct Student {
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
};

int main(void) {
	struct Student s; //����ü ����
	strcpy(s.studentId, "17013123"); //����ü ������ ����
	strcpy(s.name, "��**"); //����ü ������ ����
	s.grade = 4;
	strcpy(s.major, "����������Ű��а�");
	printf("�й�:%s\n", s.studentId);
	printf("�̸�:%s\n", s.name);
	printf("�г�:%d\n", s.grade);
	printf("�а�:%s\n", s.major);
	system("pause");
	return 0;
}