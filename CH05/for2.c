//for2.c
#include <stdio.h>

int main()
{
	//1. 메모리 할당(변수선언)
	
	int i, sum = 0;
	int start, end, tmp;

	//2. 데이터 입력
	printf("start : ? ");
	scanf("%d", &start);
	printf("end : ? ");
	scanf("%d", &end);

	if (start > end)
	{
		tmp = start;
		start = end;
		end = tmp;

	}

	//3. 처리(누적)
	for (i = start; i <= end; i++) //조건이 거짓이거나 break를 만나면 반복문 탈출
	{
		sum += i;
		if (sum > 3000)
			break;
	}
	

	//4. 출력
	if(i-1 == end)
		printf("%d부터 %d까지의 sum: %d \n", start, end, sum);
	else
		printf("%d부터 %d까지의 sum: %d \n", start, i, sum);

	return 0;
}