#include <stdio.h>
#include <time.h> //time()

int main()
{
	time_t ct = time(NULL); //1970.1.1 �������ĺ��� ���ݱ��� �ʷ� ȯ��
	//printf("%ld��\n", ct);
	struct tm* now = localtime(&ct);

	//��, ��, ��
	printf("����: %d\n", now->tm_year + 1900); //2025
	printf("��: %d\n", now->tm_mon + 1); //8(�迭 ù�ε��� 0�̹Ƿ� 1����)
	printf("��: %d\n", now->tm_mday); //10

	//��, ��, ��(24 �ð���)
	printf("%d : %d : %d\n", now->tm_hour, now->tm_min, now->tm_sec);

	//��, ��, ��(12 �ð���) - �ð��� ����, ����/���� ���
	int hour = (now->tm_hour > 12) ? now->tm_hour - 12 : now->tm_hour;
	char* ampm = (now->tm_hour < 12) ? "����" : "����";
	//printf("%s\n", ampm);

	printf("%s %d : %d : %d\n", ampm, hour, now->tm_min, now->tm_sec);

	//���� ��� (0-��, 1-��, 2-ȭ... 6-��)
	//printf("���� ����: %d\n", now->tm_wday);

	char* days[] = { "��", "��", "ȭ", "��", "��", "��", "��" };
	int idx = now->tm_wday;
	printf("������ %s���� �Դϴ�.\n", days[idx]);

	return 0;
}