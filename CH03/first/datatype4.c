#include <stdio.h>

int main() 
{
	int x;
	float y;

	x = 100, y = 30.0;

	printf("%d \n", x / 30);
	printf("%f \n", x / y);   //묵시적 형변환

	printf("%f \n", (float)x / 30);  //명시적 형변환
	// cast연산자(형변환 연산자)

	typedef long long int lo_int;

	long long int n1 = 2700000000;
	printf("%lld \n", n1);

	lo_int n2 = 2800000000;
	printf("%lld \n", n2);
	//n1과 n2 모두 long long int이다.


	return 0;
}