#include <stdio.h>
//OS�� �޸� ������ 4������ ����
//�ڵ念��(�ҽ��ڵ�),�����Ϳ���(����/��������)
//�� ����(�����Ҵ纯��), ���ÿ���(����/�Ű�����)

//�������� ==> ��𼭵� ���� ������ ����, main()�Լ� ���� ���� �޸��Ҵ�
//�޸��� ������(data)������ ����
int a = 5;

	int changeValue() {
		a = 10;
	}
int main(void) {
	printf("%d\n", a);
	changeValue();
	printf("%d\n", a);
	system("pause");
	return 0;
}