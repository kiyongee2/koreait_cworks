#include <stdio.h>
#include <stdlib.h> //srand(), rand()
#include <time.h>
/*
   srand(time(NULL)) - �õ� ����(���ϵ��� �ð����� ����)
   rand() % n - ���(0 ~ n-1)
*/
int main()
{
	int coin;

	//���� ����
	srand(time(NULL));
	coin = rand() % 2 + 1; //1, 2
	printf("%d\n", coin);

	//���ڿ� �迭
	//char aspect[] = "�ո�";
	//aspect[�ܾ��� ��][�ִ빮���� ��]
	char aspect[][10] = {"", "�ո�", "�޸�"};

	printf("%s\n", aspect[0]);
	printf("%s\n", aspect[1]);
	printf("%s\n", aspect[2]);

	return 0;
}