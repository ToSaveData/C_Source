//poiner1.c
#include <stdio.h>

//pointer: 현재 실행중인 프로세스의 임의의 주소

int main()
{
	double d; // 변수(값)
	double *dp; // 포인터변수(메모리주소)
	char *ptr;

	d = 1.5;
	printf("%lf, %p \n", d, &d);

	dp = &d;

	printf("%lf, %p \n", *dp, dp); // *: 포인터 연산자(단항연산자로 올 때, 간접참조시 필요), 이항일 때는 곱하기

	ptr = &d;
	printf("%p \n", ptr);
	printf("%lf \n", *ptr);
	
	printf("%d, %d, %d \n", sizeof(d), sizeof(dp), sizeof(ptr));


	return 0;
}