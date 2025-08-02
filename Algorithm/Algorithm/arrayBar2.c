#include <stdio.h>
#include <stdlib.h> //malloc(), free()
/*
	�迭�� �̿��� ���� �׷���
*/
int main()
{
	//���� �迭 �Ҵ�(������ ���) - �޸� heap ����
	int* arr = NULL; //NULL�� �ʱ�ȭ
	int size;  //�迭�� ũ��(����� ����)
	int i, j;  //�ݺ� ����

	printf("�迭�� ũ�� �Է�: ");
	scanf_s("%d", &size);

	arr = (int*)malloc(sizeof(int) * size);
	if (arr == NULL) {
		puts("�޸� �Ҵ翡 �����߽��ϴ�.\n");
		return 1; //1 or -1
	}

	//����� �Է� �� ��ȿ�� �˻�
	for (i = 0; i < size; i++) {
		while (1) {
			printf("arr[%d] �� �Է�(0 �̻� ����): ", i);
			if (scanf_s("%d", &arr[i]) !=1 || arr[i] < 0) {
				//���� ó��
				printf("�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���.\n");
				//���� �Էµ� ������ �����(���� ����)
				while (getchar() != '\n');
			}
			else { // scanf_s("%d", &arr[i]) ==1
				//����
				break;
			}
		}
	}
	
	//���� �׷��� ���
	for (i = 0; i < size; i++) { //��(row)
		printf("arr[%d]=%d|", i, arr[i]);
		for (j = 1; j <= arr[i]; j++) { //��(col) ���ᰪ
			printf("*");
		}
		printf("\n");
	}
	/*
	   i=0, arr[0]=3, j=1,  *
					  j=2,  **
					  j=3,  ***(����)
	   i=1, arr[1]=6, j=1 ~ 6, ******(����)
	   i=2, arr[2]=4, j=1 ~ 4, ****(����)
	   i=3, arr[3]=2, j=1 ~ 2, **(����)
	   i=4, �ݺ� ����
	*/

	free(arr); //�޸� �ݳ�

	return 0;
}