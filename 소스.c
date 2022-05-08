#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern void gwajae1(); // c프 2번 문제
extern void gwajae2(); // c프 4번 문제
extern void gwajae3(); // c프 6번 문제
extern void gwajae4(); // c프 8번 문제
extern void gwajae5(); // c프 10번 문제

int main(void)
{
	gwajae1(); // c프 2번 문제
	gwajae2(); // c프 4번 문제
	gwajae3(); // c프 6번 문제
	gwajae4(); // c프 8번 문제
	gwajae5(); // c프 10번 문제

	return 0;
}

void gwajae1() // c프 2번 문제
{
	int sipyukjinsu; //16진수 정수
	
	printf("16진수 정수를 입력하시오:");
	scanf("%x", &sipyukjinsu);
	printf("8진수는 %#o입니다.\n10진수는 %d입니다.\n16진수는 %#x입니다.\n", sipyukjinsu, sipyukjinsu, sipyukjinsu);

}

void gwajae2() // c프 4번 문제
{
	double height; //높이
	double garo; //가로
	double sero; //세로

	double volume; //부피

	printf("상자의 가로 세로 높이를 한번에 입력:");
	scanf("%lf %lf %lf", &garo, &sero, &height);

	volume = garo * sero * height; //부피=가로*세로*높이
	printf("상자의 부피는 %lf입니다.", volume);
}

void gwajae3() // c프 6번 문제
{
	double moonjae; //주어진 식(문제)

	moonjae = 3.32e-3 + 9.76e-8;
	printf("\n%lf", moonjae);
}

void gwajae4() // c프 8번 문제
{
	int rice; //아스키 코드 값 라이스 코드 값 ㅋㅋ 
	char curry; //rice에서 받은 값을 문자로 변환(제 저녁이 카레여서 %c? 커리? curry? 생각했어요)

	printf("\n아스키 코드 값을 입력하세요:");
	scanf("%d", &rice);

	curry = rice;
	printf("문자:%c입니다.", curry);
}

void gwajae5() // c프 10번 문제
{
	
	printf("\n\a화재가 발생하였습니다!!\a"); //비상!비상!비상!비상!
	
}