//pointer3.c
#include <stdio.h>

int main()
{
	//�����ͺ���: ������ ���� �ּ� �̰ų� �Ǵ� 1���� �迭�� �����ּҸ� �����ϴ� ������
	int num[5] = { 100,200,300,400,500 };
	int i, *ptr;

	ptr = num;

	for (i = 0; i < 5; i++)
		printf("%p: %d, %d, %d, %d \n",
			&num[i], num[i], *(ptr+i), *(num+i), ptr[i]); //[]�� ������ �������� *( + )�� �ٲ��
	printf("\n");

	char msg[20] = "Hello World.";
	char *p2;

	p2 = msg;
	printf("%c, %c, %c, %c \n", msg[0], *msg, *(msg + 1), *p2); //�����Ͷ� ���� ����ϴ� %c�� ����
	printf("%p, %s, %s \n", msg, msg, p2);
	
	//p2�� ����Ͽ� H e l l o W o r l d . �� ����Ͻÿ�.

	for (i = 0; i < 20; i++)
	{
		if (*(p2 + i) == NULL)
			break;
		printf("%c ", *(p2 + i));
	}
	//while���� 0�� �ƴϸ� ��� ���̴�. �Ʒ� ������. msg(÷�ڰ� ���� �迭����)�� �����ͻ���̴�.
//*p2�� msg�� ����� ������ ����.(����� �ּҸ� �ٲ� �� ����)

/*while (*p2)
{
	printf("%c ", *p2);
	p2++;
}
printf("\n");
*/

	printf("\n\n");

	char *p3 = "multi cmapus !!!";
	//p3 = "multi cmapus !!!"; //���ڿ� ����� �ڵ����� �ּ�(���� �� ����)�� ���´�.
	printf("p3: %p, %s \n", p3, p3);

	
	return 0;
}