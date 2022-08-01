//getchar1.c
#include <stdio.h>

int main() {

	char c1, c2;

	printf("input c1 ? ");
	c1 = getchar(); //입력된 값 이외에도 enter값이 하나의 문자로 취급되기 때문에 
	                //상황에 따라서는 버릴 필요가 있음
	printf("c1: %c\n", c1);

	getchar(); //enter값을 가져감
	//while(getchar() != '\n');  //입력버퍼에 남겨진 모든 값을 제거함

	printf("input c2 ? ");
	c2 = getchar();
	printf("c2: %c\n", c2);

	return 0;
}