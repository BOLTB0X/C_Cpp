#include <stdio.h>

int main(void) {
	//strstr(): �� ���ڿ����� ª�� ���ڿ��� ã�� ��ȯ
	// ª�� ���ڿ��� ã�� �ּ� �� ��ü�� ��ȯ �ܼ��� ����ϵ��� �ϸ� ã�� ���� ��� ���ڿ� ��ȯ
	char c[20] = "I like you";
	char d[20] = "like";
	//���� ������ ���� �� �Ÿ�
	//char* ptr = strstr(c, d);
	printf("ã�� ���ڿ�:%s\n", strstr(c, d));
	//printf("ã�� ���ڿ�:%s\n", *ptr);
	//like you
	system("pause");
	return 0;
}