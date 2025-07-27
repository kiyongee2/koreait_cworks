#include <stdio.h>
#include <stdlib.h> //malloc(), free()

int main()
{
	//�迭�� ����(����) �Ҵ�
	/*int num[5] = {2, 4, 6, 8, 10};

	printf("%d\n", num[3]);*/

	//�迭�� ���� �Ҵ� - ������ �غ�
	int* pn;

	//malloc()�� �ڷ����� ���� ����� ����ȯ �ؾ���
	pn = (int*)malloc(sizeof(int) * 5); //4byte * 5 = 20byte
	if (pn == NULL) {
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1); //���� ����(return 1)
	}

	/*pn[0] = 2;
	printf("%d\n", pn[0]); //2*/

	//¦��(2�� ���)�� ����
	for (int i = 0; i < 5; i++) {
		pn[i] = (i + 1) * 2;   //2, 4, 6, 8, 10
	}

	//���
	for (int i = 0; i < 5; i++) {
		printf("%d ", pn[i]);   //2, 4, 6, 8, 10
	}

	free(pn);  //������ pn - �޸� �ݳ�

	return 0;
}