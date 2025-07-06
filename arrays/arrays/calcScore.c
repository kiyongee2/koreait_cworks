#include <stdio.h>
/*
   �л� 5���� ���� ���
   - ����, ���, �ְ� ����
   - ��� = ���� / ����
   - �ְ� ���� ��� ���
     1. �� ó������ �ִ밪���� ����
	 2. �ִ밪�� ���� �迭�� ��Ҹ� ��
	 3. ���� �ִ밪�� �� ū���� ����
*/
int main()
{
	//�迭�� ����� �ʱ�ȭ
	int score[5] = { 85, 75, 90, 75, 80};
	int sum = 0;  //����
	double avg;   //���
	int max;      //�ְ�����
	int i;        //for���� ��ȸ�� �ݺ� ����
	int size;     //�迭�� ũ��

	//�迭�� ũ�� - ����
	// int�� 4byte * 5 = 20byte, score[0]�� 4byte
	size = sizeof(score) / sizeof(score[0]); //20 / 4 = 5
	printf("score �迭�� ũ��: %d\n", size); //5

	for (i = 0; i < size; i++) {
		sum += score[i]; //�հ�
	}
	//���
	avg = (double)sum / size;  //(double) �� ��ȯ ����!!

	printf("����: %d��\n", sum);
	printf("���: %.1lf��\n", avg);  //double�� ���� - %lf ���

	//�ְ� ����
	//{ 85, 75, 90, 75, 80} 
	max = score[0];  //ù��° ��
	for (i = 1; i < size; i++) {
		if (score[i] > max) { //�迭�� ���� ��Ұ� �ִ밪���� ũ��
			max = score[i];   //�� ��Ҹ� �ִ밪�� ����
		}
	}
	printf("�ְ�����: %d��\n", max);

	return 0;
}