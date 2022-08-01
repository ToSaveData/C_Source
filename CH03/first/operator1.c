//operator1.c
#include <stdio.h>

int main()
{
	int x = 100, y = 200;
	printf("x: %d \n", x);
	++x; //x=x+1 방식과 결과는 같지만 x++이 속도가 더 빠름
	printf("x: %d \n", x);
	--x; //x=x-1
	printf("x: %d \n", x);

	printf("x: %d, y: %d \n", ++x, y++); //전위형은 먼저 빼거나 더하고 실행, 후위형은 실행 후 빼거나 더함
	printf("x: %d, y: %d \n", x, y); //전위연산보다는 후위연산을 자주 쓴다
	printf("x: %d, y: %d \n", --x, y--);
	printf("x: %d, y: %d \n", x, y);

	return 0;
}