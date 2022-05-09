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

	printf("사과를 영어로 \"%c%c%c%c%c\"이라고 말한다.", word1, word2, word3, word4, word5);
}

void cord2() //회원가입
{
	char nickname; //닉네임
	int ascii; //입력받은 수를 문자로 변환하여 그것이 닉네임이 되도록 함
	int id; //아이디
	int password; //비밀번호

	printf("\n당신의 아이디와 비밀번호를 4개의 숫자로 닉네임은 3개의 숫자로 입력하세요:");
	
	printf("\nid:____\b\b\b\b"); //아이디
	scanf("%d", &id);
	
	printf("\npassword:____\b\b\b\b"); //비밀번호
	scanf("%d", &password);

	printf("\nnickname:___\b\b\b"); //값을 입력하면 그에 해당하는 문자가 닉네임이 됨 (닉네임 짓는 압박을 줄이기 위함)
	scanf("%d", &ascii);

	nickname = ascii;

	printf("\n당신의 아이디는 \'%d\'이고 비밀번호는 \'%d\'이며 닉네임은 \'%c\'입니다.",id,password,nickname);
}