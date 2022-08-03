//struct2.c
#include <stdio.h>
#include <string.h>

void funcA(struct EMPLOYEE *emps);
struct EMPLOYEE funcB();

typedef struct EMPLOYEE {
	char name[20];  //���(Member)
	int salary;
	float height;
	char comAddr[100];
} EMP;

int main()
{
	struct EMPLOYEE emps = { "ȫ�浿", 3500000, 175, "����� ������ 100" }, my;

	funcA(&emps); //���������� ���ǵ������Ƿ� ���ı��� �˷��� �ʿ�� ����. struct EMPLOYEE emps�� �ƴϴ�.
	printf("main(): %s, %d, %.2f, %s \n", emps.name, emps.salary, emps.height, emps.comAddr);


	my = funcB();

	printf("my: %s, %d, %.2f, %s \n", my.name, my.salary, my.height, my.comAddr);




	return 0;
}

void funcA(struct EMPLOYEE *emps) //����ü������ ����
{
	printf("funcA() : %s, %d, %.2f, %s \n", emps->name, emps->salary, emps->height, emps->comAddr);

	emps->salary += 200000;
}

struct EMPLOYEE funcB()
{
	struct EMPLOYEE tmp;
	
	tmp.salary = 4500000;
	strcpy(tmp.name, "���޷�");
	//tmp.name = '���޷�';
	tmp.height = 163;
	strcpy(tmp.comAddr, "�λ�� �ؿ�뱸 200");
	//tmp.comAddr = "�λ�� �ؿ�뱸 200";

	//printf("funcB() : %s, %d, %.2f, %s \n", tmp.name, tmp.salary, tmp.height, tmp.comAddr);
	
	return tmp;
}
