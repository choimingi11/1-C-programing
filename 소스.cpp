#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern void cord1();
extern void cord2();

int main(void)
{
	cord1();
	cord2();

	return 0;
}
void cord1()
{
	char word1;
	char word2;
	char word3;
	char word4;
	char word5;
	word1 = 65;
	word2 = 112;
	word3 = 112;
	word4 = 108;
	word5 = 101;

	printf("����� ����� \"%c%c%c%c%c\"�̶�� ���Ѵ�.", word1, word2, word3, word4, word5);
}

void cord2() //ȸ������
{
	char nickname; //�г���
	int ascii; //�Է¹��� ���� ���ڷ� ��ȯ�Ͽ� �װ��� �г����� �ǵ��� ��
	int id; //���̵�
	int password; //��й�ȣ

	printf("\n����� ���̵�� ��й�ȣ�� 4���� ���ڷ� �г����� 3���� ���ڷ� �Է��ϼ���:");
	
	printf("\nid:____\b\b\b\b"); //���̵�
	scanf("%d", &id);
	
	printf("\npassword:____\b\b\b\b"); //��й�ȣ
	scanf("%d", &password);

	printf("\nnickname:___\b\b\b"); //���� �Է��ϸ� �׿� �ش��ϴ� ���ڰ� �г����� �� (�г��� ���� �й��� ���̱� ����)
	scanf("%d", &ascii);

	nickname = ascii;

	printf("\n����� ���̵�� \'%d\'�̰� ��й�ȣ�� \'%d\'�̸� �г����� \'%c\'�Դϴ�.",id,password,nickname);
}