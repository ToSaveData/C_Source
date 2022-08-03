//variableScope.c
#include <stdio.h>

int salary = 3500000; //전역변수
int main()
{
	int age = 23; //지역변수

	printf("main() age:%d,%p salary:%d,%p \n", age, &age, salary, &salary);
	funcA(age);
	printf("main() age:%d,%p salary:%d,%p \n", age, &age, salary, &salary);
	funcB();
	printf("main() age:%d,%p salary:%d,%p \n", age, &age, salary, &salary);


	funcD();
	funcD();
	funcD();

	return 0;
}

funcD()
{
	int sum1 = 1; //지역변수
	static int sum2 = 1; //정적변수: data segment에 있는 자료는 한 번만 초기화됨(1-2-3)

	printf("sum1: %d, sum2: %d \n", sum1++, sum2++);
}

funcA(int age)
{
	printf("funcA() age:%d,%p salary:%d,%p \n", age, &age, salary, &salary); //실인수와 가인수의 위치는 다르다.
	age = 35;
	salary += 200000;
}

funcB()
{
	int age = 23;
	int salary = 1000;
	//salary의 경우 지역변수와 전역변수로 각각 위치가 다르다.
	//같은 이름의 지역 변수를 다른 함수에서 정의 가능. 위치가 다르기 때문에 서로 다른 변수임.
	printf("funcB() age:%d,%p salary:%d,%p \n", age, &age, salary, &salary);
	age = 40;
	salary += 2000;
}