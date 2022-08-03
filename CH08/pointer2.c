//pointer2.c
#include <stdio.h>

int main()
{
	char ch, *cp;
	int num, * ip;
	float fnum, *fp;
	double dnum, * dp;

	printf("%d, %d, %d, %d \n", sizeof(ch), sizeof(num), sizeof(fnum), sizeof(dnum));
	printf("%d, %d, %d, %d \n", sizeof(cp), sizeof(ip), sizeof(fp), sizeof(dp));
	
	//1. 포인터변수에 참조할 변수의 주소를 할당

	cp = &ch, ip = &num, fp = &fnum, dp = &dnum;

	//2. 포인터를 사용하여 변수에 값을 할당
	*cp = 'A', *ip = 100, *fp = 1.1, *dp = 5.3;

	printf("%c, %d, %f, %lf \n", ch, num, fnum, dnum);
	printf("%p, %p, %p, %p \n", cp, ip, fp, dp);
	//printf("%p, %p, %p, %p \n", &cp, &ip, &fp, &dp);

	ch++, num++, fnum++, dnum++; //값의 연산
	cp++, ip++, fp++, dp++; //포인터 연산: +, -, ++, -- 만 가능, 자료형의 크기만큼 증감

	printf("%c, %d, %f, %lf \n", ch, num, fnum, dnum);
	printf("%p, %p, %p, %p \n", cp, ip, fp, dp);

	return 0;
}