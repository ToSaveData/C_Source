//ns_loop1.c
#include <stdio.h>

int main()
{
	char ch, i;
	char in_char;

	printf("input char ? "); //H,
	in_char = getchar();

	for (i = 1; i <= 3; i++) //���̸� �ݺ�, �����̸� �ݺ� �� ��, ���� �ݺ������� �� �ʱ�ȭ�� ��Ű�� ������ �ݺ�X
	{
		ch = 'A';
		while (ch <= 90) //���̸� �ݺ�, �����̸� �ݺ� �� ��
		{
			printf("%c ", ch); //A, B, C, D, E, F, G, H
			if (ch == in_char)
				//break; // ���� break�� ���Ե� �ݺ����� Ż��
				goto move; //goto�� �ڽ��� �Լ���(main ��) �������� �̵� ������
			ch++;
		}
		printf("\n");
	}

	move: //���̺��(�ݷа� �Բ� ���� ��)
	printf("End \n");

	return 0;
}