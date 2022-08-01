#include <stdio.h>  //입출력과 관련된 함수 정보를 제공

//함수의 집합
//# : 전처리문( ; 으로 끝나지 않는다)

funcA()//호출될 때 실행, 자동실행이 아님
{//절차실행으로 실행(Top-Down으로 실행된다는 뜻)
	printf("funcA() start.\n");
	printf("funcA() end.\n");
}

int main()  //자동으로 실행하는 진입점 함수
{
	printf("main() start. \n");
	funcA(); //함수호출
	printf("main() end. \n");

	return 0;
}

