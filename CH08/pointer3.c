//pointer3.c
#include <stdio.h>

int main()
{
	//포인터변수: 변수의 시작 주소 이거나 또는 1차원 배열의 시작주소를 저장하는 포인터
	int num[5] = { 100,200,300,400,500 };
	int i, *ptr;

	ptr = num;

	for (i = 0; i < 5; i++)
		printf("%p: %d, %d, %d, %d \n",
			&num[i], num[i], *(ptr+i), *(num+i), ptr[i]); //[]는 컴파일 과정에서 *( + )로 바뀐다
	printf("\n");

	char msg[20] = "Hello World.";
	char *p2;

	p2 = msg;
	printf("%c, %c, %c, %c \n", msg[0], *msg, *(msg + 1), *p2); //데이터라서 값을 출력하는 %c로 받음
	printf("%p, %s, %s \n", msg, msg, p2);
	
	//p2를 사용하여 H e l l o W o r l d . 를 출력하시오.

	for (i = 0; i < 20; i++)
	{
		if (*(p2 + i) == NULL)
			break;
		printf("%c ", *(p2 + i));
	}
	//while에서 0이 아니면 모두 참이다. 아래 모범답안. msg(첨자가 없는 배열변수)는 포인터상수이다.
//*p2를 msg로 변경시 오류가 난다.(상수의 주소를 바꿀 수 없다)

/*while (*p2)
{
	printf("%c ", *p2);
	p2++;
}
printf("\n");
*/

	printf("\n\n");

	char *p3 = "multi cmapus !!!";
	//p3 = "multi cmapus !!!"; //문자열 상수는 자동으로 주소(변할 수 없음)를 갖는다.
	printf("p3: %p, %s \n", p3, p3);

	
	return 0;
}