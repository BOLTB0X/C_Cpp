#include <stdio.h>

struct Student { //구조체 정의,선언 및 초기화
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
}s = { "0123456789" ,"이**" ,3,"전자정보통신공학과" };

int main(void) {
	printf("학번:%s\n", s.studentId); //출력
	printf("이름:%s\n", s.name);
	printf("학년:%d\n", s.grade);
	printf("학과:%s\n", s.major);
	system("pause");
	return 0;
}