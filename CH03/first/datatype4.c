#include <stdio.h>

int main() 
{
	int x;
	float y;

	x = 100, y = 30.0;

	printf("%d \n", x / 30);
	printf("%f \n", x / y);   //������ ����ȯ

	printf("%f \n", (float)x / 30);  //����� ����ȯ
	// cast������(����ȯ ������)

	typedef long long int lo_int;

	long long int n1 = 2700000000;
	printf("%lld \n", n1);

	lo_int n2 = 2800000000;
	printf("%lld \n", n2);
	//n1�� n2 ��� long long int�̴�.


	return 0;
}