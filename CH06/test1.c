//test1,c
#include <stdio.h>

//Ű����κ��� �������� �Է¹޾�,
//���� ����, ���� �ѷ��� ���Ͽ�
//����Ͻÿ�.

/*
������
������ ? 7
���� ����: ???
���� �ѷ�: ???
*/

double Area(int radius);
double Cir(int radius);

int main()
{
//	int r;
//	printf("������ ?");
//	scanf("%d", &r);
//	
//	printf("���� ����: %lf", r * r * 3.14159);
//	printf("\n���� �ѷ�: %lf", 2 * r * 3.14159);

	//1. �޸� �Ҵ�
	int radius;
	double area, cir;

	//2. ������ �Է�
	printf("������? ");
	scanf("%d", &radius);

	//3, ó��(����, �ѷ� ���)
	area = Area(radius);
	cir = Cir(radius);

	//4. ���
	printf("���� ����: %lf \n", area);
	printf("���� �ѷ�: %lf \n", cir);

	return 0;
}


double Area(int radius)
{
	return radius * radius * 3.14159;
}

double Cir(int radius)
{
	return radius * 2 * 3.14159;
}