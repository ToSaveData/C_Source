#include <stdio.h>
#include <ctype.h> //toupper �Լ��� ���� ��ó������ �ʿ�

int main()
{
	int num1, num2;
	char op;

	while (1)
	{
	do {
		printf("���ϱ�(a), ����(s), ���ϰ�(m), ������(d), ����(q) \n");
		printf("������ ù ���ڸ� �Է��ϼ��� ? ");
		op = toupper(getchar());   // A[enter]
		getchar();
		printf("\n");
		} while (op != 'A' && op != 'S' && op != 'M' && op != 'D' && op != 'Q'); //do..while�� ���� true�� �� �ö󰣴�
		if (op == 'Q')
			break;
		printf("ù ��° �� : ");
		scanf("%d", &num1);  //100[enter]

		printf("�� ��° �� : ");
		scanf("%d%*c", &num2);    //30[enter]

		if (op == 'A')
			printf("%d + %d = %d \n", num1, num2, num1 + num2);
		else if (op == 'S')
			printf("%d - %d = %d \n", num1, num2, num1 - num2);
		else if (op == 'D')
		{
			if (num2 != 0)
				printf("%d / %d = %d \n", num1, num2, num1 / num2);
			//else
				//printf("0���� ���� �� �����!!! \n");
		}
		else if (op == 'M')
			printf("%d * %d = %d \n", num1, num2, num1 * num2);
/*
		printf("\n����ұ�� ? (y/n) ");
		scanf(" %c%*c", &op);
		if (op == 'Y || op == 'y')
			continue;
		else
			break; //���ѷ����� �� ���� break�� ������ ����� �����Ѵ�.
*/
	} //while (1) end

	printf("End. \n");

	return 0 ;
}
