#include <stdio.h>
/*
    �迭�� �̿��� ���� �׷���
*/
int main()
{
	//int arr[] = { 3, 6, 4, 2 }; 
	int arr[4]; //���� �迭
	int i, j;  //�ݺ� ����

	//����� �Է�
	for (i = 0; i < 4; i++) {
		printf("arr[%d] �Է�: ", i);
		scanf_s("%d", &arr[i]);  //1�� �Է½ÿ� �ּҿ����� ����
	}

	//���� �׷��� ���
	for (i = 0; i < 4; i++) { //��(row)
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

	return 0;
}