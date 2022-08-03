//sturct3.c
#include <stdio.h>
#include <string.h>
#define EMP_SZ 30

//����ü(struct): ������ �ִ� �����͵��� �ϳ��� �ڷ������� �����
// ����ϰ� �Ѵ�, �� �ϳ��� ����� ���� �ڷ����̴�.
// �� ��, �����͵��� �ڷ����� ��� �ڷ����� �͵� �ȴ�.

typedef struct EMPLOYEE {
						char name[20];  //���(Member)
						int salary;
						float height;
						char comAddr[100];
} EMP;
struct EMPLOYEE emps[EMP_SZ]; //����ü �迭, ����ü�� �⺻������ ���� ����=> []�� �ϳ��ۿ� �����Ƿ�
int Cn = 0; //������ ���׸�Ʈ�� �⺻���� 0���� �����Ѵ�



int main()
{
	int choice, stop = 1;
	while (stop)
	{
		printf("\n1. ������� �Է� \n");
		printf("2. ������� ��� \n");
		printf("3. ������� �˻� \n");
		printf("4. ���α׷� ���� \n");
		printf("Select ? (1~4) ");
		scanf("%d%*c", &choice);

		switch (choice)
		{
		case 1: emp_input();
			break;
		case 2: emp_output();
			break;
		case 3: emp_find();
			break;
		case 4: emp_save();
			break;
		case 5: stop = 0;
			break; 
		}
	}
	printf("End \n");

	

	return 0;
	

}  //main() end

emp_input()
{
	int i;
	for (i = Cn; i < EMP_SZ; i++)
	{
		printf("���� ? (�Է�����: end) ");
		gets(emps[i].name); //emps[i].name = i���� name���� �ּҰ�
		if (strcmp(emps[i].name, "end") == 0)
			break;
		printf("���� ? ");
		scanf("%d", &emps[i].salary);
		printf("Ű(����) ? ");
		scanf("%f%*c", &emps[i].height); // scanf�� �պκ��� �������� ���ĸ� ����� �Ѵ�.
		printf("ȸ���ּ� ? ");
		gets(emps[i].comAddr);
	}

	Cn = i;
	//printf("%d \n", salary); ���⼭�� salary�� ����, ����� ������ �����ؾ� ��.
}

emp_output()
{
	int i, sum = 0;
	
	printf("\n");
	for (i = 0; i < Cn; i++)
	{
		printf("%s, %d, %.2f, %s \n",
			emps[i].name, emps[i].salary, emps[i].height, emps[i].comAddr); // .(����): ����ü ��� ������
		sum += emps[i].salary;
	}

		printf("===================\n");
		printf("�������: %.2f \n", (float)sum / Cn);
		printf("===================\n");
}

emp_find()
{
	char s_name[20];
	int i, found;
	while (1)
	{
		printf("�˻��� ���� ? (�˻�����: end) ");
		gets(s_name);
		if (strcmp(s_name, "end") == 0)
			break;

		found = 1;
		for (i = 0; i < Cn; i++)
		{
			if (strcmp(emps[i].name, s_name) == 0)
			{
				printf("%s, %d, %.2f, %s \n",
					emps[i].name, emps[i].salary, emps[i].height, emps[i].comAddr);
				found = 0;
				//break; �������� ����ؼ� Ż��x
			}
		}
		if (found)
			printf("%s, not found \n", s_name);
	}//while(1) end
}

emp_save()
{
	FILE* fp; //����������
	fp = fopen("strct3.dat", "wb");
	if (fp == NULL)
	{
		printf("emp_save() Error \n");
		exit(1);
	}

	//2.save
	fwrite(&Cn, sizeof(Cn), 1, fp);
	fwrite(emps, sizeof(struct EMPLOYEE), Cn, fp);
	


	//3,��Ʈ�� �ݱ�
	fclose(fp);

	printf("struct43.dat ����. \n");
}

emp_load()
{
	FILE *fp;

	//1.��Ʈ������
	fp = fopen("struc3.dat", "rb");
	if (fp == NULL)
	{
		printf("emp_load() open Error \n");
		return ;
	}

	//2.load
	fread(&Cn, sizeof(Cn), 1, fp);
	fread(emps, sizeof(struct EMPLOYEE), Cn, fp);



	//3,��Ʈ�� �ݱ�
	fclose(fp);

	printf("struct43.dat �ε�. \n");

}