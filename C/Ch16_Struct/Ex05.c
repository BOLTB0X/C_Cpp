#include <stdio.h>
//구조체 포인터 변수에 접근
typedef struct {
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
} Student;

int main(void) {
	Student* s = malloc(sizeof(Student));
	strcpy(s->studentId, "17013123");
	strcpy(s->name, "이경헌");
	s->grade = 3;
	strcpy(s->major, "전자정보통신공학과");

	printf("학번:%s\n", s->studentId);
	printf("이름:%s\n", s->name);
	printf("학년:%d\n", s->grade);
	printf("학과:%s\n", s->major);
	system("pause");
	return 0;
}