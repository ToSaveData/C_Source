#include <stdio.h>  //����°� ���õ� �Լ� ������ ����

//�Լ��� ����
//# : ��ó����( ; ���� ������ �ʴ´�)

funcA()//ȣ��� �� ����, �ڵ������� �ƴ�
{//������������ ����(Top-Down���� ����ȴٴ� ��)
	printf("funcA() start.\n");
	printf("funcA() end.\n");
}

int main()  //�ڵ����� �����ϴ� ������ �Լ�
{
	printf("main() start. \n");
	funcA(); //�Լ�ȣ��
	printf("main() end. \n");

	return 0;
}

