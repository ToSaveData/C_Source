//getchar1.c
#include <stdio.h>

int main() {

	char c1, c2;

	printf("input c1 ? ");
	c1 = getchar(); //�Էµ� �� �̿ܿ��� enter���� �ϳ��� ���ڷ� ��޵Ǳ� ������ 
	                //��Ȳ�� ���󼭴� ���� �ʿ䰡 ����
	printf("c1: %c\n", c1);

	getchar(); //enter���� ������
	//while(getchar() != '\n');  //�Է¹��ۿ� ������ ��� ���� ������

	printf("input c2 ? ");
	c2 = getchar();
	printf("c2: %c\n", c2);

	return 0;
}