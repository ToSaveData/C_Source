//array3.c
#include <stdio.h>

int main()
{
	char ch = 'a', i;
	char str[10] = "kingdom"; // 1���� �迭�� ���ڿ��� �ϳ� �����Ѵ�.

	printf("%d, %d, %d \n", sizeof(ch), sizeof(str[0]), sizeof(str));
	printf("%c, %p, %p \n \n", str[0], &str[0], &str);

	printf("str : %p, %s \n", str, str); //%s�� �Ǵ� ����: �迭�� �ּҰ��� ���ڿ��� ��Ÿ����� �ϸ�
	//�迭�� ó�������� ������ ��Ÿ����� �����.

	printf("input string ? ");
	//scanf("%s", str);
	gets(str); // ���ڿ� �Է¿��� gets�� �� ���� ����Ѵ�. ���ڿ��� �˻��ϴ� ��ƾ�� �ʿ��ϴ�.
	//fgets(str, 10, stdin);

	printf("str : %p, %s", str, str);
	
	printf("\n");
	for (i = 0; i < 10; i++)
		printf("%p: %c, %d \n", &str[i], str[i], str[i]);

	return 0;
}