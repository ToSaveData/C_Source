//sturct3.c
#include <stdio.h>
#include <string.h>
#define EMP_SZ 30

//구조체(struct): 관련이 있는 데이터들을 하나의 자료형으로 만들어
// 사용하게 한다, 즉 하나의 사용자 정의 자료형이다.
// 이 때, 데이터들의 자료형은 어떠한 자료형이 와도 된다.

typedef struct EMPLOYEE {
						char name[20];  //멤버(Member)
						int salary;
						float height;
						char comAddr[100];
} EMP;
struct EMPLOYEE emps[EMP_SZ]; //구조체 배열, 구조체는 기본적으로 열로 구분=> []가 하나밖에 없으므로
int Cn = 0; //데이터 세그먼트는 기본값을 0으로 보장한다



int main()
{
	int choice, stop = 1;
	while (stop)
	{
		printf("\n1. 사원정보 입력 \n");
		printf("2. 사원정보 출력 \n");
		printf("3. 사원정보 검색 \n");
		printf("4. 프로그램 종료 \n");
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
		printf("성명 ? (입력종료: end) ");
		gets(emps[i].name); //emps[i].name = i열의 name행의 주소값
		if (strcmp(emps[i].name, "end") == 0)
			break;
		printf("월급 ? ");
		scanf("%d", &emps[i].salary);
		printf("키(신장) ? ");
		scanf("%f%*c", &emps[i].height); // scanf의 앞부분은 데이터의 형식만 적어야 한다.
		printf("회사주소 ? ");
		gets(emps[i].comAddr);
	}

	Cn = i;
	//printf("%d \n", salary); 여기서의 salary는 변수, 멤버와 변수를 구분해야 함.
}

emp_output()
{
	int i, sum = 0;
	
	printf("\n");
	for (i = 0; i < Cn; i++)
	{
		printf("%s, %d, %.2f, %s \n",
			emps[i].name, emps[i].salary, emps[i].height, emps[i].comAddr); // .(온점): 구조체 멤버 연산자
		sum += emps[i].salary;
	}

		printf("===================\n");
		printf("월급평균: %.2f \n", (float)sum / Cn);
		printf("===================\n");
}

emp_find()
{
	char s_name[20];
	int i, found;
	while (1)
	{
		printf("검색할 성명 ? (검색종료: end) ");
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
				//break; 동명이인 대비해서 탈출x
			}
		}
		if (found)
			printf("%s, not found \n", s_name);
	}//while(1) end
}

emp_save()
{
	FILE* fp; //파일포인터
	fp = fopen("strct3.dat", "wb");
	if (fp == NULL)
	{
		printf("emp_save() Error \n");
		exit(1);
	}

	//2.save
	fwrite(&Cn, sizeof(Cn), 1, fp);
	fwrite(emps, sizeof(struct EMPLOYEE), Cn, fp);
	


	//3,스트림 닫기
	fclose(fp);

	printf("struct43.dat 저장. \n");
}

emp_load()
{
	FILE *fp;

	//1.스트림연결
	fp = fopen("struc3.dat", "rb");
	if (fp == NULL)
	{
		printf("emp_load() open Error \n");
		return ;
	}

	//2.load
	fread(&Cn, sizeof(Cn), 1, fp);
	fread(emps, sizeof(struct EMPLOYEE), Cn, fp);



	//3,스트림 닫기
	fclose(fp);

	printf("struct43.dat 로드. \n");

}