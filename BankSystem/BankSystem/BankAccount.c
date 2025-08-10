#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h> //true/false
#include <string.h> //strcmp(), strcpy()
#include "BankAccount.h"
/*
    ���� �ý���
	- ���� ����: BankAccount ����ü ����
	- ���� ���¸� ������ ����ü �迭 ����
*/
#define ANO_LEN 20
#define OWNER_LEN 30
#define MAX_ACCOUNTS 100

BankAccount accounts[MAX_ACCOUNTS];  //���� �迭 ����
int accountCount = 0;    //���� ���¼�

//���� ����
void createAccount() {
	char accountNumber[ANO_LEN]; //�ܺ� �Է�(���¹�ȣ)

	//���¼� �迭 �ѵ� �ʰ��� ���� ó��
	if (accountCount >= MAX_ACCOUNTS) {
		puts("�� �̻� ���¸� ������ �� �����ϴ�.");
		return;
	}

	printf("���¹�ȣ �Է�(��: xx-xx-xxxx): ");
	scanf("%s", accountNumber);  //�ܺ� �Է�(���¹�ȣ)

	//���� �ߺ� �˻�
	for (int i = 0; i < accountCount; i++) {
		if (strcmp(accounts[i].ano, accountNumber) == 0) {
			puts("�̹� ��ϵ� �����Դϴ�. �ٽ� �Է��ϼ���.");
			return;
		}
	}

	//�ߺ� ������ ���� ����(����)
	strcpy(accounts[accountCount].ano, accountNumber);

	printf("������ �Է�: ");
	scanf("%s", accounts[accountCount].owner);

	//�ܰ� - 0���� �ʱ�ȭ��
	accounts[accountCount].balance = 0;
	puts("���: ���°� �����Ǿ����ϴ�.");

	accountCount++;  //���¼� 1����
}

//���� ���
void deposit() {
	char accountNumber[ANO_LEN]; //�ܺ� �Է�(���¹�ȣ)
	int amount;  //�Աݾ�
	bool found = false; //����(���� ã��/ ���� ��ã��)
	
	printf("�Ա��� ���¹�ȣ(��: xx-xx-xxxx): ");
	scanf("%s", accountNumber);

	for (int i = 0; i < accountCount; i++) {
		//������ ��ϵ� ���¿� �ܺ� �Է��� ���°� ��ġ�ϸ�
		if (strcmp(accounts[i].ano, accountNumber) == 0) {
			found = true; //���� ã��

			printf("�Աݾ�: ");
			scanf("%d", &amount);
			if (amount < 0) {
				puts("�ùٸ� �ݾ��� �ƴմϴ�.");
				return; //��� ����
			}
			else {
				accounts[i].balance += amount;
				printf("���� ó���Ǿ����ϴ�. ���� �ܾ�: %d\n", accounts[i].balance);
				return; //��� ����
			}
		}
	} //for() �ݱ�

	if (!found) { //found = false
		puts("���¸� ã�� �� �����ϴ�.");
	}
}

//��� ���
void withdraw() {
	char accountNumber[ANO_LEN]; //�ܺ� �Է�(���¹�ȣ)
	int amount;  //��ݾ�
	bool found = false; //����(���� ã��/ ���� ��ã��)

	printf("�Ա��� ���¹�ȣ(��: xx-xx-xxxx): ");
	scanf("%s", accountNumber);

	for (int i = 0; i < accountCount; i++) {
		//������ ��ϵ� ���¿� �ܺ� �Է��� ���°� ��ġ�ϸ�
		if (strcmp(accounts[i].ano, accountNumber) == 0) {
			found = true; //���� ã��

			printf("��ݾ�: ");
			scanf("%d", &amount);
			if (amount < 0 || amount > accounts[i].balance) {
				puts("�ܾ��� �����ϰų� �ùٸ� �ݾ��� �ƴմϴ�.");
				return; //��� ����
			}
			else {
				accounts[i].balance -= amount;
				printf("���� ó���Ǿ����ϴ�. ���� �ܾ�: %d\n", accounts[i].balance);
				return; //��� ����
			}
		}
	} //for() �ݱ�

	if (!found) { //found = false
		puts("���¸� ã�� �� �����ϴ�.");
	}
}

//���� ���� ���
void displayAccount() {

	if (accountCount == 0) {
		puts("��ϵ� ���°� �����ϴ�.");
		return;  //��� ����
	}

	for (int i = 0; i < accountCount; i++) {
		printf("���� ��ȣ: %s, ������: %s, �ܾ�: %d\n", accounts[i].ano,
			accounts[i].owner, accounts[i].balance);
	}
}

