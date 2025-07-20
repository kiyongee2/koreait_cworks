#include <stdio.h>
#include <time.h> //time()
#include <Windows.h> //Sleep() ���
/*
   time() 
   - ���� �ð� ���
   - ���� �ð� ����
*/
int main()
{
	//NULL - �����Ͱ� ������ �ǹ�(��� ����)
	time_t now = time(NULL);  //�ð��� �귯��

	//���н� �ü��(�ý���)
	printf("1970�� 1�� 1�� ���� ����: %ld��\n", now); //1752901509��
	//�Ϸ� ȯ��
	printf("1970�� 1�� 1�� ���� ����: %ld��\n", now / (24*60*60)); //20288��
	//�� ȯ��
	printf("1970�� 1�� 1�� ���� ����: %ld��\n", now / (365 * 24 * 60 * 60)); //55��

	//���� �ð� ����
	time_t start, end; 

	start = time(NULL);  //���� �ð�
	//1 ~ 10 ���(1�� �������� ���)
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
		Sleep(500);
	}
	end = time(NULL);

	printf("����ð�: %ld��\n", (end - start));
	return 0;
}
