//if1.c
#include <stdio.h>
#include <stdlib.h>
//제어문: 조건제어, 반복제어, 기타제어
//조건제어: if, switch 
//반복제어: for, while, do...while 
//기타제어: break, continue, goto


int main()
{
	int score;
	printf("점수 ? ");
	scanf("%d", &score);

	if (score > 100 || score < 0)
	{
		printf("점수 범위는 0~100입니다. \n");
		exit(1);
	}
	//exit(1); //프로그램 즉시 종료
	
	if (score >= 90)
		printf("%d, A학점 \n", score);
	else if (score >= 80)
		printf("%d, B학점 \n", score);
	else if (score >= 70)
		printf("%d, C학점 \n", score);
	else if (score >= 60)
		printf("%d, D학점 \n", score);
	else
		printf("%d, 노력바람 !!! \n", score);
	printf("End \n");


	return 0;
}
