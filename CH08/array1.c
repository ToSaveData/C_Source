//array1.c
#include <stdio.h>



//배열(array) : 하나의 이름으로 참조되는 같은 자료형을 갖는 코드들의 집합
// 즉 연속적인 메모리 공간
// int num[5]; => 배열변수, 4바이트 5개를 달라는 의미, 모여있음
int main()
{
	int num[5] = { 300,20,75,-40,730 };
	int i, sum = 0, max, min;
	float avg;


	printf("%d, %d \n", sizeof(num), sizeof(num[0])); //배열은 0번부터 시작, ++식, 각 열(세로수준)이 집합
// []: 첨자(subscript)

	printf("%d, %p, %p \n\n", num[0] & num[0], num);
	//첨자가 없는 배열변수는 그 배열이 할당된 메모리의 시작주소를 갖는 포인터 상수이다.
	

	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d, input ?", i+1);
	//	scanf("%d", &num[i]);
	//}
	
	for (i = 0; i < 5; i++)
		sum += num[i];
	avg = (float)sum / 5;

	max = min = num[0];
	for (i = 1; i < 5; i++)
	{
		if (max < num[i]) //최대값
			max = num[i];
		
		if (min > num[i])//최소값
			min = num[i];
	}


	for (i = 0; i < 5; i++)
		printf("%d, ", num[i]);
	printf("\n");
	printf("합: %d, 평균: %.2f, 최대값: %d, 최소값: %d", sum, avg, max, min);

	return 0;
}