//poiner1.c
#include <stdio.h>

//pointer: ���� �������� ���μ����� ������ �ּ�

int main()
{
	double d; // ����(��)
	double *dp; // �����ͺ���(�޸��ּ�)
	char *ptr;

	d = 1.5;
	printf("%lf, %p \n", d, &d);

	dp = &d;

	printf("%lf, %p \n", *dp, dp); // *: ������ ������(���׿����ڷ� �� ��, ���������� �ʿ�), ������ ���� ���ϱ�

	ptr = &d;
	printf("%p \n", ptr);
	printf("%lf \n", *ptr);
	
	printf("%d, %d, %d \n", sizeof(d), sizeof(dp), sizeof(ptr));


	return 0;
}