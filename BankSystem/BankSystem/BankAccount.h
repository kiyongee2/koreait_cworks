//���Ǻ� ������ ���
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H //��ũ�� �̸� - �ߺ� ����

//��ũ�� ���
#define ANO_LEN 20
#define OWNER_LEN 30
#define MAX_ACCOUNTS 100

//���� ���� ����ü
typedef struct {
	char ano[ANO_LEN]; //���� ��ȣ
	char owner[OWNER_LEN]; //������
	int balance;    //�ܰ�
}BankAccount;

//���� ���� ����
//extern Ű����� ��� ������ ������ ���Ͽ��� �����
extern BankAccount accounts[MAX_ACCOUNTS];  //���� �迭 ����
extern int accountCount;  //���� ���¼�

//���� ���� �Լ� �����(������Ÿ��)
void createAccount();
void deposit();
void withdraw();
void displayAccount();

#endif // !1