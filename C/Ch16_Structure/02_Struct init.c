#include <stdio.h>

struct Student { //����ü ����,���� �� �ʱ�ȭ
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
}s = { "0123456789" ,"��**" ,3,"����������Ű��а�" };

int main(void) {
	printf("�й�:%s\n", s.studentId); //���
	printf("�̸�:%s\n", s.name);
	printf("�г�:%d\n", s.grade);
	printf("�а�:%s\n", s.major);
	system("pause");
	return 0;
}