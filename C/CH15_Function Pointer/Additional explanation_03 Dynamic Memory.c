#include <stdio.h>
#include <stdlib.h>
//���ĺ� ���
int main() {
	char *pc = NULL;
	int i = 0;
	pc = (char *)malloc(100 * sizeof(char));
	if (pc == NULL) {
		printf("�����޸� ����\n");
		exit(1);
	}
	//*pc�� ����Ű�� �����͸� 1�� ������Ŵ 
	for (i = 0; i < 26; i++) {
		*(pc + i) = 'a' + i;  //*(pc) =pc[0]=> *(pc+1)==pc[1] ���� �ּҿ� �޸� �Ҵ� 
	}
	//�ƽ�Ű �ڵ忡�� 0�� NULL�� �ǹ�
	*(pc + i) = 0;
	printf("%s\n", pc);
	free(pc); //�޸� �Ҵ�����d 
	return 0;
}