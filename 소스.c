#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern void gwajae1(); // c�� 2�� ����
extern void gwajae2(); // c�� 4�� ����
extern void gwajae3(); // c�� 6�� ����
extern void gwajae4(); // c�� 8�� ����
extern void gwajae5(); // c�� 10�� ����

int main(void)
{
	gwajae1(); // c�� 2�� ����
	gwajae2(); // c�� 4�� ����
	gwajae3(); // c�� 6�� ����
	gwajae4(); // c�� 8�� ����
	gwajae5(); // c�� 10�� ����

	return 0;
}

void gwajae1() // c�� 2�� ����
{
	int sipyukjinsu; //16���� ����
	
	printf("16���� ������ �Է��Ͻÿ�:");
	scanf("%x", &sipyukjinsu);
	printf("8������ %#o�Դϴ�.\n10������ %d�Դϴ�.\n16������ %#x�Դϴ�.\n", sipyukjinsu, sipyukjinsu, sipyukjinsu);

}

void gwajae2() // c�� 4�� ����
{
	double height; //����
	double garo; //����
	double sero; //����

	double volume; //����

	printf("������ ���� ���� ���̸� �ѹ��� �Է�:");
	scanf("%lf %lf %lf", &garo, &sero, &height);

	volume = garo * sero * height; //����=����*����*����
	printf("������ ���Ǵ� %lf�Դϴ�.", volume);
}

void gwajae3() // c�� 6�� ����
{
	double moonjae; //�־��� ��(����)

	moonjae = 3.32e-3 + 9.76e-8;
	printf("\n%lf", moonjae);
}

void gwajae4() // c�� 8�� ����
{
	int rice; //�ƽ�Ű �ڵ� �� ���̽� �ڵ� �� ���� 
	char curry; //rice���� ���� ���� ���ڷ� ��ȯ(�� ������ ī������ %c? Ŀ��? curry? �����߾��)

	printf("\n�ƽ�Ű �ڵ� ���� �Է��ϼ���:");
	scanf("%d", &rice);

	curry = rice;
	printf("����:%c�Դϴ�.", curry);
}

void gwajae5() // c�� 10�� ����
{
	
	printf("\n\aȭ�簡 �߻��Ͽ����ϴ�!!\a"); //���!���!���!���!
	
}