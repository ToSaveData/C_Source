//operator3.c
#include <stdio.h>

int main()
{
	int x;

	printf("성별 ? (0:남,1:여) \n");
	scanf("%d", &x);

	printf("%s \n", x==0 ? "남성" : x==1 ? "여성" : "입력오류!!");
	//0이외의 모든 값(1이 아니더라도) 여성이 나옴 => 입력오류

	int n1 = 100, n2 = 200;
	int sum = 0;
	sum += n1; //일반적으로 sum = sum + n1;
	sum += n2; //+=을 복합대입연산자라고 함. 더 빠르다.
	printf("sum : %d \n", sum);

	return 0;
}