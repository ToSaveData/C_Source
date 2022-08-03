//func_test.c
#include <stdio.h>
#include <math.h>


//함수 : 어떤 일을 처리하는 논리적인 코드들의 집합
//함수 사용 방법 : 1. 함수 정의 2. 함수 호출 3. 함수 선언(옵션)

void funcA(); //3. 함수 선언부
//함수 선언은 컴파일러에게 함수의 원형(형식)을 알린다.
//이를 생략하면 컴파일러는 모든 인자를 int로 간주한다.(C++에서는 필수사항임)
void funcB(int salary);
int funcD();
//float funcE(int salTot, float rate); //선언 안 하면 float를 int로 간주함
//main 함수 위에 올라간다면 선언을 생략할 수 있다.(컴파일러가 먼저 인식하기 때문)
//하지만 자함수에서 다른 자함수를 호출할 수 있기 때문에, 선언을 하는 것이 좋다.

float funcE(int salTot, float rate)
{
	//printf("funcE() %d, %f \n", salTot, rate);
	//printf("funcE(): 세금 : %f \n", salTot*rate);
	return salTot * rate;
}

int main()
{
	int salary = 3500000; //지역변수: 자신이 선언된 함수에서만 사용
	int sudang;
	float tax;

	printf("main() start. \n");
	funcA(); // 2. 함수 호출부(무인수)
	
	funcB(salary); //실인수: 모함수의 변수를 자함수에 전달(약 30개까지 가능)
	
	sudang = funcD();
	printf("main() 수당: %d \n", sudang);
	
	tax = funcE(salary+sudang, 0.03);
	printf("실수령액 : %f \n", (salary+sudang)-tax);

	

	printf("10의 제곱근: %lf \n", sqrt(10.0));
	
	printf("main() end. \n");

	return 0;
}




//1. 함수 정의부(헤더 + 바디)
void funcA() //함수 헤더
{		//함수 바디
	printf("funcA() start. \n");
	return;
	printf("funcA() end. \n");
	
}

//실인수와 가인수는 개수와 자료형이 같아야 한다. 같은 이름으로 받지만 실인수와 가인수는 다른 변수이다.
void funcB(int salary) //가인수: 모함수가 주는 실인수를 받는 것
{
	printf("funcB() salary: %d \n", salary);
	
}

int funcD() // 모든 함수의 디폴트 값은 int이다.
{
	int over_time = 15;

	//printf("funcD() 수당 : %d \n", over_time * 37000);
	return over_time * 37000;
}