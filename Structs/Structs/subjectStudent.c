#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
     - �л��� ���� ����
       ���� ����ü, �л� ����ü ����
	   �л� ����ü�� ���� ����ü�� ����
*/
#define NAME_LEN 20  //�̸��� ũ��
#define SIZE 3       //����ü �迭�� ũ��

//Subject ����ü
typedef struct {
	int kor;   //����
	int math;  //����
	int eng;   //����
	float avg; //���
}Subject;

//Student ����ü
typedef struct{
	int number;          //�й�
	char name[NAME_LEN]; //�̸�
	Subject subject; //���� ����ü ����
}Student;

//�л��� ���� ��� �Լ�
void printInfo(Student st) {
	printf("%d\t%s\t%d\t%d\t%d\t%.1f\n", st.number, st.name,
		st.subject.kor, st.subject.math, st.subject.eng, st.subject.avg);
}

int main()
{
	Student students[SIZE]; //�л� ����ü �迭 ����
	int i;
	int subject_sum[3] = { 0, 0, 0 }; //����, ����, ���� ����
	double subject_avg[3];  //����, ����, ���� ���

	//����� �Է�
	for (i = 0; i < SIZE; i++) {
		printf("�й� �Է�: ");
		scanf("%d", &students[i].number);

		printf("�̸� �Է�: ");
		scanf("%s", &students[i].name);

		printf("�������� �Է�: ");
		scanf("%d", &students[i].subject.kor);

		printf("�������� �Է�: ");
		scanf("%d", &students[i].subject.math);

		printf("�������� �Է�: ");
		scanf("%d", &students[i].subject.eng);

		//���κ� ��� ���
		students[i].subject.avg = (float)(students[i].subject.kor +
			students[i].subject.math + students[i].subject.eng) / 3;
	}

	//�������� ���
	for (i = 0; i < SIZE; i++) {
		subject_sum[0] += students[i].subject.kor;  //���� ����
		subject_sum[1] += students[i].subject.math;  //���� ����
		subject_sum[2] += students[i].subject.eng;  //���� ����
	}

	//���� ��� ���
	subject_avg[0] = (double)subject_sum[0] / SIZE;  //���� ���
	subject_avg[1] = (double)subject_sum[1] / SIZE;  //���� ���
	subject_avg[2] = (double)subject_sum[2] / SIZE;  //���� ���

	//�л� ���� ���
	printf("\n==================== ��  ��  ǥ ====================\n");
	printf("�й�\t�̸�\t����\t����\t����\t���\n");
	for (i = 0; i < SIZE; i++) {
		printInfo(students[i]);
	}

	printf("\n===== ���� ��� ���� =====\n");
	printf("���� ���: %.1f\n", subject_avg[0]);
	printf("���� ���: %.1f\n", subject_avg[1]);
	printf("���� ���: %.1f\n", subject_avg[2]);
	
	return 0;
}