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
		printf("%d, input ? (�Է�����: 0) ", i+1);
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
		if (num[ArrSz + 2] < num[i]) //�ִ밪
			num[ArrSz + 2] = num[i];

		if (num[ArrSz + 3] > num[i])//�ּҰ�
			num[ArrSz + 3] = num[i];
	}

	for (i = 0; i < Cn; i++)
		printf("%d, ", num[i]);
	printf("\n");
	printf("��: %d, ���: %d, �ִ밪: %d, �ּҰ�: %d", num[ArrSz], num[ArrSz + 1], num[ArrSz + 2], num[ArrSz + 3]);

	return 0;
}