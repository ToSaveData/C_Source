//operator3.c
#include <stdio.h>

int main()
{
	int x;

	printf("���� ? (0:��,1:��) \n");
	scanf("%d", &x);

	printf("%s \n", x==0 ? "����" : x==1 ? "����" : "�Է¿���!!");
	//0�̿��� ��� ��(1�� �ƴϴ���) ������ ���� => �Է¿���

	int n1 = 100, n2 = 200;
	int sum = 0;
	sum += n1; //�Ϲ������� sum = sum + n1;
	sum += n2; //+=�� ���մ��Կ����ڶ�� ��. �� ������.
	printf("sum : %d \n", sum);

	return 0;
}