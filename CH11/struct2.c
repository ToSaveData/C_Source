//struct2.c
#include <stdio.h>
#include <string.h>

void funcA(struct EMPLOYEE *emps);
struct EMPLOYEE funcB();

typedef struct EMPLOYEE {
	char name[20];  //멤버(Member)
	int salary;
	float height;
	char comAddr[100];
} EMP;

int main()
{
	struct EMPLOYEE emps = { "홍길동", 3500000, 175, "서울시 강남구 100" }, my;

	funcA(&emps); //지역변수가 정의돼있으므로 형식까지 알려줄 필요는 없다. struct EMPLOYEE emps가 아니다.
	printf("main(): %s, %d, %.2f, %s \n", emps.name, emps.salary, emps.height, emps.comAddr);


	my = funcB();

	printf("my: %s, %d, %.2f, %s \n", my.name, my.salary, my.height, my.comAddr);




	return 0;
}

void funcA(struct EMPLOYEE *emps) //구조체포인터 변수
{
	printf("funcA() : %s, %d, %.2f, %s \n", emps->name, emps->salary, emps->height, emps->comAddr);

	emps->salary += 200000;
}

struct EMPLOYEE funcB()
{
	struct EMPLOYEE tmp;
	
	tmp.salary = 4500000;
	strcpy(tmp.name, "진달래");
	//tmp.name = '진달래';
	tmp.height = 163;
	strcpy(tmp.comAddr, "부산시 해운대구 200");
	//tmp.comAddr = "부산시 해운대구 200";

	//printf("funcB() : %s, %d, %.2f, %s \n", tmp.name, tmp.salary, tmp.height, tmp.comAddr);
	
	return tmp;
}
