//ns_loop1.c
#include <stdio.h>

int main()
{
	char ch, i;
	char in_char;

	printf("input char ? "); //H,
	in_char = getchar();

	for (i = 1; i <= 3; i++) //참이면 반복, 거짓이면 반복 안 함, 안쪽 반복문에서 값 초기화를 시키지 않으면 반복X
	{
		ch = 'A';
		while (ch <= 90) //참이면 반복, 거짓이면 반복 안 함
		{
			printf("%c ", ch); //A, B, C, D, E, F, G, H
			if (ch == in_char)
				//break; // 현재 break가 포함된 반복문만 탈출
				goto move; //goto는 자신의 함수블럭(main 등) 내에서만 이동 가능함
			ch++;
		}
		printf("\n");
	}

	move: //레이블명(콜론과 함께 쓰는 것)
	printf("End \n");

	return 0;
}