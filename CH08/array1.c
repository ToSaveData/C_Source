//array1.c
#include <stdio.h>



//�迭(array) : �ϳ��� �̸����� �����Ǵ� ���� �ڷ����� ���� �ڵ���� ����
// �� �������� �޸� ����
// int num[5]; => �迭����, 4����Ʈ 5���� �޶�� �ǹ�, ������
int main()
{
	int num[5] = { 300,20,75,-40,730 };
	int i, sum = 0, max, min;
	float avg;


	printf("%d, %d \n", sizeof(num), sizeof(num[0])); //�迭�� 0������ ����, ++��, �� ��(���μ���)�� ����
// []: ÷��(subscript)

	printf("%d, %p, %p \n\n", num[0] & num[0], num);
	//÷�ڰ� ���� �迭������ �� �迭�� �Ҵ�� �޸��� �����ּҸ� ���� ������ ����̴�.
	

	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d, input ?", i+1);
	//	scanf("%d", &num[i]);
	//}
	
	for (i = 0; i < 5; i++)
		sum += num[i];
	avg = (float)sum / 5;

	max = min = num[0];
	for (i = 1; i < 5; i++)
	{
		if (max < num[i]) //�ִ밪
			max = num[i];
		
		if (min > num[i])//�ּҰ�
			min = num[i];
	}


	for (i = 0; i < 5; i++)
		printf("%d, ", num[i]);
	printf("\n");
	printf("��: %d, ���: %.2f, �ִ밪: %d, �ּҰ�: %d", sum, avg, max, min);

	return 0;
}