//operator1.c
#include <stdio.h>

int main()
{
	int x = 100, y = 200;
	printf("x: %d \n", x);
	++x; //x=x+1 ��İ� ����� ������ x++�� �ӵ��� �� ����
	printf("x: %d \n", x);
	--x; //x=x-1
	printf("x: %d \n", x);

	printf("x: %d, y: %d \n", ++x, y++); //�������� ���� ���ų� ���ϰ� ����, �������� ���� �� ���ų� ����
	printf("x: %d, y: %d \n", x, y); //�������꺸�ٴ� ���������� ���� ����
	printf("x: %d, y: %d \n", --x, y--);
	printf("x: %d, y: %d \n", x, y);

	return 0;
}