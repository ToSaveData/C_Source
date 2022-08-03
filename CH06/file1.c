//file1.c
#include "file.h" // 사용자정의 헤더파일 : ""로 가져옴. ""는 현재 방을 보고서 시스템 라이브러리까지 다녀온다.

int salary = 3500000; //전역변수

int main()
{
	myName();
	myAge();
	mySal();

	printf("실수령액 : %d \n", salary);
	
	return 0;
}

void myName()//void: return value가 없는것
{
	printf("성명 : 홍길동 \n");
}

void myAge()
{
	printf("나이 : %d \n", AGE);
}

