//test1,c
#include <stdio.h>

//키보드로부터 반지름을 입력받아,
//원의 넓이, 원의 둘레를 구하여
//출력하시오.

/*
실행결과
반지름 ? 7
원의 넓이: ???
원의 둘레: ???
*/

double Area(int radius);
double Cir(int radius);

int main()
{
//	int r;
//	printf("반지름 ?");
//	scanf("%d", &r);
//	
//	printf("원의 넓이: %lf", r * r * 3.14159);
//	printf("\n원의 둘레: %lf", 2 * r * 3.14159);

	//1. 메모리 할당
	int radius;
	double area, cir;

	//2. 데이터 입력
	printf("반지름? ");
	scanf("%d", &radius);

	//3, 처리(넓이, 둘레 계산)
	area = Area(radius);
	cir = Cir(radius);

	//4. 출력
	printf("원의 넓이: %lf \n", area);
	printf("원의 둘레: %lf \n", cir);

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