//while1.c : �ݺ� Ƚ���� �� �� �ַ� ���
#include <stdio.h>

int main()
{
	char ch;
	
	ch = 'a';
	while (ch <= 90) //���̸� �ݺ�, �����̸� �ݺ� �� ��
	{	printf("%c ", ch);
		ch++;
	}

	printf("\n");

	ch = 'a';
	
	do {
		printf("%c ", ch);
		ch++;
	} while (ch <= 90); //�ּ� 1���� �ݺ�
	printf("\n");

	return 0;
}