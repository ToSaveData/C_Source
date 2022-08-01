//arraytest.c
#include <stdio.h>

#define ArrSz 100

int main()
{
	int num[ArrSz+4] = { 0 };
	int Cn;
	int i;

	for (i = 0; i < ArrSz; i++)
	{
		printf("%d, input ? (입력종료: 0) ", i+1);
		scanf("%d", &num[i]); 
		if (num[i] == 0)
			break;	
		Cn = i+1;
		num[ArrSz] += num[i];
		num[ArrSz + 1] = num[ArrSz] / Cn;

	}
	
	num[ArrSz + 2] = num[ArrSz + 3] = num[0];
	for (i = 1; i < Cn; i++)
	{
		if (num[ArrSz + 2] < num[i]) //최대값
			num[ArrSz + 2] = num[i];

		if (num[ArrSz + 3] > num[i])//최소값
			num[ArrSz + 3] = num[i];
	}

	for (i = 0; i < Cn; i++)
		printf("%d, ", num[i]);
	printf("\n");
	printf("합: %d, 평균: %d, 최대값: %d, 최소값: %d", num[ArrSz], num[ArrSz + 1], num[ArrSz + 2], num[ArrSz + 3]);

	return 0;
}