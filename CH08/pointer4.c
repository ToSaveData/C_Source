//pointer4.c
#include <stdio.h>

int* swap(int* x, int* y);

int main()
{
	int x = 100, y = 200;
	int *sal;

	printf("before x : %d, y : %d \n", x, y);
	//swap(x, y); //call by value: 부모의 값을 내려주는 것 => 변수가 기다리면 됨
	sal = swap(&x, &y); //call by reference: 부모의 주소를 내려주는 것 => 포인터 변수가 기다리면 됨
	printf("after x : %d, y : %d \n", x, y);
	
	printf("salary : %d \n", *sal);

	return 0;
}

//swap(int x, int y)
int *swap(int *x, int *y)
{
	int tmp;
	static int salary = 3700000; //정적변수 => 데이터 세그먼트

	tmp = *x;
	*x = *y;
	*y = tmp; //자식함수는 부모함수의 값에 영향을 줄 수 없다.

	return &salary;
}