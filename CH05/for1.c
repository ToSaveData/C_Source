//for1.c : 반복 횟수를 알고 있을 때 주로 사용
#include <stdio.h>

int main()
{
	int i;

	//초기화;조건식;증감식
	for (i = 1; i <= 5; i++)
		printf("hello world \n");
	printf("i: %d \n", i);

	for (i = 5; i > 0; i--)
		printf("%d, ", i);
	printf("     i: %d \n", i);

	for (i = 1; i <= 5; i += 2)
		printf("%d", i);
	printf("    i: %d \n", i);

	for (i = 10; i <= 5; i++)
		printf("%d", i);
	printf("    i: %d \n", i);

	for (i = 1; i <= 5; i++) //null 문장
		printf("%d", i);
	printf("    i: %d \n", i);

	i = 1;
	for ( ; i <= 5; )
		printf("%d", i++);
	printf("    i: %d \n", i);

	return 0;

}