#include <stdio.h>

int main(void) {
	char a[20] = "Dongbin Na";
	char b[20] = "Hojoon Seok";
	//strlen():���ڿ��� ���̸� ��ȯ
	printf("���ڿ��� ����:%d\n", strlen(a));
	//strcmp():���ڿ�a�� ���ڿ�b���� ���������� ���̸� -1 �ڸ� 1 ��ȯ
	printf("�� �迭�� ���� �� ��:%d\n", strcmp(a, b));
	//strcpy():���ڿ� ���� C������ a=b�̸� ������ ������� ���ڿ�����X
	strcpy(a, b); //a�� b�� �����
	printf("����� ���ڿ�:%s\n", a);
	//strcat(): �ڿ��ִ� ���ڿ��� �տ� ���ڿ��� ��ħ
	strcat(a, b);
	printf("������ ��� ���ڿ�:%s\n",a);
	//strstr(): �� ���ڿ����� ª�� ���ڿ��� ã�� ��ȯ
	// ª�� ���ڿ��� ã�� �ּ� �� ��ü�� ��ȯ �ܼ��� ����ϵ��� �ϸ� ã�� ���� ��� ���ڿ� ��ȯ
	char c[20] = "I like you";
	char d[20] = "like";
	//���� ������ ���� �� �Ÿ�
	//char* ptr=strstr(c,d)
	printf("ã�� ���ڿ�:%s\n", strstr(c, d));
	//like you
	system("pause");
	return 0;
}