#include <stdio.h>
//����ü ������ ������ ����
typedef struct {
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
} Student;

int main(void) {
	Student* s = malloc(sizeof(Student));
	strcpy(s->studentId, "17013123");
	strcpy(s->name, "�̰���");
	s->grade = 3;
	strcpy(s->major, "����������Ű��а�");

	printf("�й�:%s\n", s->studentId);
	printf("�̸�:%s\n", s->name);
	printf("�г�:%d\n", s->grade);
	printf("�а�:%s\n", s->major);
	system("pause");
	return 0;
}