#include <stdio.h>
#include <stdlib.h>// srand(), rand()
#include <time.h>
/*
   - ������ ������.
   - ����� �Է�(�ո�, �޸� ����)
   - ����ڿ� ������ ��ġ�ϸ� '�¾���', �ٸ��� '��!' ���
   - ���� ����(1, 2 �̿��� ��)
*/

int main()
{
	int coin; //����
	int you;  //�����
	char aspect[][10] = { "", "�ո�", "�޸�" };

	//���� ���� �õ� ����
	srand(time(NULL));

	printf("�ո��� 1, �޸��� 2, ����� �ٸ� ���� �Է��ϼ���.\n");
	while (1) {
		coin = rand() % 2 + 1;

		printf("������ �������ϴ�. �ո�? �޸�? ");
		scanf_s("%d", &you);

		if (you < 1 || you > 2) {
			//���� ����
			printf("������ �����մϴ�.\n");
			break;
		}
		else {
			//���� ����(�ݺ� ����)
			//����ڿ� ���� ���
			printf("�����: %s ����: %s\n", aspect[you], aspect[coin]);
			//������ ��ġ ����(���� ������)
			printf("%s\n", (you == coin) ? "�¾���" : "��!");
		}
	}

	return 0;
}