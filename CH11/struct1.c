//struct1.c
#include <stdio.h>

//구조체(struct): 관련이 있는 데이터들을 하나의 자료형으로 만들어
// 사용하게 한다, 즉 하나의 사용자 정의 자료형이다.
// 이 때, 데이터들의 자료형은 어떠한 자료형이 와도 된다.

int main()
{
	typedef struct EMPLOYEE {
		char name[20];  //멤버(Member)
		int salary;
		float height;
		char comAddr[100];
	} EMP;

	//자료형        구조체변수
	struct EMPLOYEE emps = { "홍길동", 3500000, 175, "서울시 강남구 100" };
	//emps: 멤버들의 집합(데이터), 배열이 아님 => emps만으로 주소를 불러올 수 없음
	struct EMPLOYEE *ptr; //구조체포인터 변수

	EMP tmp;
	
	printf("%d, %d \n", sizeof(emps), sizeof(struct EMPLOYEE));
	printf("emps: %p, %p \n", &emps, emps.name);


	//printf("%d \n", salary); 여기서의 salary는 변수, 멤버와 변수를 구분해야 함.
	
	printf("%s, %d, %.2f, %s \n", emps.name, emps.salary, emps.height, emps.comAddr); 
	// .(온점): 구조체 멤버 연산자
	
	tmp = emps;
	//구조체는 배열이 아니기 때문에, 그대로 복사가 가능하다
	printf("%s, %d, %.2f, %s \n\n", tmp.name, tmp.salary, tmp.height, tmp.comAddr);

	printf("ptr sizeof: %d \n", sizeof(ptr));

	ptr = &emps;
	printf("%s, %d, %.2f, %s \n", ptr->name, ptr->salary,
								  (*ptr).height, (*ptr).comAddr); // ->: 구조체포인터 연산자

	return 0;
}