#include <stdio.h>
#include <ctype.h> //toupper 함수를 위해 전처리문이 필요

int main()
{
	int num1, num2;
	char op;

	while (1)
	{
	do {
		printf("더하기(a), 빼기(s), 곱하게(m), 나누기(d), 종료(q) \n");
		printf("연산할 첫 문자를 입력하세요 ? ");
		op = toupper(getchar());   // A[enter]
		getchar();
		printf("\n");
		} while (op != 'A' && op != 'S' && op != 'M' && op != 'D' && op != 'Q'); //do..while은 값이 true일 때 올라간다
		if (op == 'Q')
			break;
		printf("첫 번째 값 : ");
		scanf("%d", &num1);  //100[enter]

		printf("두 번째 값 : ");
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
				//printf("0으로 나눌 수 없어요!!! \n");
		}
		else if (op == 'M')
			printf("%d * %d = %d \n", num1, num2, num1 * num2);
/*
		printf("\n계속할까요 ? (y/n) ");
		scanf(" %c%*c", &op);
		if (op == 'Y || op == 'y')
			continue;
		else
			break; //무한루프로 들어갈 때는 break로 나오는 방법을 지정한다.
*/
	} //while (1) end

	printf("End. \n");

	return 0 ;
}
