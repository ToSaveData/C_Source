#include <stdio.h>
void func_1(void);
void func_2(void);
void func_3(void);

int main(void)
{
	
	//func_1();
	//func_2();
	func_3();

	return 0 ;

}

void func_1(void)
{
    int first, second;
	
	printf("두 수를 입력하세요 ? ");
	scanf("%d%d", &first, &second); //데이터를 구분할 때는 공백, 엔터, 탭으로 구분가능

	printf("first : %d, second : %d \n", first, second);
}

void func_2(void)
{
     int first, second;
	 char op = 0;
	 
	 printf("전화번호를 입력하세요 ? ");	//3429-5114
	 //scanf("%d%c%d", &first, &op, &second);   
	 scanf("%d%*c%d", &first, &second);    //*c: 문자 하나를 버리라는 이야기임

	 printf("first : %d, second : %d \n", first, second);
	 printf("op: %d, %c \n", op, op);  
}

void func_3(void)
{
     int first, second;
	 
	 printf("5자리이상 숫자를 입력하세요 ? "); //12345678
	 scanf("%3d%d", &first, &second); //first에 들어가지않은 숫자는 다 second에 들어감
	 
	 printf("first : %d, second : %d \n", first, second);
}
