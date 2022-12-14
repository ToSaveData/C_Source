//array2.c
#include <stdio.h>

#define Arr_SZ 5

int main()
{
	int i;
	//1. 배열은 상수로 선언한다.
	int a1[5];
	int a2[Arr_SZ];
	int n = 5;
	//int a3[n]; 배열 크기를 변수로 쓸 수 없다 => 동적할당을 써야 사용 가능
	const int m = 5;
	//int a4[m];

	//2. 배열복사는 배열변수명으로 복사할 수 없다. 
	int x1[5] = {1,2,3,4,5};
	int x2[5];
	//x2 = x1; //첨자가 없는 배열은 상수이기 때문에 받을 수 없음

	for (i = 0; i < 5; i++)
	{
		x2[i] = x1[i]; // 이처럼 원소 대 원소로 받아야한다.
	
		printf("%d, ", x2[i]);
	}
	printf("\n");


	//3, 배열초기화
	//int x3[5];
	//int x3[5] = { 100,200,300,400,500 };
	int x3[5] = { 100,200 }; //나머지 값은 기본으로 0을 제공한다

	int x[20][50] = { 0 }; //1000개의 모든 배열이 0이 된다
	
	for (i = 0; i < 5; i++)
		printf("%d, ", x3[i]);
	
	printf("\n");


	//4. 언사이즈드 배열(배열의 선언과 동시에 초기화될 때 가능)
	int x4[] = { 100,200,300,400,500,600,700,800,900 }; // 초기화한 값을 자동으로 채움
//	int x5[2][] = { 1,2,3,4,5,6 }; //2차원 배열에서는 행만 생략(언사이즈) 가능. 열을 알아야 행을 알 수 있다.

	printf("x4 sizeof: %d \n", sizeof(x4));

	for (i = 0; i < sizeof(x4)/sizeof(x4[0]); i++)
		printf("%d, ", x4[i]);

	return 0;
}