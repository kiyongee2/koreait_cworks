#define _CRT_SECURE_NO_WARNINGS //scanf() �������
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    ���ڸ� �����ؼ� ������ ����
	- ��ǻ�Ͱ� ������ ������(1 ~ 50)
	- ���� �ʰ�("������ �ʰ��߾��. �ٽ� �Է��ϼ���")
	- ������ ������ �� �Է�
	- �����̸� ���α׷� ����
	- Ƚ���� �� 5������ ��
	- 
*/
int main()
{
	int comNum;    //��ǻ���� ����
	int guessNum;  //������ ������ ��
	int count = 5; //�õ� Ƚ��

	srand(time(NULL));
	comNum = rand() % 50 + 1;

	while (1) {
		printf("���� Ƚ�� %d��\n", count--); //--�� �ڿ� ����(��ġ ����)

		puts("����������(��: 1~50 �Է�): ");
		scanf_s("%d", &guessNum);

		if (guessNum < 1 || guessNum > 50) {
			puts("������ �ʰ��߾��! �ٽ� �Է��ϼ���.");
		}
		else {
			if (guessNum == comNum) {
				puts("�����̿���!");
				break;
			}
			else if (guessNum > comNum) {
				puts("�ʹ� Ŀ��!");
			}
			else {
				puts("�ʹ� �۾ƿ�!");
			}
		}

		//�õ� Ƚ���� 0�϶� �����ϱ�
		if (count == 0) {
			puts("���� Ƚ���� 0�̳׿�. �ƽ��� �����߾��!");
			break;
		}
	}
	puts("���α׷��� �����մϴ�.");

	return 0;
}