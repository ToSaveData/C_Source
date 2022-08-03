//file2.c

#include "file.h"


extern int salary; //메모리 할당을 받지 않고 컴파일러에게 자료형을 알린다.


void mySal()
{
	//printf("수당 : %d \n", SUDANG);
	salary += SUDANG;

}
