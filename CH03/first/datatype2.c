//datatype2.c
#include <stdio.h>

int main()
{
	int x, y;

	printf("x ? ");
	scanf("%d", &x);
	printf("y ? ");
	scanf("%d", &y);

	printf("%d + %d = %d \n", x, y, x + y);
	printf("%d - %d = %d \n", x, y, x - y);
	printf("%d * %d = %d \n", x, y, x * y);
	printf("%d / %d = %d \n", x, y, x / y);
	printf("%d %% %d = %d \n", x, y, x % y);  // %%는 '문자 %'라는 뜻

	return 0;

}