#define _CRT_SECURE_NO_WARNINGS  //scanf() ���� ó��
#include <stdio.h>
/*
	- ���� �Է¹޾Ƽ� �������� ���
	  4 x 1 = 4(4*1)
	  4 x 2 = 8(4*2)
	  ...
*/
int main()
{
	/*int dan;

	printf("���� �Է��ϼ���: ");
	scanf("%d", &dan);

	for (int i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, (dan * i));
	}*/

	//������ ��ü
	int dan;
	int i;

	for (dan = 2; dan <= 9; dan++) {
		printf(" [%d] ��\n", dan);
		for (i = 1; i <= 9; i++) {
			printf("%d x %d = %d\n", dan, i, (dan * i));
		}
		printf("\n");
	}

	return 0;
}