//for2.c
#include <stdio.h>

int main()
{
	//1. �޸� �Ҵ�(��������)
	
	int i, sum = 0;
	int start, end, tmp;

	//2. ������ �Է�
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

	//3. ó��(����)
	for (i = start; i <= end; i++) //������ �����̰ų� break�� ������ �ݺ��� Ż��
	{
		sum += i;
		if (sum > 3000)
			break;
	}
	

	//4. ���
	if(i-1 == end)
		printf("%d���� %d������ sum: %d \n", start, end, sum);
	else
		printf("%d���� %d������ sum: %d \n", start, i, sum);

	return 0;
}