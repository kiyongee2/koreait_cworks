#include <stdio.h>

int main()
{
	//���ڸ� ������ 5���� ������ ���� �迭 ����
	char msg[5] = {'h', 'e', 'l', 'l', 'o'};
	int i;

	//��� �߰�
	/*msg[0] = 'h';
	msg[1] = 'e';
	msg[2] = 'l';
	msg[3] = 'l';
	msg[4] = 'o';*/

	//��� �˻�
	printf("%c\n", msg[4]);  //'o'

	//��ü ���
	for (i = 0; i < 5; i++) {
		printf("%c ", msg[i]);
	}
	printf("\n");
	//���� 'hello' -> 'yellow'�� ����
	char word[6] = { 'h', 'e', 'l', 'l', 'o' };
	int j;

	//��� ����
	word[0] = 'y';
	
	//��� �߰�
	word[5] = 'w';

	//��ü ���
	for (j = 0; j < 6; j++) {
		printf("%c ", word[j]);
	}

	return 0;
}