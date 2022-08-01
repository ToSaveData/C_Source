//array3.c
#include <stdio.h>

int main()
{
	char ch = 'a', i;
	char str[10] = "kingdom"; // 1차원 배열은 문자열을 하나 저장한다.

	printf("%d, %d, %d \n", sizeof(ch), sizeof(str[0]), sizeof(str));
	printf("%c, %p, %p \n \n", str[0], &str[0], &str);

	printf("str : %p, %s \n", str, str); //%s가 되는 이유: 배열의 주소값을 문자열로 나타내라고 하면
	//배열의 처음값부터 끝까지 나타내기로 약속함.

	printf("input string ? ");
	//scanf("%s", str);
	gets(str); // 문자열 입력에는 gets를 더 많이 사용한다. 문자열을 검사하는 루틴이 필요하다.
	//fgets(str, 10, stdin);

	printf("str : %p, %s", str, str);
	
	printf("\n");
	for (i = 0; i < 10; i++)
		printf("%p: %c, %d \n", &str[i], str[i], str[i]);

	return 0;
}