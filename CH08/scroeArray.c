//scoreArray.c
#include <stdio.h>

int main()
{
	int score[5][7] = 
	{
		{77, 87, 90, 95}, 
		{67, 55, 40, 35}, 
		{97, 87, 95, 95}, 
		{60, 77, 90, 80}, 
		{33, 25, 50, 45}
	};
	int i, j;
	char stdNames[5][20] = { "ȫ�浿", "������","�̸���", "�����", "���޷�" };

	
	//����, ��� ���ϴ� �ݺ��� �߰�
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		
		score[i][4] += score[i][j];
		score[i][5] = score[i][4] / 4;

		printf("\n");
	}

	int rank;
	//����
	for (i = 0; i < 5; i++)
	{
		rank = 1; // score[i][6] = 1; => rank �ʿ� ����
		for (j = 0; j < 5; j++)
			if (score[i][5] < score[j][5])
				rank++;

		score[i][6] = rank;
		printf("\n");
	}

	heading();
	for (i = 0; i < 5; i++)
	{
		printf("%3s, ", stdNames[i]);
		for (j = 0; j < 7; j++)
			printf("%3d, ", score[i][j]);
		printf("\n");
	}

	return 0;
}

heading()
{
	printf("=========================================\n");
	printf("����   ���� ���� ���� ���� ���� ��� ����\n");
	printf("=========================================\n");
}