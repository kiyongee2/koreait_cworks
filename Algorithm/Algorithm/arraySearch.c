#include <stdio.h>
/*
    - �迭���� �� ã��
	- ã�� ���� ���� ����
*/
int main()
{
	//7 ã��
	int a[] = { 9, 8, 7, 6, 7 };
	int i;
	int count = 0;  //����
	//a[2], a[4]

	for (i = 0; i < 5; i++) {
		if (a[i] == 7) {
			count++; //count += 1
			puts("7 �߰�!");
		}
	}
	printf("7�� %d�� �߰�!", count); 

	return 0;
}