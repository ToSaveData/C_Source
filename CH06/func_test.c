//func_test.c
#include <stdio.h>
#include <math.h>


//�Լ� : � ���� ó���ϴ� ������ �ڵ���� ����
//�Լ� ��� ��� : 1. �Լ� ���� 2. �Լ� ȣ�� 3. �Լ� ����(�ɼ�)

void funcA(); //3. �Լ� �����
//�Լ� ������ �����Ϸ����� �Լ��� ����(����)�� �˸���.
//�̸� �����ϸ� �����Ϸ��� ��� ���ڸ� int�� �����Ѵ�.(C++������ �ʼ�������)
void funcB(int salary);
int funcD();
//float funcE(int salTot, float rate); //���� �� �ϸ� float�� int�� ������
//main �Լ� ���� �ö󰣴ٸ� ������ ������ �� �ִ�.(�����Ϸ��� ���� �ν��ϱ� ����)
//������ ���Լ����� �ٸ� ���Լ��� ȣ���� �� �ֱ� ������, ������ �ϴ� ���� ����.

float funcE(int salTot, float rate)
{
	//printf("funcE() %d, %f \n", salTot, rate);
	//printf("funcE(): ���� : %f \n", salTot*rate);
	return salTot * rate;
}

int main()
{
	int salary = 3500000; //��������: �ڽ��� ����� �Լ������� ���
	int sudang;
	float tax;

	printf("main() start. \n");
	funcA(); // 2. �Լ� ȣ���(���μ�)
	
	funcB(salary); //���μ�: ���Լ��� ������ ���Լ��� ����(�� 30������ ����)
	
	sudang = funcD();
	printf("main() ����: %d \n", sudang);
	
	tax = funcE(salary+sudang, 0.03);
	printf("�Ǽ��ɾ� : %f \n", (salary+sudang)-tax);

	

	printf("10�� ������: %lf \n", sqrt(10.0));
	
	printf("main() end. \n");

	return 0;
}




//1. �Լ� ���Ǻ�(��� + �ٵ�)
void funcA() //�Լ� ���
{		//�Լ� �ٵ�
	printf("funcA() start. \n");
	return;
	printf("funcA() end. \n");
	
}

//���μ��� ���μ��� ������ �ڷ����� ���ƾ� �Ѵ�. ���� �̸����� ������ ���μ��� ���μ��� �ٸ� �����̴�.
void funcB(int salary) //���μ�: ���Լ��� �ִ� ���μ��� �޴� ��
{
	printf("funcB() salary: %d \n", salary);
	
}

int funcD() // ��� �Լ��� ����Ʈ ���� int�̴�.
{
	int over_time = 15;

	//printf("funcD() ���� : %d \n", over_time * 37000);
	return over_time * 37000;
}