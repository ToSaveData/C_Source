#include <stdio.h>

int main()
{
    printf("%d%c%c",555, 10, 13);  // 9는 아스키코드에서 tab  
                                   // %c%c가 합쳐졌을 때 new line의 역할을 하게 됨(10 - CR, 13 - LF)
    printf("/%d/ \n",555);
    printf("/%10d/ \n",555);      //기본적으로 오른쪽 정렬
    printf("/%-10d/ \n",555);     //왼쪽정렬
    printf("/%010d/ \n\n",555);   //앞에 빈공간을 0으로 채워준다

    printf("/%f/ \n",8192.1978);
    printf("/%13f/ \n",8192.1978);
    printf("/%*.*f/ \n",13,2,8192.1978);  // 첫번째 *에 13을 넣고 두번째 *에 2를 넣는다
    printf("/%13.2f/ \n",8192.1978);      //소숫점 두자리까지 찍되 소숫점 두자리에서 반올림
    printf("/%-13.2f/ \n\n",8192.1978);

    printf("%c %d %c %d \n",'A','A',97,97);
    printf("%s \n", "C Language...");
    printf("%5s\n", "C Language...");      //5글자 넘으면 다 찍음
    //printf("%20s\n", "C Language...");   //다 찍지만 오른쪽 정렬
    printf("%.5s \n\n", "C Language...");  //5글자까지만 프린트함

    printf("%d %o %x \n",67,67,67);          //10진수 8진수 16진수
    printf("%d %#o %#x \n",067,067,067);     //8진수 67을 10진수 8진수 16진수로 찍는다
    //#을 쓴 이유는 다른 진법을 표현했을 때 진법을 표시하여 오해의 소지를 만들지 않기 위함이다
    printf("%d %#o %#x \n",0x67,0x67,0x67);  //16진수 67을 10진수 8진수 16진수로 찍는다
	printf("%x, %#10x, %#010x \n\n", 0x1234, 0x1234, 0x1234); 

	 return 0 ;
}

