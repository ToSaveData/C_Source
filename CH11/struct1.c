//struct1.c
#include <stdio.h>

//����ü(struct): ������ �ִ� �����͵��� �ϳ��� �ڷ������� �����
// ����ϰ� �Ѵ�, �� �ϳ��� ����� ���� �ڷ����̴�.
// �� ��, �����͵��� �ڷ����� ��� �ڷ����� �͵� �ȴ�.

int main()
{
	typedef struct EMPLOYEE {
		char name[20];  //���(Member)
		int salary;
		float height;
		char comAddr[100];
	} EMP;

	//�ڷ���        ����ü����
	struct EMPLOYEE emps = { "ȫ�浿", 3500000, 175, "����� ������ 100" };
	//emps: ������� ����(������), �迭�� �ƴ� => emps������ �ּҸ� �ҷ��� �� ����
	struct EMPLOYEE *ptr; //����ü������ ����

	EMP tmp;
	
	printf("%d, %d \n", sizeof(emps), sizeof(struct EMPLOYEE));
	printf("emps: %p, %p \n", &emps, emps.name);


	//printf("%d \n", salary); ���⼭�� salary�� ����, ����� ������ �����ؾ� ��.
	
	printf("%s, %d, %.2f, %s \n", emps.name, emps.salary, emps.height, emps.comAddr); 
	// .(����): ����ü ��� ������
	
	tmp = emps;
	//����ü�� �迭�� �ƴϱ� ������, �״�� ���簡 �����ϴ�
	printf("%s, %d, %.2f, %s \n\n", tmp.name, tmp.salary, tmp.height, tmp.comAddr);

	printf("ptr sizeof: %d \n", sizeof(ptr));

	ptr = &emps;
	printf("%s, %d, %.2f, %s \n", ptr->name, ptr->salary,
								  (*ptr).height, (*ptr).comAddr); // ->: ����ü������ ������

	return 0;
}