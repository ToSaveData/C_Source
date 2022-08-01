//operator2.c
#include <stdio.h>

int main()
{
	int x = 70, y = 150;
	//관계연산자: 두 값을 비교하여 참(1) 또는 거짓(0)을 반환
	printf("%d \n", x > y);
	printf("%d \n", x < y);
	printf("%d \n", x == y);
	printf("%d \n\n", x != y);

	//논리연산자: 두 논리값을 비교하여 새로운 참(1) 또는 거짓(0)을 반환
	//			여러 개의 조건을 비교하고자 할 때 사용
	printf("%d \n", x >= 100 && y >= 100);
	printf("%d \n", x >= 100 || y >= 100);
	x = 0;
	printf("%d, %d \n", !x, !y);
	
	return 0;
}