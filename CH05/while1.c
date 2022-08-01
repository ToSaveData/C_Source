//while1.c : 반복 횟수를 모를 때 주로 사용
#include <stdio.h>

int main()
{
	char ch;
	
	ch = 'a';
	while (ch <= 90) //참이면 반복, 거짓이면 반복 안 함
	{	printf("%c ", ch);
		ch++;
	}

	printf("\n");

	ch = 'a';
	
	do {
		printf("%c ", ch);
		ch++;
	} while (ch <= 90); //최소 1번은 반복
	printf("\n");

	return 0;
}