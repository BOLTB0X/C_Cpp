#include <stdio.h>

struct Student {
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
};

int main(void) {
	struct Student s; //구조체 선언
	strcpy(s.studentId, "17013123"); //구조체 변수에 접근
	strcpy(s.name, "이**"); //구조체 변수에 접근
	s.grade = 4;
	strcpy(s.major, "전자정보통신공학과");
	printf("학번:%s\n", s.studentId);
	printf("이름:%s\n", s.name);
	printf("학년:%d\n", s.grade);
	printf("학과:%s\n", s.major);
	system("pause");
	return 0;
}