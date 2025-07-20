#include <stdio.h>
#include <stdlib.h> //srand(), rand()
#include <time.h>  //time()

/*
   rand() �Լ�
   - ��������(����) ����
*/
int main()
{
	//�õ�(seed)�� ����
	//srand(11); //�� ���� ���� ����
	srand(time(NULL)); //seed�� ��� ����

	int randVal = rand();
	printf("%d\n", randVal);

	//���� ���� - 1(�ո�), 2(�޸�)
	//������ - (0 ~ n-1) -> (1 ~ n)
	int coin = rand() % 2 + 1; //1, 2
	printf("%d\n", coin);

	if (coin == 1) {
		puts("�ո�"); //puts(���ڿ�)
	}
	else {
		puts("�޸�");
	}

	//�ֻ��� ������
	int dice = rand() % 6 + 1; //1 ~ 6
	printf("%d\n", dice);


	return 0;
}