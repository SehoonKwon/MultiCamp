//#pragma warning(disable: 4996)
//
///***********************************************************/
//// [1-1] �迭 ��� ���� ����Ʈ
///***********************************************************/
//
//#if 0
//
///***********************************************************/
//// [1-1.1] ������ �𵨸�
///***********************************************************/
//
//#if 01
//
//#include <stdio.h>
//#include <string.h>
//#include <conio.h>
//#include <stdlib.h>
//
//typedef struct _score
//{
//	int id;
//	int jumsu;
//	char name[10];
//}SCORE;
//
//#define MAX_ST		20
//
//SCORE exam[MAX_ST];
//
//// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�
//
//
//int Print_All_Data(void);
//int Print_Data(int no);
//int Count_Data(void);
//int Create_Data(SCORE* p);
//int Insert_Data(SCORE* p);
//int Delete_Data(int id);
//int Search_Complete_Data(SCORE* p);
//int Search_Data(int n, SCORE* p, int (*comp)(SCORE* x, SCORE* y));
//int Compare_Id(SCORE* x, SCORE* y);
//int Compare_Name(SCORE* x, SCORE* y);
//int Compare_Jumsu(SCORE* x, SCORE* y);
//int Sort_Bubble(SCORE* d, int order, int (*comp)(SCORE* x, SCORE* y));
//int Sort_Select(SCORE* d, int order, int (*comp)(SCORE* x, SCORE* y));
//int Sort_Insertion(SCORE* d, int order, int (*comp)(SCORE* x, SCORE* y));
//int Insert_and_Sort_Data(SCORE* p);
//int Copy_Data(int n, SCORE* p);
//int Copy_All_Data(SCORE* p, int max);
//int Print_All_Buffer(SCORE* d, int max);
//int Sort_Quick(SCORE* d, int order, int m, int n, int (*comp)(SCORE* x, SCORE* y));
//
//SCORE test[10] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
//							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"} };
//
//void Make_Test_Data(int n)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//	{
//		exam[i] = test[i];
//	}
//}
//
//#endif
//
///***********************************************************/
//// [1-1.2] �迭�� ��� �ڷ� �μ�
///***********************************************************/
//
//#if 01
//
//int Print_All_Data(void)
//{
//
//	int i, cnt = 0;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0) continue;
//
//		printf("[%d] ID = %d,  Name = %s,  Score = %d\n", i, exam[i].id, exam[i].name, exam[i].jumsu);
//		cnt++;
//	}
//
//	return cnt;
//}
//
//#endif
//
///***********************************************************/
//// [1-1.3] Ư�� ��ҹ�ȣ�� �����͸� �μ�
///***********************************************************/
//
//#if 01
//
//int Print_Data(int no)
//{
//	if (exam[no].id == 0 || no < 0 || no >= MAX_ST) return -1;
//
//	else
//		printf("[%d] ID = %d,  Name = %s,  Score = %d\n", no, exam[no].id, exam[no].name, exam[no].jumsu);
//
//	return 1;
//}
//
//#endif
//
///***********************************************************/
//// [1-1.4] �迭�� �ִ� ��� �ڷ��� ���� ���
///***********************************************************/
//
//#if 01
//
//int Count_Data(void)
//{
//	int i, cnt = 0;
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0) continue;
//
//		cnt++;
//	}
//
//	return cnt;
//}
//
//#endif
//
///***********************************************************/
//// [1-1.5] �迭�� ������ �ϳ��� ����
///***********************************************************/
//
//#if 01
//
//int Create_Data(SCORE* p)
//{
//	printf("����� �Է��Ͻÿ� => ");
//	scanf("%d", &p->id);
//	printf("%�̸��� �Է��Ͻÿ� => ");
//	scanf("%s", p->name);
//	printf("������ �Է��Ͻÿ� => ");
//	scanf("%d", &p->jumsu);
//
//	return 1;
//}
//
//#endif
//
//#if 0
//
//int main(void)
//{
//	int i;
//
//	for (i = 0; i < 3; i++)
//	{
//		Create_Data(&exam[i]);
//		printf("\nCount = %d\n", Count_Data());
//		printf("Print Result = %d\n", Print_Data(i));
//		printf("Printed Data Count = %d\n\n", Print_All_Data());
//	}
//
//	return 0;
//}
//
//#endif
//
///***********************************************************/
//// [1-1.6] ������ �ϳ��� �����Ͽ� �迭�� �߰��� �����ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Insert_Data(SCORE* p)
//{
//	int i;
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0)
//		{
//			exam[i] = (*p);
//			return i;
//		}
//
//		if (exam[i].id == p->id)
//		{
//			return -2;
//		}
//	}
//
//	return -1;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	SCORE tmp;
//
//	do
//	{
//		Create_Data(&tmp);
//		printf("\n\nInsert Result = %d\n", Insert_Data(&tmp));
//		printf("Printed Data Count = %d\n", Print_All_Data());
//		printf("\n���(�ƹ�Ű), �׸�(x Ű)\n");
//	} while (getch() != 'x');
//}
//
//#endif
//
///***********************************************************/
//// [1-1.7] ������ ����� ������ ���� ����� �����ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Delete_Data(int id)
//{
//	int i;
//
//	if (exam[0].id == 0) return -2;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (exam[i].id == id)
//		{
//			if (exam[i].id == 0) break;
//
//			int j;
//			for (j = i; j < MAX_ST - 1; j++)
//			{
//				if (exam[j + 1].id == 0) break;
//				exam[j] = exam[j + 1];
//			}
//
//			exam[j].id = 0;
//
//			return id;
//		}
//	}
//
//	if (i == MAX_ST) return -1;
//
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//
//	Make_Test_Data(5);
//	printf("Printed Data Count = %d\n", Print_All_Data());
//
//	do
//	{
//		printf("\n������ �ڷ��� ����� �Է��Ͻÿ� => ");
//		scanf("%d", &i);
//		fflush(stdin);
//		printf("\n\nDelete Element = %d\n", Delete_Data(i));
//		printf("Printed Data Count = %d\n", Print_All_Data());
//		printf("\n���(�ƹ�Ű), �׸�(x Ű)\n");
//	} while (getch() != 'x');
//}
//
//#endif
//
///***********************************************************/
//// [1-1.8] ��� ����� ��ġ�ϴ� �����͸� Ž���ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Search_Complete_Data(SCORE* p)
//{
//	int i;
//
//	if (exam[0].id == 0) return -2;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (exam[i].id == p->id && exam[i].jumsu == p->jumsu && strcmp(exam[i].name, p->name) == 0) return i;
//
//		if (exam[i].id == 0) break;
//	}
//	return -1;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	SCORE tmp;
//
//	Make_Test_Data(8);
//	printf("Printed Data Count = %d\n", Print_All_Data());
//
//	do
//	{
//		printf("\nŽ���� �ڷḦ �Է��Ͻÿ�\n");
//		Create_Data(&tmp);
//		printf("\n\nSearched Element = %d\n", Search_Complete_Data(&tmp));
//		printf("Printed Data Count = %d\n", Print_All_Data());
//		printf("\n���(�ƹ�Ű), �׸�(x Ű)\n");
//	} while (getch() != 'x');
//}
//
//#endif
//
///***********************************************************/
//// [1-1.9] ���ϴ� ����� ���� �����͸� Ž���ϴ� �Լ�, �񱳸� ���� call back �Լ��� ����
///***********************************************************/
//
//#if 01
//
//int Search_Data(int n, SCORE* p, int (*comp)(SCORE* x, SCORE* y))
//{
//	if (exam[0].id == 0) return -2;
//
//	int i = 0;
//	for (i = n; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0) break;
//		if (comp(&exam[i], p) == 0) return i;
//	}
//
//	return -1;
//}
//
//int Compare_Id(SCORE* x, SCORE* y)
//{
//	if (x->id > y->id) return 1;
//	else if (x->id < y->id) return -1;
//	else return 0;
//}
//
//int Compare_Name(SCORE* x, SCORE* y)
//{
//	return strcmp(x->name, y->name);
//}
//
//int Compare_Jumsu(SCORE* x, SCORE* y)
//{
//	if (x->jumsu > y->jumsu) return 1;
//	else if (x->jumsu < y->jumsu) return -1;
//	else return 0;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int n;
//	SCORE tmp;
//
//	Make_Test_Data(8);
//	printf("Printed Data Count = %d\n", Print_All_Data());
//
//	do
//	{
//		printf("\nŽ���� �ڷḦ �Է��Ͻÿ�\n");
//		Create_Data(&tmp);
//
//		printf("\nSearched Element (ID) = %d\n", n = Search_Data(0, &tmp, Compare_Id));
//		Print_Data(n);
//
//		n = 0;
//		printf("Printed Data Count = %d\n", Print_All_Data());
//
//		do
//		{
//			printf("\nSearched Element (Name) = %d\n", n = Search_Data(n, &tmp, Compare_Name));
//			Print_Data(n);
//			n++;
//		} while (n > 0);
//
//		n = 0;
//		printf("Printed Data Count = %d\n", Print_All_Data());
//
//		do
//		{
//			printf("\nSearched Element (Jumsu) = %d\n", n = Search_Data(n, &tmp, Compare_Jumsu));
//			Print_Data(n);
//			n++;
//		} while (n > 0);
//
//		printf("\n���(�ƹ�Ű), �׸�(x Ű)\n");
//	} while (getch() != 'x');
//}
//
//#endif
//
///***********************************************************/
//// [1-1.10] �ڷḦ ������Ʈ�� �����ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Sort_Bubble(SCORE* d, int order, int (*comp)(SCORE* x, SCORE* y))
//{
//	int i, j, n = Count_Data();
//
//	if (n == 0) return 0;
//
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (comp(&d[j], &d[j + 1]) * order > 0)
//			{
//				SCORE temp;
//				temp = d[j];
//				d[j] = d[j + 1];
//				d[j + 1] = temp;
//			}
//		}
//	}
//
//
//	return n;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	Make_Test_Data(8);
//	printf("Printed Data Count = %d\n", Print_All_Data());
//
//	printf("===================================================\n");
//	printf("Sorted Data Count = %d\n", Sort_Bubble(exam, 1, Compare_Id));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("Sorted Data Count = %d\n", Sort_Bubble(exam, -1, Compare_Id));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("===================================================\n");
//	printf("Sorted Data Count = %d\n", Sort_Bubble(exam, 1, Compare_Name));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("Sorted Data Count = %d\n", Sort_Bubble(exam, -1, Compare_Name));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("===================================================\n");
//	printf("Sorted Data Count = %d\n", Sort_Bubble(exam, 1, Compare_Jumsu));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("Sorted Data Count = %d\n", Sort_Bubble(exam, -1, Compare_Jumsu));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("===================================================\n");
//}
//
//#endif
//
///***********************************************************/
//// [1-1.11] �ڷḦ ���� ���ķ� �����ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Sort_Select(SCORE* d, int order, int (*comp)(SCORE* x, SCORE* y))
//{
//	int i, j, maxIdx = 0, n = Count_Data();
//
//	if (n == 0) return 0;
//
//	for (i = 0; i < n - 1; i++)
//	{
//		maxIdx = 0;
//		for (j = 0; j < n - i; j++)
//		{
//			if (comp(&d[j], &d[maxIdx]) * order > 0)
//				maxIdx = j;
//		}
//
//		SCORE temp;
//		temp = d[n - 1 - i];
//		d[n - 1 - i] = d[maxIdx];
//		d[maxIdx] = temp;
//	}
//
//	return n;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//#if 0
//
//	SCORE tmp;
//
//	do
//	{
//		Create_Data(&tmp);
//		printf("\n\nInsert Result = %d\n", Insert_Data(&tmp));
//		printf("Printed Data Count = %d\n", Print_All_Data());
//		printf("\n���(�ƹ�Ű), �׸�(x Ű)\n");
//	} while (getch() != 'x');
//
//#endif 
//
//#if 1
//
//	Make_Test_Data(8);
//	printf("Printed Data Count = %d\n", Print_All_Data());
//
//#endif 
//
//	printf("===================================================\n");
//	printf("Sorted Data Count = %d\n", Sort_Select(exam, 1, Compare_Id));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("Sorted Data Count = %d\n", Sort_Select(exam, -1, Compare_Id));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("===================================================\n");
//	printf("Sorted Data Count = %d\n", Sort_Select(exam, 1, Compare_Name));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("Sorted Data Count = %d\n", Sort_Select(exam, -1, Compare_Name));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("===================================================\n");
//	printf("Sorted Data Count = %d\n", Sort_Select(exam, 1, Compare_Jumsu));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("Sorted Data Count = %d\n", Sort_Select(exam, -1, Compare_Jumsu));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("===================================================\n");
//}
//
//#endif
//
///***********************************************************/
//// [1-1.12] �ڷḦ ���� ���ķ� �����ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Sort_Insertion(SCORE* d, int order, int (*comp)(SCORE* x, SCORE* y))
//{
//	int i, j, n = Count_Data();
//	SCORE temp;
//
//	if (n == 0) return 0;
//
//	for (i = 1; i < n; i++)
//	{
//		temp = d[i];
//
//		for (j = i - 1; j >= 0; j--)
//		{
//			if (comp(&d[j], &temp) * order > 0)
//			{
//				d[j + 1] = d[j];
//			}
//			else break;
//		}
//
//		d[j + 1] = temp;
//	}
//
//	return n;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//#if 0
//
//	SCORE tmp;
//
//	do
//	{
//		Create_Data(&tmp);
//		printf("\n\nInsert Result = %d\n", Insert_Data(&tmp));
//		printf("Printed Data Count = %d\n", Print_All_Data());
//		printf("\n���(�ƹ�Ű), �׸�(x Ű)\n");
//	} while (getch() != 'x');
//
//#endif 
//
//#if 01
//
//	Make_Test_Data(8);
//	printf("Printed Data Count = %d\n", Print_All_Data());
//
//#endif 
//
//	printf("===================================================\n");
//	printf("Sorted Data Count = %d\n", Sort_Insertion(exam, 1, Compare_Id));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("Sorted Data Count = %d\n", Sort_Insertion(exam, -1, Compare_Id));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("===================================================\n");
//	printf("Sorted Data Count = %d\n", Sort_Insertion(exam, 1, Compare_Name));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("Sorted Data Count = %d\n", Sort_Insertion(exam, -1, Compare_Name));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("===================================================\n");
//	printf("Sorted Data Count = %d\n", Sort_Insertion(exam, 1, Compare_Jumsu));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("Sorted Data Count = %d\n", Sort_Insertion(exam, -1, Compare_Jumsu));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("===================================================\n");
//}
//
//#endif
//
///***********************************************************/
//// [1-1.13] ����� ������ �����ϸ鼭 �����͸� �迭�� �߰��ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Insert_and_Sort_Data(SCORE* p)
//{
//	int i, n = Count_Data();
//
//	if (n == MAX_ST) return -1;
//
//	//���� ���� ����� �ִ��� Ȯ��
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (exam[i].id == p->id)
//			return -2;
//		else if (exam[i].id < p->id) break; //���� ����̹Ƿ� �� �̻� �� ���ʿ�
//	}
//
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (exam[i].id > p->id)
//			exam[i + 1] = exam[i];
//		else break;
//	}
//
//	exam[i + 1] = *p;
//
//	return i + 1;
//}
//
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	SCORE tmp;
//
//	for (i = 0; i < sizeof(test) / sizeof(test[0]); i++)
//	{
//		printf("\n\nInsert Result = %d\n", Insert_and_Sort_Data(&test[i]));
//		printf("Printed Data Count = %d\n", Print_All_Data());
//	}
//
//	tmp.id = 4;
//	printf("\n\nInsert Result = %d\n", Insert_and_Sort_Data(&tmp));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//}
//
//#endif
//
///***********************************************************/
//// [1-1.14] ������ �����͸� ����ü�� �����Ͽ� �ִ� �Լ��� 
///***********************************************************/
//
//#if 01
//
//int Copy_Data(int n, SCORE* p)
//{
//	if (((unsigned int)n >= MAX_ST) || (exam[n].id == 0)) return -1;
//
//	*p = exam[n];
//	return 0;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	SCORE tmp;
//
//	Make_Test_Data(8);
//	printf("Printed Data Count = %d\n", Print_All_Data());
//
//	printf("Data Copy Result = %d\n", Copy_Data(3, &tmp));
//	printf("ID: %d, Name: %s, Score: %d\n", tmp.id, tmp.name, tmp.jumsu);
//	printf("Data Copy Result = %d\n", Copy_Data(9, &tmp));
//}
//
//#endif
//
///***********************************************************/
//// [1-1.15] ������ �� ��ŭ �ڷḦ �־��� buffer���� ������ �μ��ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Print_All_Buffer(SCORE* d, int max)
//{
//	int i;
//
//	for (i = 0; i < max; i++)
//	{
//		if (d[i].id == 0) break;
//		printf("[%d] ID = %d,  Name = %s,  Score = %d\n", i, d[i].id, d[i].name, d[i].jumsu);
//	}
//
//	return i;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	Make_Test_Data(10);
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("All Buffer Print = %d\n", Print_All_Buffer(exam, 10));
//	printf("All Buffer Print = %d\n", Print_All_Buffer(exam, 4));
//}
//
//#endif
//
///***********************************************************/
//// [1-1.16] �־��� �� ��ŭ�� �ڷḦ ���޹��� buffer�� �����Ͽ� �ִ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Copy_All_Data(SCORE* p, int max)
//{
//	int i;
//	for (i = 0; i < max; i++)
//	{
//		if (exam[i].id == 0) break;
//		p[i] = exam[i];
//	}
//
//	return i;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	SCORE tmp[MAX_ST];
//
//	Make_Test_Data(10);
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("All Data Copy Result = %d\n", Copy_All_Data(tmp, 10));
//	printf("All Buffer Print = %d\n", Print_All_Buffer(tmp, 10));
//	printf("Sorted Data Count = %d\n", Sort_Bubble(tmp, 1, Compare_Name));
//	printf("All Buffer Print = %d\n", Print_All_Buffer(tmp, 10));
//}
//
//#endif
//
///***********************************************************/
//// [1-1.17] ������ �Լ����� �̿��� ����ó�� ���α׷�
///***********************************************************/
//
//#if 0
//
///* ���� �������� #if 0�� ����� ��� main �Լ��� #if 0�� ������ ���⿡ main �Լ� ���� */
//void DataAdd(void) {//�ڷ��߰�
//	int r;
//	SCORE tmp;
//	Create_Data(&tmp);
//	r = Insert_and_Sort_Data(&tmp);
//	if (r == -1) {
//		printf("���� ���� ����\n");
//	}
//	else if (r == -2) {
//		printf("���� ��� ����\n");
//	}
//	else {
//		printf("���� ����!\n");
//	}
//}
//void DataDel(void) {//�ڷ����
//	int cmd, id, n, r;
//	SCORE tmp;
//	printf("[1] ���(ID)���� ���� / [2] �̸����� ���� : ");
//	scanf("%d", &cmd);
//	if (cmd == 1) {
//		printf("������ ��� �Է��Ͻÿ� : ");
//		scanf("%d", &id);
//		r = Delete_Data(id);
//		if (r < 0) {
//			printf("�ش� ��� ����. ���� ����\n");
//		}
//		else {
//			printf("���� ����!\n");
//		}
//	}
//	else if (cmd == 2) {
//		printf("������ �̸� �Է��Ͻÿ� : ");
//		scanf("%s", tmp.name);
//		n = 0;
//		for (;;) {
//			n = Search_Data(n, &tmp, Compare_Name);
//			if (n < 0) break;
//			Delete_Data(exam[n].id);
//			n++;
//		}
//		printf("���� ����!\n");
//	}
//	else {
//		printf("�� �� �Է�����\n");
//		return;
//	}
//}
//void DataModify(void) {
//	int n;
//	SCORE tmp;
//	printf("������ ��� �Է��Ͻÿ� : ");
//	scanf("%d", &tmp.id);
//	n = Search_Data(0, &tmp, Compare_Id);
//	if (n < 0) {
//		printf("���� ��� ��\n");
//		return;
//	}
//	printf("�̸� �Է��Ͻÿ� : ");
//	scanf("%s", exam[n].name);
//	printf("���� �Է��Ͻÿ� : ");
//	scanf("%d", &exam[n].jumsu);
//	printf("���� ����!\n");
//}
//void DataPrint(void) {
//	int cmd, n;
//	SCORE tmp;
//	printf("[1] ��� / [2] �̸� / [3] ����: ");
//	scanf("%d", &cmd);
//	if (cmd == 1) {
//		printf("����� �Է��Ͻÿ� : ");
//		scanf("%d", &tmp.id);
//		n = Search_Data(0, &tmp, Compare_Id);
//		if (n < 0) {
//			printf("���� ��� ��\n");
//		}
//		else {
//			Print_Data(n);
//		}
//	}
//	else if (cmd == 2) {
//		printf("�̸��� �Է��Ͻÿ� : ");
//		scanf("%s", tmp.name);
//		n = 0;
//		for (;;) {
//			n = Search_Data(n, &tmp, Compare_Name);
//			if (n < 0) {
//				break;
//			}
//			else {
//				Print_Data(n);
//			}
//			n++;
//		}
//	}
//	else if (cmd == 3) {
//		printf("������ �Է��Ͻÿ� : ");
//		scanf("%d", &tmp.jumsu);
//		n = 0;
//		for (;;) {
//			n = Search_Data(n, &tmp, Compare_Jumsu);
//			if (n < 0) {
//				break;
//			}
//			else {
//				Print_Data(n);
//			}
//			n++;
//		}
//	}
//	else {
//		printf("�� �� �Է�����\n");
//	}
//}
//void DataSortPrint(void) {
//	int cmd;
//	SCORE tmp[MAX_ST];
//	printf("[1] ���� �������� �μ�\n");
//	printf("[2] ���� �������� �μ�\n");
//	printf("[3] �̸� �������� �μ�\n");
//	printf("[4] �̸� �������� �μ�\n");
//	printf("���ϴ� ��ȣ�� �Է��Ͻÿ�(1~4) : ");
//	scanf("%d", &cmd);
//	Copy_All_Data(tmp, MAX_ST);
//	switch (cmd) {
//	case 1:
//		Sort_Bubble(tmp, 1, Compare_Jumsu);
//		Print_All_Buffer(tmp, MAX_ST);
//		break;
//	case 2:
//		Sort_Bubble(tmp, -1, Compare_Jumsu);
//		Print_All_Buffer(tmp, MAX_ST);
//		break;
//	case 3:
//		Sort_Bubble(tmp, 1, Compare_Name);
//		Print_All_Buffer(tmp, MAX_ST);
//		break;
//	case 4:
//		Sort_Bubble(tmp, -1, Compare_Name);
//		Print_All_Buffer(tmp, MAX_ST);
//		break;
//	default:
//		printf("�߸��Է��߽��ϴ�!\n");
//	}
//}
//void main(void) {
//	int cmd;
//	for (;;) {
//		printf("[1] �ڷ��߰�\n");
//		printf("[2] �ڷ����\n");
//		printf("[3] �ڷ����\n");
//		printf("[4] ��ü�μ�\n");
//		printf("[5] �ڷ��μ�\n");
//		printf("[6] ����(����, �̸���) �μ�\n");
//		printf("[7] ���α׷� ����\n");
//		printf("���ϴ� ��ȣ�� �Է��Ͻÿ�(1~7) : ");
//		scanf("%d", &cmd);
//		switch (cmd) {
//		case 1:
//			DataAdd();
//			break;
//		case 2:
//			DataDel();
//			break;
//		case 3:
//			DataModify();
//			break;
//		case 4:
//			Print_All_Data();
//			break;
//		case 5:
//			DataPrint();
//			break;
//		case 6:
//			DataSortPrint();
//			break;
//		case 7:
//			return;//���α׷� ����
//		default:
//			printf("�߸��Է��߽��ϴ�. �ٽ��Է��ϼ���\n");
//		}
//	}
//}
//
//#endif
//
//#endif 
//
///***********************************************************/
//// [1-2] Quick Sort �Լ� ����
///***********************************************************/
//
//#if 0
//
//void quicksort(SCORE* d, int order, int start, int end, int (*comp)(SCORE* x, SCORE* y))
//{
//	int i, mark, p = end;
//	if (start >= end) return;
//
//	SCORE temp;
//
//	for (i = start, mark = start; i < end; i++)
//	{
//		//���� ���� p��ġ�� �ִ� ���� ���Ͽ� ���� ���
//		if (comp(&d[i], &d[p]) * order < 0)
//		{
//			temp = d[i];
//			d[i] = d[mark];
//			d[mark] = temp;
//
//			mark++;
//		}
//	}
//
//	temp = d[mark];
//	d[mark] = d[p];
//	d[p] = temp;
//	
//	quicksort(d, order, start, mark - 1, comp);
//	quicksort(d, order, mark + 1, end, comp);
//}
//
//int Sort_Quick(SCORE* d, int order, int m, int n, int (*comp)(SCORE* x, SCORE* y))
//{
//	int end = 0;
//
//	//���� ��� �� �ľ�, ���۸� �����ϹǷ� ���� count�Լ� ��� ���� ����
//	for (end = m; end < n + 1; end++)
//		if (d[end].id == 0) break;
//
//	//���� �����ϴ� ����Ʈ ȣ��
//	quicksort(d, order, m, end - 1, comp);
//
//	return n - m + 1;
//}
//
//
//
//int Compid(const void* a, const void* b)
//{
//	//�������� -> a > b ���, a < b ����, a = b 0
//	//���������� �ݴ�
//	
//	return ((SCORE*)a)->id - ((SCORE*)b)->id;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	Make_Test_Data(8);
//	printf("Printed Data Count = %d\n", Print_All_Data());
//
//	printf("===================================================\n");
//	printf("Sorted Data Count = %d\n", Sort_Quick(exam, 1, 0, MAX_ST - 1, Compare_Id));	
//	//ǥ���Լ�(�ּ�, ����� ����, �� ����� ũ��, ���Լ�)
////	qsort(exam, Count_Data(), sizeof(exam[0]), Compid);
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("Sorted Data Count = %d\n", Sort_Quick(exam, -1, 0, MAX_ST - 1, Compare_Id));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("===================================================\n");
//	printf("Sorted Data Count = %d\n", Sort_Quick(exam, 1, 0, MAX_ST - 1, Compare_Name));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("Sorted Data Count = %d\n", Sort_Quick(exam, -1, 0, MAX_ST - 1, Compare_Name));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("===================================================\n");
//	printf("Sorted Data Count = %d\n", Sort_Quick(exam, 1, 0, MAX_ST - 1, Compare_Jumsu));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("Sorted Data Count = %d\n", Sort_Quick(exam, -1, 0, MAX_ST - 1, Compare_Jumsu));
//	printf("Printed Data Count = %d\n", Print_All_Data());
//	printf("===================================================\n");
//}
//
//#endif
//
///***********************************************************/
//// [1-3] �迭 ��� ���� ����Ʈ
///***********************************************************/
//
//#if 0
//
///***********************************************************/
//// [1-3.1] ������ �𵨸�
///***********************************************************/
//
//#if 01
//
//#include <stdio.h>
//#include <string.h>
//#include <conio.h>
//#include <malloc.h>
//#include <stdlib.h>
//
//typedef struct _score
//{
//	int id;
//	int jumsu;
//	char name[10];
//	struct _score* next;
//}SCORE;
//
////�����Ͱ� ������ ����
//SCORE Head;
//
//#define MAX_ST		20
//
//SCORE exam[MAX_ST];
//
//// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�
//
//
//int Print_All_Data(void);
//int Print_Data(int no);
//int Count_Data(void);
//int Create_Data(SCORE* p);
//int Insert_Data(SCORE* p);
//int Insert_Node(SCORE* head, SCORE* d);
//int Print_All_Node(SCORE* head);
//SCORE* Search_Id_Node(SCORE* head, int id);
//int Count_Node(SCORE* head);
//int Print_Node(SCORE* head, int id);
//int Delete_Node(SCORE* head, int id);
//int Copy_All_Node(SCORE* head, SCORE* buf);
//int Count_Name_Node(SCORE* head, char* name);
//int Count_Score_Node(SCORE* head, int jumsu);
//int Copy_Name_Node(SCORE* head, char* name, SCORE* buf);
//int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf);
//
//SCORE test[MAX_ST] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
//							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"}, \
//							   {15, 90, "ki"}, {11, 20, "kong"}, {14, 40, "shin"}, {12, 50, "son"}, {17, 48, "lee"}, \
//							   {20, 100, "min"}, {19, 80, "you"}, {13, 45, "song"}, {16, 54, "no"}, {18, 100, "yang"} };
//
//void Make_Test_Data(int n)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//	{
//		exam[i] = test[i];
//	}
//}
//
//#endif
//
///***********************************************************/
//// [1-3.2] ������ ����, �μ�, ��� �Լ� ����
///***********************************************************/
//
//#if 01
//
//int Create_Data(SCORE* p)
//{
//	printf("\n����� �Է��Ͻÿ� => ");
//	scanf("%d", &p->id);
//	fflush(stdin);
//	printf("�̸��� �Է��Ͻÿ� => ");
//	scanf("%s", p->name);
//	fflush(stdin);
//	printf("������ �Է��Ͻÿ� => ");
//	scanf("%d", &p->jumsu);
//	fflush(stdin);
//	p->next = (SCORE*)0x0;
//
//	return 1;
//}
//
//int Print_All_Data(void)
//{
//	int i;
//
//	printf("Head.next = 0x%.8X\n", Head.next);
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0) break;
//		printf("[%d] addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, next = 0x%.8X\n", i, &exam[i], exam[i].id, exam[i].name, exam[i].jumsu, exam[i].next);
//	}
//
//	return i;
//}
//
//int Print_Data(int no)
//{
//	if (exam[no].id == 0) return -1;
//	printf("[%d] addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, next = 0x%.8X\n", &exam[no], exam[no].id, exam[no].name, exam[no].jumsu, exam[no].next);
//	return 1;
//}
//
//int Count_Data(void)
//{
//	int i;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0) break;
//	}
//
//	return i;
//}
//
//int Insert_Data(SCORE* p)
//{
//	int i;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0)
//		{
//			exam[i] = (*p);
//			return i;
//		}
//
//		if (exam[i].id == p->id)
//		{
//			return -2;
//		}
//	}
//
//	return -1;
//}
//
//#endif
//
///***********************************************************/
//// [1-3.3] ������ �ϳ��� �����Ͽ� Linked List�� �߰��ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Insert_Node(SCORE* head, SCORE* d)
//{
//	int i;
//	for (i = 0; i < MAX_ST; i++)
//	{
//		//Head->next == NULL ������ ���� ���� �˻��ؾ� ��. ������ NULL�ΰ�� ���ǹ� ����
//		if ((head->next == NULL) || (head->next->id > d->id))
//		{
//			d->next = head->next;
//			head->next = d;
//			return 1;
//		}
//
//		//���� ���
//		if (head->next->id == d->id) return -2;
//		
//		head = head->next;
//	}
//	return -1;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
//		printf("Printed Data Count = %d\n", Print_All_Data());
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
//		printf("Printed Data Count = %d\n", Print_All_Data());
//	}
//}
//
//#endif
//
///***********************************************************/
//// [1-3.4] link�� ���� �� ����� ������ �μ��ϵ��� �Լ�
///***********************************************************/
///***********************************************************/
//// [1-3.5] link�� ���� �־��� ����� �´� ��� �� ã�� �ּҸ� �����ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Print_All_Node(SCORE* head)
//{
//	int i;
//
//	printf("Head -> next addr = %#p\n", head->next);
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->next == NULL) break;
//
//		head = head->next;	
//		printf("addr = %#p, ID=%d, NAME=%s, SCORE=%d, next = %#p\n", head, head->id, head->name, head->jumsu, head->next);
//	}
//
//	return i;
//}
//
//SCORE* Search_Id_Node(SCORE* head, int id)
//{
//	int i;
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->next == NULL || head->next->id > id) break;
//
//		head = head->next;
//		if (head->id == id) return head;
//
//	}
//
//	return NULL;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//	SCORE* p;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
//		printf("Printed Data Count = %d\n", Print_All_Data());
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
//		printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	}
//
//	printf("Searched Node Address = 0x%.8X\n", p = Search_Id_Node(&Head, 8));
//
//	if (p != (SCORE*)0x0)
//	{
//		printf("ID=%d, NAME=%s, SCORE=%d, next = 0x%.8X\n", p->id, p->name, p->jumsu, p->next);
//	}
//
//	printf("Searched Node Address = 0x%.8X\n", p = Search_Id_Node(&Head, 7));
//
//	if (p != (SCORE*)0x0)
//	{
//		printf("ID=%d, NAME=%s, SCORE=%d, next = 0x%.8X\n", p->id, p->name, p->jumsu, p->next);
//	}
//}
//
//#endif
//
///***********************************************************/
//// [1-3.6] list�� ����� �ڷ��� �Ѽ��� ����ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Count_Node(SCORE* head)
//{
//	int i;
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->next == NULL) break;
//
//		head = head->next;
//	}
//
//	return i;
//
//}
//
//#endif
//
///***********************************************************/
//// [1-3.7] link�� ���� �־��� ����� �´� �ڷḦ �μ��ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Print_Node(SCORE* head, int id)
//{
//	SCORE* p = Search_Id_Node(head, id);
//	if (p == NULL) return -1;
//
//	printf("addr = %#p, ID=%d, NAME=%s, SCORE=%d, next = %#p\n", p, p->id, p->name, p->jumsu, p->next);
//	return 1;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
//		printf("Printed Data Count = %d\n", Print_All_Data());
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
//		printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//		printf("Node Count = %d\n", Count_Node(&Head));
//	}
//
//	printf("Print Node Result = %d\n", Print_Node(&Head, 8));
//	printf("Print Node Result = %d\n", Print_Node(&Head, 7));
//}
//
//#endif
//
///***********************************************************/
//// [1-3.8] link�� ���� �־��� ����� node�� ã�Ƽ� �����ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Delete_Node(SCORE* head, int id)
//{
//	int i;
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->next == NULL || head->next->id > id) break;
//
//		if (head->next->id == id)
//		{
//			head->next->id = 0;
//			head->next = head->next->next;
//			return 1;
//		}
//
//		else head = head->next;
//	}
//	return -1;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
//	}
//
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	printf("Delete Node Result = %d\n", Delete_Node(&Head, 8));
//	printf("Delete Node Result = %d\n", Delete_Node(&Head, 7));
//	printf("Delete Node Result = %d\n", Delete_Node(&Head, 1));
//	printf("Delete Node Result = %d\n", Delete_Node(&Head, 10));
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//}
//
//#endif
//
///***********************************************************/
//// [1-3.9] �־��� ���ۿ� �ڷḦ ��� ������ �ִ� �Լ� 
///***********************************************************/
//
//#if 01
//
//int Copy_All_Node(SCORE* head, SCORE* buf)
//{
//	int i;
//	if (head->next == NULL) return -1;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->next == NULL) break;
//
//		head = head->next;
//		buf[i] = *head;
//		buf[i].next = &buf[i + 1]; //�߿� point
//	}
//	buf[i - 1].next = NULL; //������ ��� ó��
//
//	return i;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//	SCORE* p;
//	SCORE new_head;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
//	}
//
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	printf("Node Count = %d\n", r = Count_Node(&Head));
//
//	p = (SCORE *)calloc(r, sizeof(SCORE));
//	printf("Copy All Node Result = %d\n", Copy_All_Node(&Head, p));
//	new_head.next = p;
//	printf("Printed Node Count = %d\n", Print_All_Node(&new_head));
//	free(p);
//}
//
//#endif
//
///***********************************************************/
//// [1-3.10] node���� ��û�� �ڷ��� ���� ����ϰų� ���ۿ� ������ �ִ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Count_Name_Node(SCORE* head, const char* name)
//{
//	int n = 0;
//
//	if (head->next == (SCORE*)0x0) return 0;
//	head = head->next;
//
//	for (;;)
//	{
//		if (!strcmp(head->name, name)) n++;
//		if (head->next == (SCORE*)0x0) return n;
//		head = head->next;
//	}
//}
//
//int Count_Score_Node(SCORE* head, int jumsu)
//{
//	int n = 0;
//
//	if (head->next == (SCORE*)0x0) return 0;
//	head = head->next;
//
//	for (;;)
//	{
//		if (head->jumsu == jumsu) n++;
//		if (head->next == (SCORE*)0x0) return n;
//		head = head->next;
//	}
//}
//
//int Copy_Name_Node(SCORE* head, const char* name, SCORE* buf)
//{
//	int i, cnt=0;
//	if (head->next == NULL) return 0;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->next == NULL) break;
//
//		head = head->next;
//		if (strcmp(head->name, name) == 0)
//		{
//			buf[cnt] = *head;
//			buf[cnt].next = &buf[cnt + 1];
//			cnt++;
//		}
//	}
//
//	//������ ��츸
//	if(cnt > 0 )	buf[cnt - 1].next = NULL;
//
//	return cnt;
//}
//
//int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf)
//{
//	int i, cnt = 0;
//	if (head->next == NULL) return 0;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->next == NULL) break;
//
//		head = head->next;
//		if (head->jumsu == jumsu)
//		{
//			buf[cnt] = *head;
//			buf[cnt].next = &buf[cnt + 1];
//			cnt++;
//		}
//	}
//	if (cnt > 0)	buf[cnt - 1].next = NULL;
//
//	return cnt;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//	SCORE* p;
//	SCORE new_head;
//
//	for (i = 0; i < 20; i++)
//	{
//		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
//	}
//
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//
//	printf("Name Node Count = %d\n", r = Count_Name_Node(&Head, "lew"));
//	p = (SCORE*)calloc(r, sizeof(SCORE));
//	printf("Copy Name Node Result = %d\n", Copy_Name_Node(&Head, "lew", p));
//	new_head.next = p;
//	printf("Printed Node Count = %d\n", Print_All_Node(&new_head));
//	free(p);
//
//	printf("Score Node Count = %d\n", r = Count_Score_Node(&Head, 100));
//	p = (SCORE*)calloc(r, sizeof(SCORE));
//	printf("Copy Score Node Result = %d\n", Copy_Score_Node(&Head, 100, p));
//	new_head.next = p;
//	printf("Printed Node Count = %d\n", Print_All_Node(&new_head));
//	free(p);
//}
//
//#endif
//
//#endif
//
///***********************************************************/
//// [1-4] �迭 ��� ���� ����Ʈ - ���� ��ũ
///***********************************************************/
//
//#if 0
//
///***********************************************************/
//// [1-4.1] ������ �𵨸�
///***********************************************************/
//
//#if 01
//
//#include <stdio.h>
//#include <string.h>
//#include <conio.h>
//#include <malloc.h>
//
//typedef struct _score
//{
//	int id;
//	int jumsu;
//	char name[10];
//	struct _score* nid;
//	struct _score* njumsu;
//}SCORE;
//
//SCORE Head;
//
//#define MAX_ST		20
//
//SCORE exam[MAX_ST];
//
//// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�
//
//
//
//int Print_All_Data(void);
//int Print_Data(int no);
//int Count_Data(void);
//int Create_Data(SCORE* p);
//int Insert_Data(SCORE* p);
//int Insert_Node(SCORE* head, SCORE* d);
//int Print_All_Node(SCORE* head);
//int Print_All_Id_Node(SCORE* head);
//int Print_All_Jumsu_Node(SCORE* head);
//SCORE* Search_Id_Node(SCORE* head, int id);
//SCORE* Search_Jumsu_Node(SCORE* head, int jumsu);
//int Count_Node(SCORE* head);
//int Print_Id_Node(SCORE* head, int id);
//int Print_Jumsu_Node(SCORE* head, int jumsu);
//int Delete_Id_Node(SCORE* head, int id);
//void Delete_One_Jumsu_Node(SCORE* head, int jumsu, int id);
//int Delete_Jumsu_Node(SCORE* head, int id);
//int Copy_All_Node(SCORE* head, SCORE* buf);
//int Count_Name_Node(SCORE* head, char* name);
//int Count_Score_Node(SCORE* head, int jumsu);
//int Copy_Name_Node(SCORE* head, char* name, SCORE* buf);
//int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf);
//
//SCORE test[MAX_ST] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
//							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"}, \
//							   {15, 90, "ki"}, {11, 20, "kong"}, {14, 40, "shin"}, {12, 50, "son"}, {17, 48, "lee"}, \
//							   {20, 100, "min"}, {19, 80, "you"}, {13, 45, "song"}, {16, 54, "no"}, {18, 100, "yang"} };
//
//void Make_Test_Data(int n)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//	{
//		exam[i] = test[i];
//	}
//}
//
//int Create_Data(SCORE* p)
//{
//	printf("\n����� �Է��Ͻÿ� => ");
//	scanf("%d", &p->id);
//	fflush(stdin);
//	printf("�̸��� �Է��Ͻÿ� => ");
//	scanf("%s", p->name);
//	fflush(stdin);
//	printf("������ �Է��Ͻÿ� => ");
//	scanf("%d", &p->jumsu);
//	fflush(stdin);
//	p->nid = (SCORE*)0x0;
//	p->njumsu = (SCORE*)0x0;
//
//	return 1;
//}
//
//int Print_All_Data(void)
//{
//	int i;
//
//	printf("Head.nid = 0x%.8X, Head.njumsu = 0x%.8X\n", Head.nid, Head.njumsu);
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0) break;
//		printf("[%d] addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, nid = 0x%.8X, njumsu = 0x%.8X\n", i, &exam[i], exam[i].id, exam[i].name, exam[i].jumsu, exam[i].nid, exam[i].njumsu);
//	}
//
//	return i;
//}
//
//int Print_Data(int no)
//{
//	if (exam[no].id == 0) return -1;
//	printf("[%d] addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, nid = 0x%.8X, njumsu = 0x%.8X\n", &exam[no], exam[no].id, exam[no].name, exam[no].jumsu, exam[no].nid, exam[no].njumsu);
//	return 1;
//}
//
//int Count_Data(void)
//{
//	int i;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0) break;
//	}
//
//	return i;
//}
//
//int Insert_Data(SCORE* p)
//{
//	int i;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0)
//		{
//			exam[i] = (*p);
//			return i;
//		}
//
//		if (exam[i].id == p->id)
//		{
//			return -2;
//		}
//	}
//
//	return -1;
//}
//
//#endif
//
///***********************************************************/
//// [1-4.2] ������ �ϳ��� �����Ͽ� Linked List�� �߰��ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Insert_Node(SCORE* head, SCORE* d)
//{
//	int i;
//	SCORE* temp = head;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		//Head->next == NULL ������ ���� ���� �˻��ؾ� ��. ������ NULL�ΰ�� ���ǹ� ����
//		if ((temp->nid == NULL) || (temp->nid->id > d->id))
//		{
//			d->nid = temp->nid;
//			temp->nid = d;
//			break;
//		}
//
//		//���� ���
//		if (temp->nid->id == d->id) return -2;
//
//		temp = temp->nid;
//	}
//
//	if (i == MAX_ST) return -1;
//
//	temp = head;
//	for (i = 0; i < MAX_ST; i++)
//	{
//		//Head->next == NULL ������ ���� ���� �˻��ؾ� ��. ������ NULL�ΰ�� ���ǹ� ����
//		if ((temp->njumsu == NULL) || (temp->njumsu->jumsu >= d->jumsu))
//		{
//			d->njumsu = temp->njumsu;
//			temp->njumsu = d;
//			break;
//		}
//
//		temp = temp->njumsu;
//	}
//
//	return 1;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
//		printf("Printed Data Count = %d\n", Print_All_Data());
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
//		printf("Printed Data Count = %d\n", Print_All_Data());
//	}
//}
//
//#endif
//
///***********************************************************/
//// [1-4.3] link�� ���� �� ����� ������ �μ��ϴ� �Լ�
///***********************************************************/
///***********************************************************/
//// [1-4.4] link�� ���� �־��� ����� �´� ��� �� ã�� �ּҸ� �����ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Print_All_Node(SCORE* head)
//{
//	Print_All_Id_Node(head);
//	printf("\n");
//	return Print_All_Jumsu_Node(head);
//}
//
//int Print_All_Id_Node(SCORE* head)
//{
//	int i;
//
//	printf("Head -> nid = %#p\n", head->nid);
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->nid == NULL) break;
//
//		head = head->nid;
//		printf("addr = %#p, ID=%d, NAME=%s, SCORE=%d, next = %#p\n", head, head->id, head->name, head->jumsu, head->nid, head->njumsu);
//	}
//
//	return i;
//}
//
//int Print_All_Jumsu_Node(SCORE* head)
//{
//	int i;
//	printf("Head- > njumsu = %#p\n", head->njumsu);
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->njumsu == NULL) break;
//
//		head = head->njumsu;
//		printf("addr = %#p, ID=%d, NAME=%s, SCORE=%d, next = %#p\n", head, head->id, head->name, head->jumsu, head->nid, head->njumsu);
//	}
//
//	return i;
//}
//
//SCORE* Search_Id_Node(SCORE* head, int id)
//{
//	int i;
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->nid == NULL || head->nid->id > id) break;
//
//		head = head->nid;
//		if (head->id == id) return head;
//
//	}
//
//	return NULL;
//}
//
//SCORE* Search_Jumsu_Node(SCORE* head, int jumsu)
//{
//	int i;
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->njumsu == NULL || head->njumsu->jumsu > jumsu) break;
//
//		head = head->njumsu;
//		if (head->jumsu == jumsu) return head;
//
//	}
//	return NULL;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//	SCORE* p;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
//		printf("Printed Data Count = %d\n", Print_All_Data());
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
//		printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	}
//
//	printf("[Id] Searched Node Address = 0x%.8X\n", p = Search_Id_Node(&Head, 8));
//
//	if (p != (SCORE*)0x0)
//	{
//		printf("ID=%d, NAME=%s, SCORE=%d, nid = 0x%.8X\n", p->id, p->name, p->jumsu, p->nid);
//	}
//
//	printf("[Id] Searched Node Address = 0x%.8X\n", p = Search_Id_Node(&Head, 7));
//
//	if (p != (SCORE*)0x0)
//	{
//		printf("ID=%d, NAME=%s, SCORE=%d, nid = 0x%.8X\n", p->id, p->name, p->jumsu, p->nid);
//	}
//
//	p = &Head;
//
//	for (;;)
//	{
//		printf("p = 0x%.8X", p);
//		printf("[Jumsu] Searched Node Address = 0x%.8X\n", p = Search_Jumsu_Node(p, 50));
//		if (p == (SCORE*)0x0) break;
//		printf("ID=%d, NAME=%s, SCORE=%d, njumsu = 0x%.8X\n", p->id, p->name, p->jumsu, p->njumsu);
//	}
//}
//
//#endif
//
///***********************************************************/
//// [1-4.5] list�� ����� �ڷ��� �Ѽ��� ����ϴ� �Լ�
///***********************************************************/
///***********************************************************/
//// [1-4.6] link�� ���� �־��� ����� �´� �ڷḦ �μ��ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Count_Node(SCORE* head)
//{
//	int i;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->nid == (SCORE*)0x0) return i;
//		head = head->nid;
//	}
//	return i;
//}
//
//int Print_Id_Node(SCORE* head, int id)
//{
//	SCORE* p = Search_Id_Node(head, id);
//
//	if (p != (SCORE*)0x0)
//	{
//		printf("ID=%d, NAME=%s, SCORE=%d, nid = 0x%.8X\n", p->id, p->name, p->jumsu, p->nid);
//		return 1;
//	}
//
//	return -1;
//}
//
//int Print_Jumsu_Node(SCORE* head, int jumsu)
//{
//	SCORE* p = head;
//	int r = -1;
//
//	for (;;)
//	{
//		p = Search_Jumsu_Node(p, jumsu);
//		if (p == (SCORE*)0x0) break;
//		printf("ID=%d, NAME=%s, SCORE=%d, njumsu = 0x%.8X\n", p->id, p->name, p->jumsu, p->njumsu);
//		r = 1;
//	}
//
//	return r;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
//		printf("Printed Data Count = %d\n", Print_All_Data());
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
//		printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//		printf("Node Count = %d\n", Count_Node(&Head));
//	}
//
//	printf("Print Id(8) Node Result = %d\n", Print_Id_Node(&Head, 8));
//	printf("Print Id(7) Node Result = %d\n", Print_Id_Node(&Head, 7));
//	printf("Print Jumsu(50) Node Result = %d\n", Print_Jumsu_Node(&Head, 50));
//	printf("Print Jumsu(100) Node Result = %d\n", Print_Jumsu_Node(&Head, 100));
//	printf("Print Jumsu(31) Node Result = %d\n", Print_Jumsu_Node(&Head, 31));
//}
//
//#endif
//
///***********************************************************/
//// [1-4.7] link�� ���� �־��� ����� node�� ã�Ƽ� �����ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Delete_Id_Node(SCORE* head, int id)
//{
//	SCORE* temp = head;
//	int i;
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->nid == NULL || head->nid->id > id) break;
//
//		if (head->nid->id == id)
//		{
//			Delete_One_Jumsu_Node(temp, head->nid->jumsu, id);
//			head->nid->id = 0;
//			head->nid = head->nid->nid;
//			return 1;
//		}
//		head = head->nid;
//	}
//
//	return -1;
//}
//
//void Delete_One_Jumsu_Node(SCORE* head, int jumsu, int id)
//{
//	for (;;)
//	{
//		if (head->njumsu->id == id)
//		{
//			head->njumsu = head->njumsu->njumsu;
//			return;
//		}
//		head = head->njumsu;
//	}
//}
//
//int Delete_Jumsu_Node(SCORE* head, int jumsu)
//{
//	SCORE* p = head;
//	int res = -1;
//
//	for (;;)
//	{
//		p = Search_Jumsu_Node(p, jumsu);
//		if (p == NULL) break;
//		Delete_Id_Node(head, p->id);
//		res = 1;
//	}
//	
//	return res;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
//	}
//
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	printf("Delete Id(8) Node Result = %d\n", Delete_Id_Node(&Head, 8));
//	printf("Delete Id(7) Node Result = %d\n", Delete_Id_Node(&Head, 7));
//	printf("Delete Id(1) Node Result = %d\n", Delete_Id_Node(&Head, 1));
//	printf("Delete Id(10) Node Result = %d\n", Delete_Id_Node(&Head, 10));
//	printf("Delete Id(25) Node Result = %d\n", Delete_Id_Node(&Head, 25));
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	printf("Delete Jumsu(45) Node Result = %d\n", Delete_Jumsu_Node(&Head, 45));
//	printf("Delete Jumsu(20) Node Result = %d\n", Delete_Jumsu_Node(&Head, 20));
//	printf("Delete Jumsu(90) Node Result = %d\n", Delete_Jumsu_Node(&Head, 90));
//	printf("Delete Jumsu(100) Node Result = %d\n", Delete_Jumsu_Node(&Head, 100));
//	printf("Delete Jumsu(97) Node Result = %d\n", Delete_Jumsu_Node(&Head, 97));
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//}
//
//#endif
//
///***********************************************************/
//// [1-4.8] node���� ��û�� �ڷ��� ���� ����ϰų� ���ۿ� ������ �ִ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Count_Name_Node(SCORE* head, const char* name)
//{
//	int n = 0;
//	for (;;)
//	{
//		if (head->nid == NULL) return n;
//		head = head->nid;
//		if (!strcmp(head->name, name)) n++;
//	}
//}
//
//int Count_Score_Node(SCORE* head, int jumsu)
//{
//	int n = 0;
//	for (;;)
//	{
//		if (head->njumsu == NULL || head->njumsu->jumsu > jumsu) return n;
//		head = head->njumsu;
//		if (head->jumsu == jumsu) n++;
//	}
//}
//
//int Copy_Name_Node(SCORE* head, const char* name, SCORE* buf)
//{
//	int i, cnt=0;
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->nid == NULL) break;
//
//		head = head->nid;
//		if (strcmp(head->name, name) == 0)
//		{
//			buf[cnt] = *head;
//			buf[cnt].nid = &buf[cnt + 1];
//			cnt++;
//		}
//	}
//
//	if(cnt > 0) buf[cnt - 1].nid = NULL;
//
//	return cnt;
//}
//
//int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf)
//{
//	int i, cnt=0;
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->njumsu == NULL || head->njumsu->jumsu > jumsu) break;
//
//		head = head->njumsu;
//		if (head->jumsu == jumsu)
//		{
//			buf[cnt] = *head;
//			buf[cnt].njumsu = &buf[cnt + 1];
//			cnt++;
//		}
//	}
//
//	if(cnt > 0) buf[cnt - 1].njumsu = NULL;
//
//	return cnt;
//}
//
//#endif
//
//#if 01
//
//void main(void)
//{
//	int i;
//	int r;
//	SCORE* p;
//	SCORE new_head;
//
//	for (i = 0; i < 20; i++)
//	{
//		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
//	}
//
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//
//	printf("Name Node Count = %d\n", r = Count_Name_Node(&Head, "lew"));
//	p = (SCORE*)calloc(r, sizeof(SCORE));
//	printf("Copy Name Node Result = %d\n", Copy_Name_Node(&Head, "lew", p));
//	new_head.nid = p;
//	printf("Printed Node Count = %d\n", Print_All_Id_Node(&new_head));
//	free(p);
//
//	printf("Score Node Count = %d\n", r = Count_Score_Node(&Head, 100));
//	p = (SCORE*)calloc(r, sizeof(SCORE));
//	printf("Copy Score Node Result = %d\n", Copy_Score_Node(&Head, 100, p));
//	new_head.njumsu = p;
//	printf("Printed Node Count = %d\n", Print_All_Jumsu_Node(&new_head));
//	free(p);
//}
//
//#endif
//
//#endif
//
///***********************************************************/
//// [1-5] �迭 ��� ���� ����Ʈ - ���� ��ũ
///***********************************************************/
//
//#if 0
//
///***********************************************************/
//// [1-5.1] ���� Linked List ����� �״�� ����ϴ� �Լ���
//// ��, �μ��� �� Prev Node ���� �μ��ϵ��� �߰��Ѵ�
///***********************************************************/
//
//#if 01
//
//#include <stdio.h>
//#include <string.h>
//#include <conio.h>
//#include <malloc.h>
//
//typedef struct _score
//{
//	int id;
//	int jumsu;
//	char name[10];
//	struct _score* next;
//	struct _score* prev;
//}SCORE;
//
//SCORE Head;
//
//#define MAX_ST		20
//
//SCORE exam[MAX_ST];
//
//// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�
//
//
//
//int Print_All_Data(void);
//int Print_Data(int no);
//int Count_Data(void);
//int Create_Data(SCORE* p);
//int Insert_Data(SCORE* p);
//int Insert_Node(SCORE* head, SCORE* d);
//int Print_All_Node(SCORE* head);
//int Print_All_Node_Reverse(SCORE* head);
//SCORE* Search_Id_Node(SCORE* head, int id);
//int Count_Node(SCORE* head);
//int Print_Node(SCORE* head, int id);
//int Delete_Node(SCORE* head, int id);
//int Copy_All_Node(SCORE* head, SCORE* buf);
//int Count_Name_Node(SCORE* head, char* name);
//int Count_Score_Node(SCORE* head, int jumsu);
//int Copy_Name_Node(SCORE* head, char* name, SCORE* buf);
//int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf);
//int Print_Selected_Node(SCORE* head, int id, int num);
//int Print_Selected_Node_Reverse(SCORE* head, int id, int num);
//
//SCORE test[MAX_ST] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
//							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"}, \
//							   {15, 90, "ki"}, {11, 20, "kong"}, {14, 40, "shin"}, {12, 50, "son"}, {17, 48, "lee"}, \
//							   {20, 100, "min"}, {19, 80, "you"}, {13, 45, "song"}, {16, 54, "no"}, {18, 100, "yang"} };
//
//void Make_Test_Data(int n)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//	{
//		exam[i] = test[i];
//	}
//}
//
//int Create_Data(SCORE* p)
//{
//	printf("\n����� �Է��Ͻÿ� => ");
//	scanf("%d", &p->id);
//	fflush(stdin);
//	printf("�̸��� �Է��Ͻÿ� => ");
//	scanf("%s", p->name);
//	fflush(stdin);
//	printf("������ �Է��Ͻÿ� => ");
//	scanf("%d", &p->jumsu);
//	fflush(stdin);
//	p->next = (SCORE*)0x0;
//	p->prev = (SCORE*)0x0;
//
//	return 1;
//}
//
//int Print_All_Data(void)
//{
//	int i;
//
//	printf("Head= 0x%.8X, Head.next=0x%.8X, Head.prev=0x%.8X\n", &Head, Head.next, Head.prev);
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0) break;
//		printf("[%d] addr=0x%.8X, ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", i, &exam[i], exam[i].id, exam[i].name, exam[i].jumsu, exam[i].next, exam[i].prev);
//	}
//
//	return i;
//}
//
//int Print_Data(int no)
//{
//	if (exam[no].id == 0) return -1;
//	printf("[%d] addr=0x%.8X, ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", &exam[no], exam[no].id, exam[no].name, exam[no].jumsu, exam[no].next, exam[no].prev);
//	return 1;
//}
//
//int Count_Data(void)
//{
//	int i;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0) break;
//	}
//
//	return i;
//}
//
//int Insert_Data(SCORE* p)
//{
//	int i;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (exam[i].id == 0)
//		{
//			exam[i] = (*p);
//			return i;
//		}
//
//		if (exam[i].id == p->id)
//		{
//			return -2;
//		}
//	}
//
//	return -1;
//}
//
//int Print_All_Node(SCORE* head)
//{
//	int i;
//
//	printf("Head.next = 0x%.8X Head.prev = 0x%.8X\n", head->next, head->prev);
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->next == (SCORE*)0x0) return i;
//		printf("addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", head->next, head->next->id, head->next->name, head->next->jumsu, head->next->next, head->next->prev);
//		head = head->next;
//	}
//	return i;
//}
//
//int Count_Node(SCORE* head)
//{
//	int i;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->next == (SCORE*)0x0) return i;
//		head = head->next;
//	}
//	return i;
//}
//
//
//int Print_Node(SCORE* head, int id)
//{
//	SCORE* p = Search_Id_Node(head, id);
//
//	if (p != (SCORE*)0x0)
//	{
//		printf("ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", p->id, p->name, p->jumsu, p->next, p->prev);
//		return 1;
//	}
//
//	return -1;
//}
//
//int Copy_All_Node(SCORE* head, SCORE* buf)
//{
//	int i;
//	if (head->next == NULL) return -1;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->next == NULL) break;
//		buf[i] = *head->next;
//		buf[i].next = &buf[i + 1];
//		head = head->next;
//	}
//
//	buf[i - 1].next = NULL;
//	return i;
//}
//
//int Count_Name_Node(SCORE* head, char* name)
//{
//	int n = 0;
//
//	if (head->next == (SCORE*)0x0) return 0;
//	head = head->next;
//
//	for (;;)
//	{
//		if (!strcmp(head->name, name)) n++;
//		if (head->next == (SCORE*)0x0) return n;
//		head = head->next;
//	}
//}
//
//int Count_Score_Node(SCORE* head, int jumsu)
//{
//	int n = 0;
//
//	if (head->next == (SCORE*)0x0) return 0;
//	head = head->next;
//
//	for (;;)
//	{
//		if (head->jumsu == jumsu) n++;
//		if (head->next == (SCORE*)0x0) return n;
//		head = head->next;
//	}
//}
//
//int Copy_Name_Node(SCORE* head, char* name, SCORE* buf)
//{
//	int n = 0;
//
//	if (head->next == (SCORE*)0x0) return 0;
//	head = head->next;
//
//	for (;;)
//	{
//		if (!strcmp(head->name, name))
//		{
//			buf[n] = *head;
//			buf[n].next = &buf[n + 1];
//			n++;
//		}
//		if (head->next == (SCORE*)0x0) break;
//		head = head->next;
//	}
//	buf[n - 1].next = (SCORE*)0x0;
//	return n;
//}
//
//int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf)
//{
//	int n = 0;
//
//	if (head->next == (SCORE*)0x0) return 0;
//	head = head->next;
//
//	for (;;)
//	{
//		if (head->jumsu == jumsu)
//		{
//			buf[n] = *head;
//			buf[n].next = &buf[n + 1];
//			n++;
//		}
//		if (head->next == (SCORE*)0x0) break;
//		head = head->next;
//	}
//	buf[n - 1].next = (SCORE*)0x0;
//	return n;
//}
//
//#endif
//
///***********************************************************/
//// [1-5.2] ������ �ϳ��� �����Ͽ� Linked List�� �߰��ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Insert_Node(SCORE* head, SCORE* d)
//{
//	int i;
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->next == NULL || head->next->id > d->id)
//		{
//			d->next = head->next;
//			d->prev = head;
//			if(d->next != NULL) d->next->prev = d;
//			head->next = d;
//			return 1;
//		}
//
//		if (head->next->id == d->id) return -2;
//		head = head->next;
//	}
//
//	return -1;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
//		printf("Printed Data Count = %d\n", Print_All_Data());
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
//		printf("Printed Data Count = %d\n", Print_All_Data());
//	}
//}
//
//#endif
//
///***********************************************************/
//// [1-5.3] �־��� ����� node�� ã�Ƽ� �����ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//SCORE* Search_Id_Node(SCORE* head, int id)
//{
//	int i;
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (head->next == NULL || head->next->id > id) break;
//
//		head = head->next;
//		if (head->id == id) return head;
//
//	}
//
//	return NULL;
//}
//
//int Delete_Node(SCORE* head, int id)
//{
//	SCORE* p = Search_Id_Node(head, id);
//	if (p == NULL) return -1;
//
//	p->prev->next = p->next;
//	if(p->next != NULL) p->next->prev = p->prev;
//	p->id = 0;
//
//	return 1;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
//	}
//
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	printf("[8] Delete Node Result = %d\n", Delete_Node(&Head, 8));
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	printf("[7] Delete Node Result = %d\n", Delete_Node(&Head, 7));
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	printf("[1] Delete Node Result = %d\n", Delete_Node(&Head, 1));
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	printf("[10] Delete Node Result = %d\n", Delete_Node(&Head, 10));
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//}
//
//#endif
//
///***********************************************************/
//// [1-5.4] ���� ��ũ ����� ���� 1, �������� �˻�
///***********************************************************/
//
//#if 01
//
//int Print_All_Node_Reverse(SCORE* head)
//{
//	int cnt = 0;
//	for (;;)
//	{
//		if (head->next == NULL) break;
//		head = head->next;
//	}
//
//	for (;;)
//	{
//		if (head->prev == NULL) break;
//
//		printf("Addr = %#p, ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", head, head->id, head->name, head->jumsu, head->next, head->prev);
//		head = head->prev;
//		cnt++;
//	}
//
//	return cnt;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
//	}
//
//	printf("Printed Node Count(Up) = %d\n", Print_All_Node(&Head));
//	printf("Printed Node Count(Down) = %d\n", Print_All_Node_Reverse(&Head));
//	printf("[8] Delete Node Result = %d\n", Delete_Node(&Head, 8));
//	printf("Printed Node Count(Down) = %d\n", Print_All_Node_Reverse(&Head));
//}
//
//#endif
//
///***********************************************************/
//// [1-5.5] ���� ��ũ ����� ���� 2, ���������� ���� ���� �μ�
///***********************************************************/
//
//#if 01
//
//int Print_Selected_Node(SCORE* head, int id, int num)
//{
//	SCORE* p = Search_Id_Node(head, id);
//	if (p == NULL) return -1;
//
//	int i;
//	for (i = 0; i < num; i++)
//	{
//		if (p == NULL) break;
//		printf("Addr = %#p, ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", p, p->id, p->name, p->jumsu, p->next, p->prev);
//		p = p->next;
//	}
//
//	return i;
//}
//
//int Print_Selected_Node_Reverse(SCORE* head, int id, int num)
//{
//	SCORE* p = Search_Id_Node(head, id);
//	if (p == NULL) return -1;
//
//	int i;
//	for (i = 0; i < num; i++)
//	{
//		if (p->id == NULL) break;
//		printf("Addr = %#p, ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", p, p->id, p->name, p->jumsu, p->next, p->prev);
//		p = p->prev;
//	}
//
//	return i;
//}
//
//#endif
//
//#if 01
//
//void main(void)
//{
//	int i;
//	int r;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
//	}
//
//	printf("Printed Node Count(Up) = %d\n", Print_All_Node(&Head));
//	printf("Printed Node Count(Down) = %d\n", Print_All_Node_Reverse(&Head));
//
//	r = Print_Selected_Node(&Head, 7, 3);
//	printf("Printed Data Number => %d\n", r);
//
//	r = Print_Selected_Node(&Head, 19, 3);
//	printf("Printed Data Number => %d\n", r);
//
//	r = Print_Selected_Node_Reverse(&Head, 7, 3);
//	printf("Printed Data Number => %d\n", r);
//
//	r = Print_Selected_Node_Reverse(&Head, 2, 3);
//	printf("Printed Data Number => %d\n", r);
//}
//
//#endif
//
//#endif
//
///***********************************************************/
//// [1-6] ���� ����Ʈ - stack
///***********************************************************/
//
//#if 0
//
//#include <stdio.h>
//
//#define MAX_STACK		10
//#define STACK_EMPTY	MAX_STACK
//#define STACK_FULL		0
//
//int Push_Stack(int data);
//int Pop_Stack(int* p);
//int Print_Stack(void);
//int Count_Full_Data_Stack(void);
//int Count_Empty_Data_Stack(void);
//
//int a[MAX_STACK + 1] = { 1,2,3,4,5,6,7,8,9,10,11 };
//int Stack[MAX_STACK];
//int Sptr = STACK_EMPTY;
//
//int Push_Stack(int data)
//{
//	if (Sptr - 1 == STACK_FULL) return -1;
//	
//	Sptr--;
//	Stack[Sptr] = data;
//	return 1;
//}
//
//int Pop_Stack(int* p)
//{
//	if (Sptr == STACK_EMPTY) return -1;
//	*p = Stack[Sptr];
//	Sptr++;
//	return 1;
//}
//
//int Print_Stack(void)
//{
//	int i;
//
//	for (i = Sptr; i < MAX_STACK; i++)
//	{
//		printf("STACK[%d] = %d\n", i, Stack[i]);
//	}
//
//	return MAX_STACK - Sptr;
//}
//
//int Count_Full_Data_Stack(void)
//{
//	return STACK_EMPTY - Sptr;
//}
//
//int Count_Empty_Data_Stack(void)
//{
//	return Sptr - STACK_FULL;
//}
//
//void main(void)
//{
//	int i;
//
//	for (i = 0; i < (MAX_STACK + 1); i++)
//	{
//		printf("%d, ", a[i]);
//	}
//
//	printf("\n");
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("Push Result = %d\n", Push_Stack(a[i]));
//		printf("Print Result = %d, ", Print_Stack());
//		printf("Full = %d ", Count_Full_Data_Stack());
//		printf("Empty = %d\n", Count_Empty_Data_Stack());
//		printf("Sptr = %d\n", Sptr);
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("Pop Result = %d\n", Pop_Stack(&a[i]));
//		printf("Print Result = %d, ", Print_Stack());
//		printf("Full = %d ", Count_Full_Data_Stack());
//		printf("Empty = %d\n", Count_Empty_Data_Stack());
//		printf("Sptr = %d\n", Sptr);
//	}
//
//	for (i = 0; i < (MAX_STACK + 1); i++)
//	{
//		printf("%d, ", a[i]);
//	}
//
//	printf("\n");
//
//	for (i = 0; i < (MAX_STACK + 1); i++)
//	{
//		printf("Push Result = %d\n", Push_Stack(a[i]));
//		printf("Print Result = %d, ", Print_Stack());
//		printf("Full = %d ", Count_Full_Data_Stack());
//		printf("Empty = %d\n", Count_Empty_Data_Stack());
//		printf("Sptr = %d\n", Sptr);
//	}
//
//	for (i = 0; i < (MAX_STACK + 1); i++)
//	{
//		printf("Pop Result = %d\n", Pop_Stack(&a[i]));
//		printf("Print Result = %d, ", Print_Stack());
//		printf("Full = %d ", Count_Full_Data_Stack());
//		printf("Empty = %d\n", Count_Empty_Data_Stack());
//		printf("Sptr = %d\n", Sptr);
//	}
//
//	for (i = 0; i < (MAX_STACK + 1); i++)
//	{
//		printf("%d, ", a[i]);
//	}
//
//	printf("\n");
//}
//
//#endif
//
///***********************************************************/
//// [1-7] ���� ����Ʈ - Linear Queue
///***********************************************************/
//
//#if 0
//
//#include <stdio.h>
//
//#define MAX_Q			5
//#define Q_EMPTY		0
//#define Q_FULL			MAX_Q
//
//int In_Queue(int data);
//int Out_Queue(int* p);
//int Print_Queue(void);
//int Count_Full_Data_Queue(void);
//int Count_Empty_Data_Queue(void);
//
//int a[MAX_Q + 1] = { 1,2,3,4,5,6 };
//int Queue[MAX_Q];
//int Wrptr = Q_EMPTY;
//int Rdptr = Q_EMPTY;
//
//int In_Queue(int data)
//{
//	if (Wrptr != MAX_Q)
//	{
//		Queue[Wrptr] = data;
//		Wrptr++;
//	}
//	else
//	{
//		if (Rdptr == Q_EMPTY)
//			return -1;
//		else
//		{
//			int i,j;
//			for (i = Rdptr, j = 0; i < Wrptr; i++)
//				Queue[j] = Queue[i];
//
//			Rdptr = 0;
//			Wrptr = j;
//		}
//	}
//
//	return 1;
//}
//
//int Out_Queue(int* p)
//{
//	if (Rdptr == MAX_Q) return -1;
//
//	*p = Queue[Rdptr];
//	Rdptr++;
//	return 1;
//}
//
//int Print_Queue(void)
//{
//	int i;
//
//	for (i = Rdptr; i < Wrptr; i++)
//	{
//		printf("Queue[%d] = %d\n", i, Queue[i]);
//	}
//
//	return Wrptr - Rdptr;
//}
//
//int Count_Full_Data_Queue(void)
//{
//	return Wrptr - Rdptr;
//}
//
//int Count_Empty_Data_Queue(void)
//{
//	return MAX_Q - (Wrptr - Rdptr);
//}
//
//void main(void)
//{
//	int i;
//
//	for (i = 0; i < (MAX_Q + 1); i++)
//	{
//		printf("%d, ", a[i]);
//	}
//
//	printf("\n");
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("Queue Result = %d\n", In_Queue(a[i]));
//		printf("Print Result = %d, ", Print_Queue());
//		printf("Full = %d ", Count_Full_Data_Queue());
//		printf("Empty = %d\n", Count_Empty_Data_Queue());
//		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		a[i] = 0;
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("Dequeue Result = %d\n", Out_Queue(&a[i]));
//		printf("Print Result = %d, ", Print_Queue());
//		printf("Full = %d ", Count_Full_Data_Queue());
//		printf("Empty = %d\n", Count_Empty_Data_Queue());
//		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
//	}
//
//	for (i = 0; i < (MAX_Q + 1); i++)
//	{
//		printf("%d, ", a[i]);
//	}
//
//	printf("\n");
//
//	for (i = 0; i < (MAX_Q + 1); i++)
//	{
//		printf("Queue Result = %d\n", In_Queue(a[i]));
//		printf("Print Result = %d, ", Print_Queue());
//		printf("Full = %d ", Count_Full_Data_Queue());
//		printf("Empty = %d\n", Count_Empty_Data_Queue());
//		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
//	}
//
//	for (i = 0; i < (MAX_Q + 1); i++)
//	{
//		a[i] = 0;
//	}
//
//	for (i = 0; i < (MAX_Q + 1); i++)
//	{
//		printf("Dequeue Result = %d\n", Out_Queue(&a[i]));
//		printf("Print Result = %d, ", Print_Queue());
//		printf("Full = %d ", Count_Full_Data_Queue());
//		printf("Empty = %d\n", Count_Empty_Data_Queue());
//		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
//	}
//
//	for (i = 0; i < (MAX_Q + 1); i++)
//	{
//		printf("%d, ", a[i]);
//	}
//
//	printf("\n");
//}
//
//#endif
//
///***********************************************************/
//// [1-8] ���� ����Ʈ - Circular Queue
///***********************************************************/
//
//#if 0
//
//#include <stdio.h>
//
//#define MAX_Q		8
//#define Q_MIN		0
//#define Q_MAX		MAX_Q
//
//int In_Queue(int data);
//int Out_Queue(int* p);
//int Print_Queue(void);
//int Count_Full_Data_Queue(void);
//int Count_Empty_Data_Queue(void);
//
//int a[MAX_Q + 1] = { 1,2,3,4,5,6,7,8,9 };
//int Queue[MAX_Q];
//int Wrptr = Q_MIN;
//int Rdptr = Q_MIN;
//int Q_cnt = 0;
//
//// Rdptr �� ��Ҹ� ���� ���
//#if 0
//int In_Queue(int data)
//{
//	if (((Wrptr + 1) % MAX_Q) == Rdptr) return -1;
//	else
//	{
//		Queue[Wrptr] = data;
//		Wrptr++;
//		Wrptr %= MAX_Q;
//		return 1;
//	}
//}
//
//int Out_Queue(int* p)
//{
//	if (Wrptr == Rdptr) return -1;
//	else
//	{
//		*p = Queue[Rdptr];
//		Rdptr++;
//		Rdptr %= MAX_Q;
//		return 1;
//	}
//}
//
//int Print_Queue(void)
//{
//	int i;
//	int rd = Rdptr;
//	int n = Count_Full_Data_Queue();
//
//	for (i = 0; i < n; i++)
//	{
//		printf("Queue[%d] = %d\n", rd, Queue[rd]);// ++�� ���� ������ ���� line�� ������ �������ɼ�
//		rd++;
//		rd %= MAX_Q;
//	}
//
//	return n;
//}
//
//int Count_Full_Data_Queue(void)
//{
//	if (Rdptr > Wrptr) return MAX_Q - (Rdptr - Wrptr);
//	return Wrptr - Rdptr;
//}
//
//int Count_Empty_Data_Queue(void)
//{
//	return MAX_Q - Count_Full_Data_Queue() - 1;
//}
//#endif
//
//// ����� ������ ������ �����ϴ� ���
//#if 01
//int In_Queue(int data)
//{
//	if (Q_cnt == MAX_Q) return -1;
//	else
//	{
//		Queue[Wrptr] = data;
//		Wrptr++;
//		Wrptr %= MAX_Q;
//		Q_cnt++;
//		return 1;
//	}
//}
//
//int Out_Queue(int* p)
//{
//	if (Q_cnt == 0) return -1;
//	else
//	{
//		*p = Queue[Rdptr];
//		Rdptr++;
//		Rdptr %= MAX_Q;
//		Q_cnt--;
//		return 1;
//	}
//}
//
//int Print_Queue(void)
//{
//	int i;
//	int rd = Rdptr;
//	int n = Count_Full_Data_Queue();
//
//	for (i = 0; i < n; i++)
//	{
//		printf("Queue[%d] = %d\n", rd, Queue[rd]);// ++�� ���� ������ ���� line�� ������ �������ɼ�
//		rd++;
//		rd %= MAX_Q;
//	}
//
//	return n;
//}
//
//int Count_Full_Data_Queue(void)
//{
//	return Q_cnt;
//}
//
//int Count_Empty_Data_Queue(void)
//{
//	return MAX_Q - Q_cnt;
//}
//#endif
//
//void main(void)
//{
//	int i;
//
//	for (i = 0; i < (MAX_Q + 1); i++)
//	{
//		printf("%d, ", a[i]);
//	}
//
//	printf("\n");
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("Queue Result = %d\n", In_Queue(a[i]));
//		printf("Print Result = %d, ", Print_Queue());
//		printf("Full = %d ", Count_Full_Data_Queue());
//		printf("Empty = %d\n", Count_Empty_Data_Queue());
//		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		a[i] = 0;
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("Dequeue Result = %d\n", Out_Queue(&a[i]));
//		printf("Print Result = %d, ", Print_Queue());
//		printf("Full = %d ", Count_Full_Data_Queue());
//		printf("Empty = %d\n", Count_Empty_Data_Queue());
//		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
//	}
//
//	for (i = 0; i < (MAX_Q + 1); i++)
//	{
//		printf("%d, ", a[i]);
//	}
//
//	printf("\n");
//
//	for (i = 0; i < (MAX_Q + 1); i++)
//	{
//		printf("Queue Result = %d\n", In_Queue(a[i]));
//		printf("Print Result = %d, ", Print_Queue());
//		printf("Full = %d ", Count_Full_Data_Queue());
//		printf("Empty = %d\n", Count_Empty_Data_Queue());
//		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
//	}
//
//	for (i = 0; i < (MAX_Q + 1); i++)
//	{
//		a[i] = 0;
//	}
//
//	for (i = 0; i < (MAX_Q + 1); i++)
//	{
//		printf("Dequeue Result = %d\n", Out_Queue(&a[i]));
//		printf("Print Result = %d, ", Print_Queue());
//		printf("Full = %d ", Count_Full_Data_Queue());
//		printf("Empty = %d\n", Count_Empty_Data_Queue());
//		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
//	}
//
//	for (i = 0; i < (MAX_Q + 1); i++)
//	{
//		printf("%d, ", a[i]);
//	}
//
//	printf("\n");
//}
//
//#endif
//
///***********************************************************/
//// [2-1] �� ��� Linked List
///***********************************************************/
//
//#if 0
//
///***********************************************************/
//// [2-1.1] ���� �迭 ��� linked list ����� �״�� ����ϴ� �Լ���
///***********************************************************/
//
//#include <stdio.h>
//#include <string.h>
//#include <conio.h>
//#include <malloc.h>
//
//typedef struct _score
//{
//	int id;
//	int jumsu;
//	char name[10];
//	struct _score* next;
//}SCORE;
//
//SCORE Head;
//
//// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�
//
//
//
//int Print_All_Data(void);
//int Print_Data(int no);
//int Count_Data(void);
//int Create_Data(SCORE* p);
//int Insert_Data(SCORE* p);
//int Insert_Node(SCORE* head, SCORE* d);
//int Print_All_Node(SCORE* head);
//SCORE* Search_Id_Node(SCORE* head, int id);
//int Count_Node(SCORE* head);
//int Print_Node(SCORE* head, int id);
//int Delete_Node(SCORE* head, int id);
//int Copy_All_Node(SCORE* head, SCORE* buf);
//int Count_Name_Node(SCORE* head, char* name);
//int Count_Score_Node(SCORE* head, int jumsu);
//int Copy_Name_Node(SCORE* head, char* name, SCORE* buf);
//int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf);
//
//#define MAX_ST  20
//
//SCORE test[MAX_ST] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
//							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"}, \
//							   {15, 90, "ki"}, {11, 20, "kong"}, {14, 40, "shin"}, {12, 50, "son"}, {17, 48, "lee"}, \
//							   {20, 100, "min"}, {19, 80, "you"}, {13, 45, "song"}, {16, 54, "no"}, {18, 100, "yang"} };
//
//int Create_Data(SCORE* p)
//{
//	printf("\n����� �Է��Ͻÿ� => ");
//	scanf("%d", &p->id);
//	fflush(stdin);
//	printf("�̸��� �Է��Ͻÿ� => ");
//	scanf("%s", p->name);
//	fflush(stdin);
//	printf("������ �Է��Ͻÿ� => ");
//	scanf("%d", &p->jumsu);
//	fflush(stdin);
//	p->next = (SCORE*)0x0;
//
//	return 1;
//}
//
//int Print_All_Node(SCORE* head)
//{
//	int n = 0;
//
//	printf("Head.next = 0x%.8X\n", head->next);
//	if (head->next == (SCORE*)0x0) return 0;
//	head = head->next;
//
//	for (;;)
//	{
//		printf("addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, next = 0x%.8X\n", head, head->id, head->name, head->jumsu, head->next);
//		n++;
//		if (head->next == (SCORE*)0x0) return n;
//		head = head->next;
//	}
//}
//
//SCORE* Search_Id_Node(SCORE* head, int id)
//{
//	if (head->next == (SCORE*)0x0) return (SCORE*)0x0;
//	head = head->next;
//
//	for (;;)
//	{
//		if (head->id == id) return head;
//		if (head->next == (SCORE*)0x0) return (SCORE*)0x0;
//		head = head->next;
//	}
//}
//
//int Count_Node(SCORE* head)
//{
//	int n = 0;
//
//	if (head->next == (SCORE*)0x0) return 0;
//	head = head->next;
//
//	for (;;)
//	{
//		n++;
//		if (head->next == (SCORE*)0x0) return n;
//		head = head->next;
//	}
//}
//
//int Print_Node(SCORE* head, int id)
//{
//	SCORE* p = Search_Id_Node(head, id);
//
//	if (p != (SCORE*)0x0)
//	{
//		printf("ID=%d, NAME=%s, SCORE=%d, next = 0x%.8X\n", p->id, p->name, p->jumsu, p->next);
//		return 1;
//	}
//
//	return -1;
//}
//
//int Copy_All_Node(SCORE* head, SCORE* buf)
//{
//	int n = 0;
//
//	if (head->next == (SCORE*)0x0) return -1;
//	head = head->next;
//
//	for (;;)
//	{
//		buf[n] = *head;
//		buf[n].next = &buf[n + 1];
//		if (head->next == (SCORE*)0x0)
//		{
//			buf[n].next = (SCORE*)0x0;
//			return n + 1;
//		}
//		n++;
//		head = head->next;
//	}
//}
//
//int Count_Name_Node(SCORE* head, char* name)
//{
//	int n = 0;
//
//	if (head->next == (SCORE*)0x0) return 0;
//	head = head->next;
//
//	for (;;)
//	{
//		if (!strcmp(head->name, name)) n++;
//		if (head->next == (SCORE*)0x0) return n;
//		head = head->next;
//	}
//}
//
//int Count_Score_Node(SCORE* head, int jumsu)
//{
//	int n = 0;
//
//	if (head->next == (SCORE*)0x0) return 0;
//	head = head->next;
//
//	for (;;)
//	{
//		if (head->jumsu == jumsu) n++;
//		if (head->next == (SCORE*)0x0) return n;
//		head = head->next;
//	}
//}
//
//int Copy_Name_Node(SCORE* head, char* name, SCORE* buf)
//{
//	int n = 0;
//
//	if (head->next == (SCORE*)0x0) return 0;
//	head = head->next;
//
//	for (;;)
//	{
//		if (!strcmp(head->name, name))
//		{
//			buf[n] = *head;
//			buf[n].next = &buf[n + 1];
//			n++;
//		}
//
//		if (head->next == (SCORE*)0x0)
//		{
//			buf[n - 1].next = (SCORE*)0x0;
//			return n;
//		}
//
//		head = head->next;
//	}
//}
//
//int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf)
//{
//	int n = 0;
//
//	if (head->next == (SCORE*)0x0) return 0;
//	head = head->next;
//
//	for (;;)
//	{
//		if (head->jumsu == jumsu)
//		{
//			buf[n] = *head;
//			buf[n].next = &buf[n + 1];
//			n++;
//		}
//
//		if (head->next == (SCORE*)0x0)
//		{
//			buf[n - 1].next = (SCORE*)0x0;
//			return n;
//		}
//
//		head = head->next;
//	}
//}
//
///***********************************************************/
//// [2-1.2] ���޹��� �����͸� ���� �����ϰ� Linked List�� �߰��ϴ� �Լ� (calloc ���)
///***********************************************************/
//
//#if 01
//
//int Insert_Node(SCORE* head, SCORE* d)
//{
//	//���1) �ݺ���
//	//for (;;)
//	//{
//	//	if (head->next == NULL || head->next->id > d->id)
//	//	{
//	//		SCORE* p = (SCORE*)malloc(sizeof(SCORE));
//	//		if (p == NULL) return -1;
//	//		*p = *d;
//	//		p->next = head->next;
//	//		head->next = p;
//	//		return 1;
//	//	}
//
//	//	if (head->next->id == d->id) return -2;
//	//	head = head->next;
//	//}
//
//	//���2) ���
//	if (head->next == NULL || head->next->id > d->id)
//	{
//		SCORE* p = (SCORE*)malloc(sizeof(SCORE));
//		if (p == NULL) return -1;
//		*p = *d;
//		p->next = head->next;
//		head->next = p;
//		return 1;
//	}
//	if (head->next->id == d->id) return -2;
//	return Insert_Node(head->next, d);
//
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	SCORE* p;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &test[i]));
//	}
//
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//
//	printf("Searched Node Address = 0x%.8X\n", p = Search_Id_Node(&Head, 8));
//
//	if (p != (SCORE*)0x0)
//	{
//		printf("ID=%d, NAME=%s, SCORE=%d, next = 0x%.8X\n", p->id, p->name, p->jumsu, p->next);
//	}
//
//	printf("Searched Node Address = 0x%.8X\n", p = Search_Id_Node(&Head, 7));
//
//	if (p != (SCORE*)0x0)
//	{
//		printf("ID=%d, NAME=%s, SCORE=%d, next = 0x%.8X\n", p->id, p->name, p->jumsu, p->next);
//	}
//}
//
//#endif
//
///***********************************************************/
//// [2-1.3] ���޹��� ����� �ڷḦ ��ũ�� ������ �����ϴ� �Լ� (free ���)
///***********************************************************/
//
//#if 01
//
//int Delete_Node(SCORE* head, int id)
//{
//	for (;;)
//	{
//		if (head->next == NULL || head->next->id > id) break;
//
//		if (head->next->id == id)
//		{
//			SCORE* temp = head->next;
//			head->next = head->next->next;
//			free(temp);
//			return 1;
//		}
//
//		head = head->next;
//	}
//
//	return -1;
//}
//
//void Delete_All_Node(SCORE* head)
//{
//	SCORE* temp;
//
//	for (;;)
//	{
//		if (head->next == NULL) break;
//
//		else
//		{
//			temp = head->next;
//			head->next = head->next->next;
//			free(temp);
//		}
//	}
//}
//
//#endif
//
//#if 01
//
//void main(void)
//{
//	int i;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &test[i]));
//	}
//
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	printf("Delete Node Result = %d\n", Delete_Node(&Head, 8));
//	printf("Delete Node Result = %d\n", Delete_Node(&Head, 7));
//	printf("Delete Node Result = %d\n", Delete_Node(&Head, 1));
//	printf("Delete Node Result = %d\n", Delete_Node(&Head, 10));
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	Delete_All_Node(&Head);
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//}
//
//#endif
//
//#endif
//
///***********************************************************/
//// [2-2] �� ��� ���� ����Ʈ - ���� ��ũ
///***********************************************************/
//
//#if 0
//
///***********************************************************/
//// ���� �迭 ��� ���� ����Ʈ�� �����ϰ� ���Ǵ� �Լ��� 
///***********************************************************/
//
//#if 01
//
//#include <stdio.h>
//#include <string.h>
//#include <conio.h>
//#include <malloc.h>
//
//typedef struct _score
//{
//	int id;
//	int jumsu;
//	char name[10];
//	struct _score* nid;
//	struct _score* njumsu;
//}SCORE;
//
//SCORE Head;
//
//#define MAX_ST		20
//
//SCORE exam[MAX_ST];
//
//// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�
//
//
//int Print_All_Data(void);
//int Print_Data(int no);
//int Count_Data(void);
//int Create_Data(SCORE* p);
//int Insert_Data(SCORE* p);
//int Insert_Node(SCORE* head, SCORE* d);
//int Print_All_Node(SCORE* head);
//int Print_All_Id_Node(SCORE* head);
//int Print_All_Jumsu_Node(SCORE* head);
//SCORE* Search_Id_Node(SCORE* head, int id);
//SCORE* Search_Jumsu_Node(SCORE* head, int jumsu);
//int Count_Node(SCORE* head);
//int Print_Id_Node(SCORE* head, int id);
//int Print_Jumsu_Node(SCORE* head, int jumsu);
//int Delete_Id_Node(SCORE* head, int id);
//void Delete_One_Jumsu_Node(SCORE* head, int jumsu, int id);
//int Delete_Jumsu_Node(SCORE* head, int id);
//int Copy_All_Node(SCORE* head, SCORE* buf);
//int Count_Name_Node(SCORE* head, char* name);
//int Count_Score_Node(SCORE* head, int jumsu);
//int Copy_Name_Node(SCORE* head, char* name, SCORE* buf);
//int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf);
//
//SCORE test[MAX_ST] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
//							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"}, \
//							   {15, 90, "ki"}, {11, 20, "kong"}, {14, 40, "shin"}, {12, 50, "son"}, {17, 48, "lee"}, \
//							   {20, 100, "min"}, {19, 80, "you"}, {13, 45, "song"}, {16, 54, "no"}, {18, 100, "yang"} };
//
//int Create_Data(SCORE* p)
//{
//	printf("\n����� �Է��Ͻÿ� => ");
//	scanf("%d", &p->id);
//	fflush(stdin);
//	printf("�̸��� �Է��Ͻÿ� => ");
//	scanf("%s", p->name);
//	fflush(stdin);
//	printf("������ �Է��Ͻÿ� => ");
//	scanf("%d", &p->jumsu);
//	fflush(stdin);
//	p->nid = (SCORE*)0x0;
//	p->njumsu = (SCORE*)0x0;
//
//	return 1;
//}
//
//
//int Print_All_Node(SCORE* head)
//{
//	Print_All_Id_Node(head);
//	return Print_All_Jumsu_Node(head);
//}
//
//int Print_All_Id_Node(SCORE* head)
//{
//	int i = 0;
//
//	printf("[Id] Head.nid = 0x%.8X\n", head->nid);
//
//	for (;;)
//	{
//		if (head->nid == (SCORE*)0x0) return i;
//		printf("addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, nid = 0x%.8X\n", head->nid, head->nid->id, head->nid->name, head->nid->jumsu, head->nid->nid);
//		head = head->nid;
//		i++;
//	}
//}
//
//int Print_All_Jumsu_Node(SCORE* head)
//{
//	int i = 0;
//
//	printf("[Jumsu] Head.njumsu = 0x%.8X\n", head->njumsu);
//
//	for (;;)
//	{
//		if (head->njumsu == (SCORE*)0x0) return i;
//		printf("addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, nid = 0x%.8X\n", head->njumsu, head->njumsu->id, head->njumsu->name, head->njumsu->jumsu, head->njumsu->njumsu);
//		head = head->njumsu;
//		i++;
//	}
//}
//
//SCORE* Search_Id_Node(SCORE* head, int id)
//{
//	for (;;)
//	{
//		if (head->nid == (SCORE*)0x0) return (SCORE*)0x0;
//		if (head->nid->id == id) return head->nid;
//		head = head->nid;
//	}
//}
//
//SCORE* Search_Jumsu_Node(SCORE* head, int jumsu)
//{
//	for (;;)
//	{
//		if (head->njumsu == (SCORE*)0x0) return (SCORE*)0x0;
//		if (head->njumsu->jumsu == jumsu) return head->njumsu;
//		head = head->njumsu;
//	}
//}
//
//int Count_Node(SCORE* head)
//{
//	int i = 0;
//
//	for (;;)
//	{
//		if (head->nid == (SCORE*)0x0) return i;
//		head = head->nid;
//		i++;
//	}
//}
//
//int Print_Id_Node(SCORE* head, int id)
//{
//	SCORE* p = Search_Id_Node(head, id);
//
//	if (p != (SCORE*)0x0)
//	{
//		printf("ID=%d, NAME=%s, SCORE=%d, nid = 0x%.8X\n", p->id, p->name, p->jumsu, p->nid);
//		return 1;
//	}
//
//	return -1;
//}
//
//int Print_Jumsu_Node(SCORE* head, int jumsu)
//{
//	SCORE* p = head;
//	int r = -1;
//
//	for (;;)
//	{
//		p = Search_Jumsu_Node(p, jumsu);
//		if (p == (SCORE*)0x0) break;
//		printf("ID=%d, NAME=%s, SCORE=%d, njumsu = 0x%.8X\n", p->id, p->name, p->jumsu, p->njumsu);
//		r = 1;
//	}
//
//	return r;
//}
//
//int Count_Name_Node(SCORE* head, char* name)
//{
//	int n = 0;
//
//	if (head->nid == (SCORE*)0x0) return 0;
//	head = head->nid;
//
//	for (;;)
//	{
//		if (!strcmp(head->name, name)) n++;
//		if (head->nid == (SCORE*)0x0) return n;
//		head = head->nid;
//	}
//}
//
//int Count_Score_Node(SCORE* head, int jumsu)
//{
//	int n = 0;
//
//	if (head->njumsu == (SCORE*)0x0) return 0;
//	head = head->njumsu;
//
//	for (;;)
//	{
//		if (head->jumsu == jumsu) n++;
//		if (head->njumsu == (SCORE*)0x0) return n;
//		head = head->njumsu;
//	}
//}
//
//int Copy_Name_Node(SCORE* head, char* name, SCORE* buf)
//{
//	int n = 0;
//
//	if (head->nid == (SCORE*)0x0) return 0;
//	head = head->nid;
//
//	for (;;)
//	{
//		if (!strcmp(head->name, name))
//		{
//			buf[n] = *head;
//			buf[n].nid = &buf[n + 1];
//			n++;
//		}
//		if (head->nid == (SCORE*)0x0) break;
//		head = head->nid;
//	}
//	buf[n - 1].nid = (SCORE*)0x0;
//	return n;
//}
//
//int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf)
//{
//	int n = 0;
//
//	if (head->njumsu == (SCORE*)0x0) return 0;
//	head = head->njumsu;
//
//	for (;;)
//	{
//		if (head->jumsu == jumsu)
//		{
//			buf[n] = *head;
//			buf[n].njumsu = &buf[n + 1];
//			n++;
//		}
//		if (head->njumsu == (SCORE*)0x0) break;
//		head = head->njumsu;
//	}
//	buf[n - 1].njumsu = (SCORE*)0x0;
//	return n;
//}
//
//#endif
//
///***********************************************************/
//// [2-2.1] ������ �ϳ��� �����Ͽ� Linked List�� �߰��ϴ� �Լ�  (calloc ���)
///***********************************************************/
//
//#if 01
//
//int Insert_Node(SCORE* head, SCORE* d)
//{
//	SCORE* p, *temp = head;
//	for (;;)
//	{
//		if (head->nid == NULL || head->nid->id > d->id)
//		{
//			p = (SCORE*)malloc(sizeof(SCORE));
//			if (p == NULL) return -1;
//			*p = *d;
//			p->nid = head->nid;
//			head->nid = p;
//			break;
//		}
//
//		if (head->nid->id == d->id) return -2;
//		head = head->nid;
//	}
//
//	head = temp;
//	for (;;)
//	{
//		if (head->njumsu == NULL || head->njumsu->jumsu >= d->jumsu)
//		{
//			p->njumsu = head->njumsu;
//			head->njumsu = p;
//			return 1;
//		}
//
//		head = head->njumsu;
//	}
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &test[i]));
//		printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	}
//}
//
//#endif
//
///***********************************************************/
//// [2-2.2] link�� ���� �־��� ����� node�� ã�Ƽ� �����ϴ� �Լ� (free ���)
///***********************************************************/
//
//#if 01
//
//int Delete_Id_Node(SCORE* head, int id)
//{
//	SCORE* backup = head;
//
//	for (;;)
//	{
//		if (head->nid == NULL || head->nid->id > id) return -1;
//
//		if (head->nid->id == id)
//		{
//			SCORE* temp;
//			Delete_One_Jumsu_Node(backup, head->nid->jumsu, id);
//			temp = head->nid;
//			head->nid = head->nid->nid;
//			free(temp);
//			return 1;
//		}
//
//		head = head->nid;
//	}
//
//}
//
//void Delete_One_Jumsu_Node(SCORE* head, int jumsu, int id)
//{
//	for (;;)
//	{
//		if (head->njumsu == NULL || head->njumsu->jumsu > jumsu) return;
//
//		if (head->njumsu->id == id)
//		{
//			head->njumsu = head->njumsu->njumsu;
//			return;		
//		}
//		
//		head = head->njumsu;
//	}
//}
//
//int Delete_Jumsu_Node(SCORE* head, int jumsu)
//{
//	int r = -1;
//	SCORE* delnode;
//	for (;;) {
//		delnode = Search_Jumsu_Node(head, jumsu);
//		if (delnode == NULL) break;
//		Delete_Id_Node(head, delnode->id);
//		r = 1;
//	}
//	return r;
//}
//#endif
//
//#if 01
//void Delete_All_Node(SCORE* head)
//{
//	SCORE* delnode;
//	head->njumsu = NULL;
//	for (;;) {
//		if (head->nid == NULL) break;
//		delnode = head->nid;
//		head->nid = delnode->nid;
//		free(delnode);
//	}
//}
//#endif
//
//#if 01
//
//void main(void)
//{
//	int i;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &test[i]));
//	}
//
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	printf("Delete Id(8) Node Result = %d\n", Delete_Id_Node(&Head, 8));
//	printf("Delete Id(7) Node Result = %d\n", Delete_Id_Node(&Head, 7));
//	printf("Delete Id(1) Node Result = %d\n", Delete_Id_Node(&Head, 1));
//	printf("Delete Id(10) Node Result = %d\n", Delete_Id_Node(&Head, 10));
//	printf("Delete Id(25) Node Result = %d\n", Delete_Id_Node(&Head, 25));
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	printf("Delete Jumsu(45) Node Result = %d\n", Delete_Jumsu_Node(&Head, 45));
//	printf("Delete Jumsu(20) Node Result = %d\n", Delete_Jumsu_Node(&Head, 20));
//	printf("Delete Jumsu(90) Node Result = %d\n", Delete_Jumsu_Node(&Head, 90));
//	printf("Delete Jumsu(100) Node Result = %d\n", Delete_Jumsu_Node(&Head, 100));
//	printf("Delete Jumsu(87) Node Result = %d\n", Delete_Jumsu_Node(&Head, 97));
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//}
//
//#endif
//
//#endif
//
///***********************************************************/
//// [2-2.3] �� ��� ���� ����Ʈ - ���� ��ũ
///***********************************************************/
//
//#if 0
//
///***********************************************************/
//// [2-2.3] ���� Linked List ����� �״�� ����ϴ� �Լ���
///***********************************************************/
//
//#if 01
//
//#include <stdio.h>
//#include <string.h>
//#include <conio.h>
//#include <malloc.h>
//
//typedef struct _score
//{
//	int id;
//	int jumsu;
//	char name[10];
//	struct _score* next;
//	struct _score* prev;
//}SCORE;
//
//SCORE Head;
//
//#define MAX_ST		20
//
//SCORE exam[MAX_ST];
//
//// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�
//
//
//int Print_All_Data(void);
//int Print_Data(int no);
//int Count_Data(void);
//int Create_Data(SCORE* p);
//int Insert_Data(SCORE* p);
//int Insert_Node(SCORE* head, SCORE* d);
//int Print_All_Node(SCORE* head);
//int Print_All_Node_Reverse(SCORE* head);
//SCORE* Search_Id_Node(SCORE* head, int id);
//int Count_Node(SCORE* head);
//int Print_Node(SCORE* head, int id);
//int Delete_Node(SCORE* head, int id);
//int Copy_All_Node(SCORE* head, SCORE* buf);
//int Count_Name_Node(SCORE* head, char* name);
//int Count_Score_Node(SCORE* head, int jumsu);
//int Copy_Name_Node(SCORE* head, char* name, SCORE* buf);
//int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf);
//int Print_Selected_Node(SCORE* head, int id, int num);
//int Print_Selected_Node_Reverse(SCORE* head, int id, int num);
//
//SCORE test[MAX_ST] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
//							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"}, \
//							   {15, 90, "ki"}, {11, 20, "kong"}, {14, 40, "shin"}, {12, 50, "son"}, {17, 48, "lee"}, \
//							   {20, 100, "min"}, {19, 80, "you"}, {13, 45, "song"}, {16, 54, "no"}, {18, 100, "yang"} };
//
//
//int Create_Data(SCORE* p)
//{
//	printf("\n����� �Է��Ͻÿ� => ");
//	scanf("%d", &p->id);
//	fflush(stdin);
//	printf("�̸��� �Է��Ͻÿ� => ");
//	scanf("%s", p->name);
//	fflush(stdin);
//	printf("������ �Է��Ͻÿ� => ");
//	scanf("%d", &p->jumsu);
//	fflush(stdin);
//	p->next = (SCORE*)0x0;
//	p->prev = (SCORE*)0x0;
//
//	return 1;
//}
//
//SCORE* Search_Id_Node(SCORE* head, int id)
//{
//	for (;;)
//	{
//		if (head->next == (SCORE*)0x0) return (SCORE*)0x0;
//		if (head->next->id == id) return head->next;
//		head = head->next;
//	}
//}
//
//int Count_Node(SCORE* head)
//{
//	int i = 0;
//
//	for (;;)
//	{
//		if (head->next == (SCORE*)0x0) return i;
//		head = head->next;
//		i++;
//	}
//}
//
//int Print_Node(SCORE* head, int id)
//{
//	SCORE* p = Search_Id_Node(head, id);
//
//	if (p != (SCORE*)0x0)
//	{
//		printf("ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", p->id, p->name, p->jumsu, p->next, p->prev);
//		return 1;
//	}
//
//	return -1;
//}
//
//int Copy_All_Node(SCORE* head, SCORE* buf)
//{
//	int i = 0;
//	if (head->next == NULL) return -1;
//
//	for (;;)
//	{
//		if (head->next == NULL) break;
//		buf[i] = *head->next;
//		buf[i].next = &buf[i + 1];
//		head = head->next;
//		i++;
//	}
//
//	buf[i - 1].next = NULL;
//	return i;
//}
//
//int Count_Name_Node(SCORE* head, char* name)
//{
//	int n = 0;
//
//	if (head->next == (SCORE*)0x0) return 0;
//	head = head->next;
//
//	for (;;)
//	{
//		if (!strcmp(head->name, name)) n++;
//		if (head->next == (SCORE*)0x0) return n;
//		head = head->next;
//	}
//}
//
//int Count_Score_Node(SCORE* head, int jumsu)
//{
//	int n = 0;
//
//	if (head->next == (SCORE*)0x0) return 0;
//	head = head->next;
//
//	for (;;)
//	{
//		if (head->jumsu == jumsu) n++;
//		if (head->next == (SCORE*)0x0) return n;
//		head = head->next;
//	}
//}
//
//int Copy_Name_Node(SCORE* head, char* name, SCORE* buf)
//{
//	int n = 0;
//
//	if (head->next == (SCORE*)0x0) return 0;
//	head = head->next;
//
//	for (;;)
//	{
//		if (!strcmp(head->name, name))
//		{
//			buf[n] = *head;
//			buf[n].next = &buf[n + 1];
//			n++;
//		}
//		if (head->next == (SCORE*)0x0) break;
//		head = head->next;
//	}
//	buf[n - 1].next = (SCORE*)0x0;
//	return n;
//}
//
//int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf)
//{
//	int n = 0;
//
//	if (head->next == (SCORE*)0x0) return 0;
//	head = head->next;
//
//	for (;;)
//	{
//		if (head->jumsu == jumsu)
//		{
//			buf[n] = *head;
//			buf[n].next = &buf[n + 1];
//			n++;
//		}
//		if (head->next == (SCORE*)0x0) break;
//		head = head->next;
//	}
//	buf[n - 1].next = (SCORE*)0x0;
//	return n;
//}
//
//int Print_All_Node(SCORE* head)
//{
//	int i = 0;
//
//	printf("Head.next = 0x%.8X Head.prev = 0x%.8X\n", head->next, head->prev);
//
//	for (;;)
//	{
//		if (head->next == (SCORE*)0x0) return i;
//		printf("addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", head->next, head->next->id, head->next->name, head->next->jumsu, head->next->next, head->next->prev);
//		head = head->next;
//		i++;
//	}
//}
//
//int Print_All_Node_Reverse(SCORE* head)
//{
//	int i = 0;
//
//	printf("Head.next = 0x%.8X Head.prev = 0x%.8X\n", head->next, head->prev);
//
//	while (head->next != (SCORE*)0x0)
//	{
//		head = head->next;
//	}
//
//	printf("Tail.next = 0x%.8X Tail.prev = 0x%.8X\n", head->next, head->prev);
//
//	for (;;)
//	{
//		if (head->prev == (SCORE*)0x0) return i;
//		printf("addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", head, head->id, head->name, head->jumsu, head->next, head->prev);
//		head = head->prev;
//		i++;
//	}
//}
//
//int Print_Selected_Node(SCORE* head, int id, int num)
//{
//	int i = 0;
//
//	head = Search_Id_Node(head, id);
//
//	if (head == (SCORE*)0x0) return -1;
//
//	printf("==================================================================================\n");
//
//	while (i < num)
//	{
//		printf("addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", head, head->id, head->name, head->jumsu, head->next, head->prev);
//		i++;
//		if (head->next == (SCORE*)0x0) break;
//		head = head->next;
//	}
//
//	return i;
//}
//
//int Print_Selected_Node_Reverse(SCORE* head, int id, int num)
//{
//	int i = 0;
//
//	head = Search_Id_Node(head, id);
//
//	if (head == (SCORE*)0x0) return -1;
//
//	printf("==================================================================================\n");
//
//	while (i < num)
//	{
//		printf("addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", head, head->id, head->name, head->jumsu, head->next, head->prev);
//		i++;
//		if (head->prev->prev == (SCORE*)0x0) break;
//		head = head->prev;
//	}
//
//	return i;
//}
//
//#endif
//
///***********************************************************/
//// [2-2.3] ������ �ϳ��� �����Ͽ� Linked List�� �߰��ϴ� �Լ� (calloc ���)
///***********************************************************/
//
//#if 01
//
//int Insert_Node(SCORE* head, SCORE* d)
//{
//	for (;;)
//	{
//		if (head->next == NULL || head->next->id > d->id)
//		{
//			SCORE* p = (SCORE *)malloc(sizeof(SCORE));
//			if (p == NULL) return -1;
//			*p = *d;
//			p->next = head->next;
//			p->prev = head;
//			if (head->next != NULL) head->next->prev = p;
//			head->next = p;
//			return 1;
//		}
//
//		if (head->next->id == d->id) return -2;
//
//		head = head->next;
//	}
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &test[i]));
//		printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	}
//}
//
//#endif
//
///***********************************************************/
//// [2-2.4] �־��� ����� node�� ã�Ƽ� �����ϴ� �Լ�
///***********************************************************/
//
//#if 01
//
//int Delete_Node(SCORE* head, int id)
//{
//	SCORE* p = Search_Id_Node(head, id);
//	if (p == NULL) return -1;
//	else
//	{
//		p->prev->next = p->next;
//		if(p->next != NULL) p->next->prev = p->prev;
//		free(p);
//		return 1;
//	}
//}
//
//void Delete_All_Node(SCORE* head)
//{
//	for (;;)
//	{
//		if (head->next == NULL) return;
//
//		SCORE* temp = head->next;
//		head->next = head->next->next;
//		free(temp);
//	}
//}
//
//#endif
//
//#if 01
//
//void main(void)
//{
//	int i;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("Insert Node Result = %d\n", Insert_Node(&Head, &test[i]));
//	}
//
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	printf("Delete Node Result = %d\n", Delete_Node(&Head, 8));
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	printf("Delete Node Result = %d\n", Delete_Node(&Head, 7));
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	printf("Delete Node Result = %d\n", Delete_Node(&Head, 1));
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	printf("Delete Node Result = %d\n", Delete_Node(&Head, 10));
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//	Delete_All_Node(&Head);
//	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
//
//}
//
//#endif
//
//#endif
//
///***********************************************************/
//// [2-3] �� ��� �����ڷᱸ��
///***********************************************************/
//
///***********************************************************/
//// [2-3.1] �� ��� stack
///***********************************************************/
//
//#if 0
//
//#include <stdio.h>
//#include <malloc.h>
//
//typedef struct _stk
//{
//	int num;
//	struct _stk* next;
//}STACK;
//
//STACK* Sptr = (STACK*)0;
//STACK a[10] = { {1,0},{2,0},{3,0},{4,0},{5,0},{6,0},{7,0},{8,0},{9,0},{10,0} };
//
//int Push_Stack(STACK* data);
//int Pop_Stack(STACK* p);
//int Print_Stack(void);
//int Count_Full_Data_Stack(void);
//int stk_cnt = 0;
//
//int Push_Stack(STACK* data)
//{
//	STACK* p = (STACK *)malloc(sizeof(STACK));
//	if (p == NULL) return -1;
//
//	*p = *data;
//	p->next = Sptr;
//	Sptr = p;
//	stk_cnt++;
//	return 1;
//}
//
//int Pop_Stack(STACK* p)
//{
//	STACK* temp;
//
//	if (Sptr == NULL) return -1;
//	else
//	{
//		*p = *Sptr;
//		temp = Sptr;
//		Sptr = Sptr->next;
//		stk_cnt--;
//		free(temp);
//		return 1;
//	}
//}
//
//int Print_Stack(void)
//{
//	STACK* tmp = Sptr;
//	int n = 0;
//	printf("Sptr=%#p\n", Sptr);
//	for (;;) {
//		if (tmp == NULL) break;
//		printf("Addr=%#p, num=%d, next=%#p\n", tmp, tmp->num, tmp->next);
//		tmp = tmp->next;
//		n++;
//	}
//	return n;
//}
//
//int Count_Full_Data_Stack(void)
//{
//	return stk_cnt;
//}
//
//void main(void)
//{
//	int i;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("Push Result = %d\n", Push_Stack(&a[i]));
//		printf("Print Result = %d, ", Print_Stack());
//		printf("Full = %d\n", Count_Full_Data_Stack());
//	}
//
//	for (i = 0; i < 6; i++)
//	{
//		printf("Pop Result = %d\n", Pop_Stack(&a[i]));
//		printf("Print Result = %d, ", Print_Stack());
//		printf("Full = %d\n ", Count_Full_Data_Stack());
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("Push Result = %d\n", Push_Stack(&a[i]));
//		printf("Print Result = %d, ", Print_Stack());
//		printf("Full = %d\n", Count_Full_Data_Stack());
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("Pop Result = %d\n", Pop_Stack(&a[i]));
//		printf("Print Result = %d, ", Print_Stack());
//		printf("Full = %d\n ", Count_Full_Data_Stack());
//	}
//
//	printf("\n");
//}
//
//#endif
//
///***********************************************************/
//// [2-3.2] �� ���  Linear Queue
///***********************************************************/
//
//#if 0
//
//#include <stdio.h>
//#include <malloc.h>
//
//typedef struct _que
//{
//	int num;
//	struct _que* next;
//}QUEUE;
//
//QUEUE* Wrptr = (QUEUE*)0;;
//QUEUE* Rdptr = (QUEUE*)0;;
//QUEUE a[10] = { {1,0},{2,0},{3,0},{4,0},{5,0},{6,0},{7,0},{8,0},{9,0},{10,0} };
//int Q_cnt = 0;
//
//int In_Queue(QUEUE* data);
//int Out_Queue(QUEUE* p);
//int Print_Queue(void);
//int Count_Full_Data_Queue(void);
//
//int In_Queue(QUEUE* data)
//{
//	QUEUE* q;
//
//	if(Wrptr == NULL)
//	{
//		Rdptr = Wrptr = (QUEUE*)malloc(sizeof(QUEUE));
//		if (Wrptr == NULL) return -1;
//	}
//	else
//	{
//		Wrptr->next = (QUEUE*)malloc(sizeof(QUEUE)); //���� �ּҿ� ���� �Ҵ�
//		if (Wrptr->next == NULL) return -1; //�Ҵ� ����
//		Wrptr = Wrptr->next; // ���� �������� ������ �ּ� �̵�
//	}
//
//	*Wrptr = *data; //���� �̵��� �ּҿ� �� ���
//	Wrptr->next = NULL; // �������� �����Ƿ� �׻� next = 0
//	Q_cnt++;
//	return 1;
//}
//
//int Out_Queue(QUEUE* p)
//{
//	if (Rdptr == NULL) return -1;
//	else
//	{
//		QUEUE* temp = Rdptr;
//		*p = *temp;
//		Rdptr = Rdptr->next;
//		Q_cnt--;
//		free(temp);
//
//		if (Rdptr == 0) Wrptr = NULL;
//	}
//}
//
//int Print_Queue(void)
//{
//	QUEUE* temp = Rdptr;
//	int n = 0;
//	printf("Rdptr=%#p\n", Rdptr);
//	for (;;) {
//		if (temp == NULL) break;
//		printf("Addr=%#p, num=%d, next=%#p\n", temp, temp->num, temp->next);
//		temp = temp->next;
//		n++;
//	}
//	return n;
//}
//
//int Count_Full_Data_Queue(void)
//{
//	return Q_cnt;
//}
//
//void main(void)
//{
//	int i;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("Queue Result = %d\n", In_Queue(&a[i]));
//		printf("Print Result = %d, ", Print_Queue());
//		printf("Full = %d\n", Count_Full_Data_Queue());
//	}
//
//	for (i = 0; i < 2; i++)
//	{
//		printf("Dequeue Result = %d\n", Out_Queue(&a[i]));
//		printf("Print Result = %d, ", Print_Queue());
//		printf("Full = %d\n", Count_Full_Data_Queue());
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("Queue Result = %d\n", In_Queue(&a[i]));
//		printf("Print Result = %d, ", Print_Queue());
//		printf("Full = %d\n", Count_Full_Data_Queue());
//	}
//
//	for (i = 0; i < 7; i++)
//	{
//		printf("Dequeue Result = %d\n", Out_Queue(&a[i]));
//		printf("Print Result = %d, ", Print_Queue());
//		printf("Full = %d\n", Count_Full_Data_Queue());
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("Queue Result = %d\n", In_Queue(&a[i]));
//		printf("Print Result = %d, ", Print_Queue());
//		printf("Full = %d\n", Count_Full_Data_Queue());
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("Dequeue Result = %d\n", Out_Queue(&a[i]));
//		printf("Print Result = %d, ", Print_Queue());
//		printf("Full = %d\n", Count_Full_Data_Queue());
//	}
//}
//
//#endif
//
///***********************************************************/
//// [3-1] �� ��� ���� �ڷᱸ�� - ���� Ʈ��
///***********************************************************/
//
//#if 0
//
///***********************************************************/
//// [3-1.1] ���� Tree�� �μ�
///***********************************************************/
//
//#if 01
//
//#include <stdio.h>
//
//struct node
//{
//	const char* name;
//	struct node* left;
//	struct node* right;
//};
//
//void Print_All_Node1(struct node* p);
//void Print_All_Node2(struct node* p);
//void Print_All_Node3(struct node* p);
//
//void main(void)
//{
//	struct node root, node1, node2, node3, node4;
//
//	root.left = &node1;
//	root.right = &node2;
//	root.name = "root";
//	node1.left = &node3;
//	node1.right = &node4;
//	node1.name = "node1";
//	node2.left = NULL;
//	node2.right = NULL;
//	node2.name = "node2";
//	node3.left = NULL;
//	node3.right = NULL;
//	node3.name = "node3";
//	node4.left = NULL;
//	node4.right = NULL;
//	node4.name = "node4";
//
//	printf("In-order Traverse===============\n");
//	Print_All_Node1(&root);
//	printf("Pre-order Traverse===============\n");
//	Print_All_Node2(&root);
//	printf("Post-order Traverse===============\n");
//	Print_All_Node3(&root);
//}
//
//void Print_All_Node1(struct node* p)
//{
//	if (p->left) Print_All_Node1(p->left);
//	printf("Name = %s\n", p->name);
//	if (p->right) Print_All_Node1(p->right);
//}
//
//void Print_All_Node2(struct node* p)
//{
//	printf("Name = %s\n", p->name);
//	if (p->left) Print_All_Node2(p->left);
//	if (p->right) Print_All_Node2(p->right);
//}
//
//void Print_All_Node3(struct node* p)
//{
//	if (p->left) Print_All_Node3(p->left);
//	if (p->right) Print_All_Node3(p->right);
//	printf("Name = %s\n", p->name);
//}
//
//#endif
//
///***********************************************************/
//// [3-1.2] ���� Ʈ���� ���� �⺻ �Լ���
///***********************************************************/
//
//#if 01
//
//#include <stdio.h>
//#include <string.h>
//#include <conio.h>
//#include <malloc.h>
//
//typedef struct _score
//{
//	int id;
//	int jumsu;
//	char name[10];
//	struct _score* left;
//	struct _score* right;
//}SCORE;
//
//SCORE* Root = (SCORE*)0x0;
//
//#define MAX_ST		20
//
//// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�
//
//void Print_All_Node(SCORE* p);
//void Delete_All_Node(SCORE* p);
//int Insert_Node(SCORE* head, SCORE* d);
//SCORE* Search_Node(SCORE* head, int id);
//int Delete_Node(SCORE* head, int id);
//SCORE* Creat_Node(SCORE* d);
//int Create_Data(SCORE* p);
//
//SCORE test[MAX_ST] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
//							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"}, \
//							   {15, 90, "ki"}, {11, 20, "kong"}, {14, 40, "shin"}, {12, 50, "son"}, {17, 48, "lee"}, \
//							   {20, 100, "min"}, {19, 80, "you"}, {13, 45, "song"}, {16, 54, "no"}, {18, 100, "yang"} };
//
//int Create_Data(SCORE* p)
//{
//	printf("\n����� �Է��Ͻÿ� => ");
//	scanf("%d", &p->id);
//	fflush(stdin);
//	printf("�̸��� �Է��Ͻÿ� => ");
//	scanf("%s", p->name);
//	fflush(stdin);
//	printf("������ �Է��Ͻÿ� => ");
//	scanf("%d", &p->jumsu);
//	fflush(stdin);
//	p->left = (SCORE*)0x0;
//	p->right = (SCORE*)0x0;
//
//	return 1;
//}
//
//void Print_All_Node(SCORE* p)
//{
//	if (p == (SCORE*)0)
//	{
//		printf("No Data\n");
//		return;
//	}
//
//	if (p->left) Print_All_Node(p->left);
//	printf("addr=0x%.8X, ID=%d, NAME=%s, SCORE=%d, left=0x%.8X, right=0x%.8X\n", p, p->id, p->name, p->jumsu, p->left, p->right);
//	if (p->right) Print_All_Node(p->right);
//}
//
//#endif
//
///***********************************************************/
//// [3-1.3] ������ �ϳ��� �����Ͽ� Linked List�� �߰��ϴ� �Լ� (calloc ���)
///***********************************************************/
//
//#if 0
//
//SCORE* Creat_Node(SCORE* d)
//{
//	SCORE* p;
//
//	p = calloc(1, sizeof(SCORE));
//	if (p == (void*)0x0) return p;
//	*p = *d;
//	p->left = (SCORE*)0x0;
//	p->right = (SCORE*)0x0;
//
//	return p;
//}
//
//int Insert_Node(SCORE* head, SCORE* d)
//{
//
//
//
//
//
//
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
//		Print_All_Node(Root);
//	}
//}
//
//#endif
//
///***********************************************************/
//// [3-1.4] �־��� ����� node�� ã�Ƽ� ����� �ַθ� �����ϴ� �Լ�
///***********************************************************/
//
//#if 0
//
//SCORE* Search_Node(SCORE* head, int id)
//{
//
//
//
//
//
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//	SCORE* p;
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
//	}
//
//	Print_All_Node(Root);
//
//	printf("Search Result = 0x%.8X\n", p = Search_Node(Root, 1));
//	if (p) 	printf("addr=0x%.8X, ID=%d, NAME=%s, SCORE=%d, left=0x%.8X, right=0x%.8X\n", p, p->id, p->name, p->jumsu, p->left, p->right);
//
//	printf("Search Result = 0x%.8X\n", p = Search_Node(Root, 10));
//	if (p) 	printf("addr=0x%.8X, ID=%d, NAME=%s, SCORE=%d, left=0x%.8X, right=0x%.8X\n", p, p->id, p->name, p->jumsu, p->left, p->right);
//
//	printf("Search Result = 0x%.8X\n", p = Search_Node(Root, 9));
//	if (p) 	printf("addr=0x%.8X, ID=%d, NAME=%s, SCORE=%d, left=0x%.8X, right=0x%.8X\n", p, p->id, p->name, p->jumsu, p->left, p->right);
//
//	printf("Search Result = 0x%.8X\n", p = Search_Node(Root, 4));
//	if (p) 	printf("addr=0x%.8X, ID=%d, NAME=%s, SCORE=%d, left=0x%.8X, right=0x%.8X\n", p, p->id, p->name, p->jumsu, p->left, p->right);
//
//	printf("Search Result = 0x%.8X\n", p = Search_Node(Root, 7));
//	if (p) 	printf("addr=0x%.8X, ID=%d, NAME=%s, SCORE=%d, left=0x%.8X, right=0x%.8X\n", p, p->id, p->name, p->jumsu, p->left, p->right);
//}
//
//#endif
//
///***********************************************************/
//// [3-1.5] �־��� ����� node�� ã�Ƽ� �����ϴ� �Լ�
///***********************************************************/
//
//#if 0
//
//void Delete_All_Node(SCORE* p)
//{
//	if (p->left) Delete_All_Node(p->left);
//	if (p->right) Delete_All_Node(p->right);
//	if (p == Root) Root = (SCORE*)0;
//	free(p);
//}
//
//#endif
//
//#if 0
//
//// ������ ��� ��尡 leaf�� ��� ���� �Լ�
//// main �Լ����� "�ڽ� ���� ����� ����" �κи� ����
//
//int Delete_Node(SCORE* head, int id)
//{
//	SCORE* r;
//
//	r = Search_Node(head, id);
//
//	// Ž�� ���� 
//	if (r == NULL) return -1;
//
//	// ������ ��尡 leaf ��� ������ Root�� ��� Root�� NULL ����
//	// Root�� �ƴϸ� ���� ��带 �����ϰ� �ִ� �θ��� left �Ǵ� right�� NULL ����
//
//
//
//
//
//
//	free(r);
//	return 1;
//}
//
//#endif
//
//#if 0
//
//// ������ ��� ��尡 leaf �Ǵ� �ڽ��� �ϳ��� ��� ���� �Լ�
//// main �Լ����� "�ڽ� ���� ����� ����" �κа� "�ڽ��� 1�� ����� ����" ���� ����
//
//int Delete_Node(SCORE* head, int id)
//{
//	// �İ����� �ּҸ� ������ ����
//	SCORE* next;
//	SCORE* r;
//
//	r = Search_Node(head, id);
//
//	// Ž�� ���� 
//	if (r == NULL) return -1;
//
//	// [1] �İ��� ����
//	// leaf�̸� next�� NULL
//	// �ڽ��� �ϳ��� ������ ����� left �Ǵ� right�� �����ϴ� �İ��� �ּҸ� next�� ����
//	// �ڽ��� �ϳ��� NULL�� �ƴ� r->left �Ǵ� r->right�� �����Ѵ�
//
//
//
//
//
//	// [2] �ڽ��� �ϳ� �ִ� ����� �İ��� parent�� ������ ����� �θ�� ����
//	// �İ����� parent ��(next->parent)�� ������ ����� parent ��(r->parent)�� ����
//
//
//
//
//
//	// [3] ������ ����� �θ��� left �Ǵ� right�� �İ��� ����
//	// ������ ��尡 leaf ��� ������ Root�� ��� Root�� �İ��� �ּ�(next) ����
//	// Root�� �ƴϸ� ���� ��带 �����ϰ� �ִ� �θ��� left �Ǵ� right�� �İ��� �ּ�(next) ����
//	// leaf�� ���� �İ��ڿ� NULL�� �����Ͽ� �ξ����Ƿ� ������ �����Ͽ� �ۼ��� �ʿ䰡 ����
//
//
//
//
//
//
//	free(r);
//	return 1;
//}
//
//#endif
//
//#if 0
//
//// ������ ��� ��尡 �ڽ� �� �� ������ �����ϴ� ���� ���� �Լ�
//// main �Լ����� ��� �ܰ踦 ���� �ǽ�
//
//int Delete_Node(SCORE* head, int id)
//{
//	SCORE* next; 			// �İ��� ���� ����
//	SCORE* r;					// ������ ��� ���� ����
//
//	r = Search_Node(head, id);
//	if (r == NULL) return -1;
//
//	// �ڽ��� ���̸� �İ��� Ž�� �� �İ��ڸ� ������ ����� �����Ϳ� �����ϰ� ���������� r�� �İ��� �ּ� ����
//	if ((r->left != NULL) && (r->right != NULL))
//	{
//		// �ʿ�� �������� �����Ӱ� �����Ͽ� ���
//		// �İ��� ������ ������ ��忡 ������ �� parent, left, right�� ���� ���� ����� ���� �����ؾ� �Ѵ�
//		// �� ��ũ���� �״�� �����ϰ� ������ ������ �����Ͽ��� �Ѵ�
//
//
//
//
//
//
//
//	}
//
//	// �ڽ��� ���̸� r�� ������ ��� �ּҰ� ����Ǿ� �ְ� �ϳ��ų� leaf�̸� ó������ ���� ����� ��� ����
//	// ���� �Ʒ� �ڵ�� �ڽ� ���� �����ϰ� ���� leaf �� �ڽ� �ϳ��� ��� ���� �ڵ�� ������
//
//	if (r->left) next = r->left;
//	else next = r->right;
//
//	if (next) next->parent = r->parent;
//
//	if (r != Root)
//	{
//		if (r == r->parent->left) r->parent->left = next;
//		else  r->parent->right = next;
//	}
//
//	else
//	{
//		Root = next;
//	}
//
//	free(r);
//	return 1;
//}
//
//#endif
//
//#if 0
//
//int Delete_Node(SCORE* head, int id)
//{
//	SCORE* p = head;
//	SCORE* prev = Root;
//	SCORE* next;
//	SCORE* temp;
//
//	while (p != (SCORE*)0)
//	{
//		if (id == p->id) break;
//		prev = p;
//		if (id > p->id) p = p->right;
//		else p = p->left;
//	}
//
//	// Ž�� ���� 
//
//	if (p == (SCORE*)0) return -1;
//
//	// Leaf Node ����
//
//	if ((p->left == (SCORE*)0) && (p->right == (SCORE*)0))
//	{
//
//
//
//
//
//
//	}
//
//	// Single Child Node ����
//
//	else if ((p->left == (SCORE*)0) || (p->right == (SCORE*)0))
//	{
//
//
//
//
//
//
//	}
//
//	// �ڽ��� ���� Node ����
//
//	else
//	{
//
//
//
//
//
//
//	}
//
//	free(p);
//	return 1;
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//
//	/* �ڽ� ���� ����� ���� */
//
//#if 0
//
//	// 1. Root Only ����
//
//	printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", 0, r = Insert_Node(Root, &test[0]), test[0].id);
//	Print_All_Node(Root);
//	printf("Delete Node #10 Result = %d, Root = %d\n", Delete_Node(Root, 10), Root->id);
//	Print_All_Node(Root);
//
//#endif
//
//#if 0
//
//	// 2. Left Leaf ��� ���� 
//
//	for (i = 0; i < 7; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
//	Print_All_Node(Root);
//	printf("Delete Node #3 Result = %d, Root = %d\n", Delete_Node(Root, 3), Root->id);
//	printf("Delete Node #1 Result = %d, Root = %d\n", Delete_Node(Root, 1), Root->id);
//	Print_All_Node(Root);
//	Delete_All_Node(Root);
//
//#endif
//
//#if 0
//
//	// 3. Right Leaf ��� ���� 
//
//	for (i = 0; i < 20; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
//	Print_All_Node(Root);
//	printf("Delete Node #13 Result = %d, Root = %d\n", Delete_Node(Root, 13), Root->id);
//	printf("Delete Node #9 Result = %d, Root = %d\n", Delete_Node(Root, 9), Root->id);
//	Print_All_Node(Root);
//	Delete_All_Node(Root);
//
//#endif
//
//	/* �ڽ��� 1�� ����� ���� */
//
//#if 0
//
//	// 1. Left�� �ִ� Root ���� 
//
//	for (i = 0; i < 10; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
//	Print_All_Node(Root);
//	printf("Delete Node #10 Result = %d, Root = %d\n", Delete_Node(Root, 10), Root->id);
//	Print_All_Node(Root);
//	Delete_All_Node(Root);
//
//#endif
//
//#if 0
//
//	// 2. Right�� �ִ� Root ���� 
//
//	printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", 0, r = Insert_Node(Root, &test[0]), test[0].id);
//	for (i = 10; i < 20; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
//	Print_All_Node(Root);
//	printf("Delete Node #10 Result = %d, Root = %d\n", Delete_Node(Root, 10), Root->id);
//	printf("Delete Node #8 Result = %d, Root = %d\n", Delete_Node(Root, 8), Root->id);
//	Print_All_Node(Root);
//	Delete_All_Node(Root);
//
//#endif
//
//#if 0
//
//	// 3. Left�� �ִ� ��� ���� 
//
//	for (i = 0; i < 20; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
//	Print_All_Node(Root);
//	printf("Delete Node #7 Result = %d, Root = %d\n", Delete_Node(Root, 7), Root->id);
//	printf("Delete Node #19 Result = %d, Root = %d\n", Delete_Node(Root, 19), Root->id);
//	printf("Delete Node #14 Result = %d, Root = %d\n", Delete_Node(Root, 14), Root->id);
//	Print_All_Node(Root);
//	Delete_All_Node(Root);
//
//#endif
//
//#if 0
//
//	// 4. Right�� �ִ� ��� ���� 
//
//	for (i = 0; i < 20; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
//	Print_All_Node(Root);
//	printf("Delete Node #5 Result = %d, Root = %d\n", Delete_Node(Root, 5), Root->id);
//	printf("Delete Node #12 Result = %d, Root = %d\n", Delete_Node(Root, 12), Root->id);
//	printf("Delete Node #11 Result = %d, Root = %d\n", Delete_Node(Root, 11), Root->id);
//	Print_All_Node(Root);
//	Delete_All_Node(Root);
//
//#endif
//
//	/* �ڽ��� 2�� ����� ����  */
//
//#if 0
//
//	// 1. Root ���� 
//
//	for (i = 0; i < 20; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
//	Print_All_Node(Root);
//	printf("Delete Node #10 Result = %d, Root = %d\n", Delete_Node(Root, 10), Root->id);
//	Print_All_Node(Root);
//	Delete_All_Node(Root);
//
//#endif
//
//#if 0
//
//	// 2. �߰� ��� ���� 
//
//	for (i = 0; i < 15; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
//	Print_All_Node(Root);
//	printf("Delete Node #2 Result = %d, Root = %d\n", Delete_Node(Root, 2), Root->id);
//	Print_All_Node(Root);
//	printf("Delete Node #15 Result = %d, Root = %d\n", Delete_Node(Root, 15), Root->id);
//	Print_All_Node(Root);
//	printf("Delete Node #3 Result = %d, Root = %d\n", Delete_Node(Root, 3), Root->id);
//	Print_All_Node(Root);
//	printf("Delete Node #4 Result = %d, Root = %d\n", Delete_Node(Root, 4), Root->id);
//	Print_All_Node(Root);
//	Delete_All_Node(Root);
//
//#endif
//}
//
//#endif
//
//#endif
//
///***********************************************************/
//// [3-2] Hash Table
///***********************************************************/
//
//#if 0
//
///***********************************************************/
//// [3-2.1] Hash Table�� ���� �⺻ �Լ���
///***********************************************************/
//
//#if 01
//
//#include <stdio.h>
//#include <string.h>
//#include <conio.h>
//
//#include <malloc.h>
//
//typedef struct _score
//{
//	int id;
//	int jumsu;
//	char name[10];
//}SCORE;
//
//#define MAX_ST		20
//#define HASH_KEY	10
//#define STEP		1
//
//SCORE Hash_table[MAX_ST];
//
//// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�
//
//
//
//int Create_Data(SCORE* p);
//int Get_Hash_Key(int id);
//void Init_Hash_Table(void);
//void Print_All_Data(void);
//int Insert_Data(SCORE* d);
//SCORE* Search_Data(int id);
//int Delete_Data(int id);
//
//SCORE test[MAX_ST + 2] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
//							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"}, \
//							   {15, 90, "ki"}, {11, 20, "kong"}, {14, 40, "shin"}, {12, 50, "son"}, {17, 48, "lee"}, \
//							   {20, 100, "min"}, {19, 80, "you"}, {13, 45, "song"}, {16, 54, "no"}, {18, 100, "yang"}, \
//							   {21, 58, "seo"}, {23, 88, "oh"} };
//
//int Create_Data(SCORE* p)
//{
//	printf("\n����� �Է��Ͻÿ� => ");
//	scanf("%d", &p->id);
//	fflush(stdin);
//	printf("�̸��� �Է��Ͻÿ� => ");
//	scanf("%s", p->name);
//	fflush(stdin);
//	printf("������ �Է��Ͻÿ� => ");
//	scanf("%d", &p->jumsu);
//	fflush(stdin);
//
//	return 1;
//}
//
//int Get_Hash_Key(int id)
//{
//	return id % HASH_KEY;
//}
//
//void Init_Hash_Table(void)
//{
//	int i;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		Hash_table[i].id = -1;
//	}
//}
//
//#endif
//
//#if 0
//
//void Print_All_Data(void)
//{
//	int i;
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (Hash_table[i].id != -1) printf("[%d] ID: %d, NAME: %s\n", i, Hash_table[i].id, Hash_table[i].name);
//	}
//}
//
//#endif
//
///***********************************************************/
//// [3-2.2] Insert => Open Address ���
///***********************************************************/
//
//#if 0
//
//int Insert_Data(SCORE* d) {
//	int i, idx = Get_Hash_Key(d->id);
//	for (i = 0; i < MAX_ST; i++) {
//		if (Hash_table[idx].id == -1) {//��� ã�� ����
//			Hash_table[idx] = *d;
//			return idx;
//		}
//		idx = idx + STEP;
//		if (idx >= MAX_ST) idx = 0;
//	}
//	return -1;//������, ����
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//
//	Init_Hash_Table();
//
//	for (i = 0; i < (MAX_ST + 2); i++)
//	{
//		printf("[Loop: %d] Inserted Position=%d, ID=%d\n", i, r = Insert_Data(&test[i]), test[i].id);
//		Print_All_Data();
//	}
//}
//
//#endif
//
///***********************************************************/
//// [3-2.3] Search
///***********************************************************/
//
//#if 01
//
//SCORE* Search_Data(int id) {
//	int i, idx = Get_Hash_Key(id);
//	for (i = 0; i < MAX_ST; i++) {
//		if (Hash_table[idx].id == id) return &Hash_table[idx];//ã�� ����
//		if (Hash_table[idx].id == -1) break;//ã�� ����
//		idx = idx + STEP;
//		if (idx >= MAX_ST) idx = 0;
//	}
//	return NULL;//�ش� ��� ����
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//	SCORE* p;
//
//	Init_Hash_Table();
//
//	for (i = 0; i < 15; i++)
//	{
//		printf("[Loop: %d] Inserted Position=%d, ID=%d\n", i, r = Insert_Data(&test[i]), test[i].id);
//	}
//
//	Print_All_Data();
//	printf("Serch Result=0x%.8X\n", p = Search_Data(3));
//	if (p) printf("ID=%d, NAME=%s\n", p->id, p->name);
//	printf("Serch Result=0x%.8X\n", p = Search_Data(12));
//	if (p) printf("ID=%d, NAME=%s\n", p->id, p->name);
//	printf("Serch Result=0x%.8X\n", p = Search_Data(25));
//	if (p) printf("ID=%d, NAME=%s\n", p->id, p->name);
//}
//
//#endif
//
///***********************************************************/
//// [3-2.4] Delete �Լ��� ��
///***********************************************************/
//
//#if 0
//
//int Delete_Data(int id)
//{
//	SCORE* p;
//
//	p = Search_Data(id);
//	if (p == (SCORE*)0) return -1;
//	p->id = -1;
//	return 1;
//}
//
//#endif
//
///***********************************************************/
//// [3-2.5] ���� ��� ID�� -2�� �ϵ��� delete �Լ� ���踦 �ٽ� �����Ѵ�
//// ���� ������ �޶����鼭 Insert ������ �����Ǿ�� �Ѵ�. 
//// ������ Insert �Լ��� ����Ǹ� [3-3.2]���� ����� Insert_Data �Լ��� �����Ѵ�
///***********************************************************/
//
//#if 01
//
//int Delete_Data(int id)
//{
//	SCORE* p;
//
//	p = Search_Data(id);
//	if (p == (SCORE*)0) return -1;
//	p->id = -2;
//	return 1;
//}
//
//int Insert_Data(SCORE* d)
//{
//	int Idx;
//	int key;
//
//	Idx = key = Get_Hash_Key(d->id);
//
//	for (;;)
//	{
//		if (Hash_table[Idx].id < 0)
//		{
//			Hash_table[Idx] = *d;
//			return Idx;
//		}
//
//		Idx += STEP;
//		if (Idx == key) return -1;
//		if (Idx > MAX_ST) Idx = 0;
//	}
//}
//
//void Print_All_Data(void)
//{
//	int i;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if (Hash_table[i].id > 0 ) printf("[%d] ID: %d, NAME: %s\n", i, Hash_table[i].id, Hash_table[i].name);
//	}
//}
//
//#endif
//
//#if 01
//
//void main(void)
//{
//	int i;
//	int r;
//
//	Init_Hash_Table();
//
//	for (i = 0; i < 15; i++)
//	{
//		printf("[Loop: %d] Inserted Position=%d, ID=%d\n", i, r = Insert_Data(&test[i]), test[i].id);
//	}
//
//	Print_All_Data();
//	printf("[3] Delete Result=%d\n", r = Delete_Data(3));
//	printf("[12] Delete Result=%d\n", r = Delete_Data(12));
//	printf("[25] Delete Result=%d\n", r = Delete_Data(25));
//	printf("[3] Delete Result=%d\n", r = Delete_Data(3));
//	printf("[12] Delete Result=%d\n", r = Delete_Data(12));
//	Print_All_Data();
//
//	printf("Inserted Position=%d, ID=%d\n", r = Insert_Data(&test[13]), test[13].id);
//	printf("Inserted Position=%d, ID=%d\n", r = Insert_Data(&test[5]), test[5].id);
//	Print_All_Data();
//}
//
//#endif
//
//#endif
//
///***********************************************************/
//// [3-2.6] Hash Table => �ؽ� Ű �߻� �Լ��� ����
///***********************************************************/
//
//#if 0
//
///***********************************************************/
//// [3-2.6] Hash Table�� ���� �⺻ �Լ���
///***********************************************************/
//
//#if 01
//
//#include <stdio.h>
//#include <string.h>
//#include <conio.h>
//#include <malloc.h>
//
//typedef struct _score
//{
//	int id;
//	int jumsu;
//	char name[10];
//}SCORE;
//
//#define MAX_ST		20
//
//#if 01
//#define HASH_KEY	10
//#define STEP		1
//#else
//#define HASH_KEY	7  // ������ �Ҽ�
//#define STEP		1  // ���̺��� ��Ҽ��� ���� �� ������ ��
//#endif
//
//SCORE Hash_table[MAX_ST];
//
//// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�
//
//
//
//int Create_Data(SCORE* p);
//int Get_Hash_Key(int id);
//void Init_Hash_Table(void);
//void Print_All_Data(void);
//int Insert_Data(SCORE* d);
//SCORE* Search_Data(int id);
//int Delete_Data(int id);
//
//SCORE test[MAX_ST + 2] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
//							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"}, \
//							   {15, 90, "ki"}, {11, 20, "kong"}, {14, 40, "shin"}, {12, 50, "son"}, {17, 48, "lee"}, \
//							   {20, 100, "min"}, {19, 80, "you"}, {13, 45, "song"}, {16, 54, "no"}, {18, 100, "yang"}, \
//							   {21, 58, "seo"}, {23, 88, "oh"} };
//
//int Create_Data(SCORE* p)
//{
//	printf("\n����� �Է��Ͻÿ� => ");
//	scanf("%d", &p->id);
//	fflush(stdin);
//	printf("�̸��� �Է��Ͻÿ� => ");
//	scanf("%s", p->name);
//	fflush(stdin);
//	printf("������ �Է��Ͻÿ� => ");
//	scanf("%d", &p->jumsu);
//	fflush(stdin);
//
//	return 1;
//}
//
//int Get_Hash_Key(int id)
//{
//	return id % HASH_KEY;
//}
//
//void Init_Hash_Table(void)
//{
//	int i;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		Hash_table[i].id = -1;
//	}
//}
//
//void Print_All_Data(void)
//{
//	int i;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		if ((Hash_table[i].id != -1) && (Hash_table[i].id != -2)) printf("[%d] ID: %d, NAME: %s\n", i, Hash_table[i].id, Hash_table[i].name);
//	}
//}
//
//int Delete_Data(int id)
//{
//	SCORE* p;
//
//	p = Search_Data(id);
//	if (p == (SCORE*)0) return -1;
//	p->id = -2;
//	return 1;
//}
//
//int Insert_Data(SCORE* d)
//{
//	int pos;
//	int cnt = 0;
//	static int insert_cnt;
//
//	pos = Get_Hash_Key(d->id);
//
//	for (;;)
//	{
//		if ((Hash_table[pos].id == -1) || (Hash_table[pos].id == -2))
//		{
//			Hash_table[pos] = *d;
//			insert_cnt += cnt + 1;
//			printf("cnt = %d, total insert count = %d\n", cnt + 1, insert_cnt);
//			return pos;
//		}
//
//		pos += STEP;
//		cnt++;
//		if (cnt >= MAX_ST) return -1;
//		if (pos >= MAX_ST) pos %= MAX_ST;
//	}
//}
//
//SCORE* Search_Data(int id)
//{
//	int pos;
//	int cnt = 0;
//	static int search_cnt;
//
//	pos = Get_Hash_Key(id);
//
//	for (;;)
//	{
//		if (Hash_table[pos].id == id) return &Hash_table[pos];
//		if (Hash_table[pos].id == -1) return (SCORE*)0;
//		pos += STEP;
//		cnt++;
//		search_cnt += cnt + 1;
//		printf("cnt = %d, total search count = %d\n", cnt + 1, search_cnt);
//		if (cnt > MAX_ST) return (SCORE*)0;
//		if (pos > MAX_ST) pos %= MAX_ST;
//	}
//}
//
//#endif
//
///***********************************************************/
//// [3-2.6] Insert ȿ��
///***********************************************************/
//
//#if 01
//
//void main(void)
//{
//	int i;
//	int r;
//
//	Init_Hash_Table();
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		printf("[Loop: %d] Inserted Position=%d, ID=%d\n", i, r = Insert_Data(&test[i]), test[i].id);
//		Print_All_Data();
//	}
//}
//
//#endif
//
///***********************************************************/
//// [3-2.7] Search ȿ��
///***********************************************************/
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//	SCORE* p;
//
//	Init_Hash_Table();
//
//	for (i = 0; i < 15; i++)
//	{
//		printf("[Loop: %d] Inserted Position=%d, ID=%d\n", i, r = Insert_Data(&test[i]), test[i].id);
//	}
//
//	Print_All_Data();
//	printf("Serch Result=0x%.8X\n", p = Search_Data(3));
//	if (p) printf("ID=%d, NAME=%s\n", p->id, p->name);
//	printf("Serch Result=0x%.8X\n", p = Search_Data(12));
//	if (p) printf("ID=%d, NAME=%s\n", p->id, p->name);
//	printf("Serch Result=0x%.8X\n", p = Search_Data(25));
//	if (p) printf("ID=%d, NAME=%s\n", p->id, p->name);
//}
//
//#endif
//
///***********************************************************/
//// [3-2.8] Insert, Search, Delete
///***********************************************************/
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//
//	Init_Hash_Table();
//
//	for (i = 0; i < 15; i++)
//	{
//		printf("[Loop: %d] Inserted Position=%d, ID=%d\n", i, r = Insert_Data(&test[i]), test[i].id);
//	}
//
//	Print_All_Data();
//	printf("[3] Delete Result=%d\n", r = Delete_Data(3));
//	printf("[12] Delete Result=%d\n", r = Delete_Data(12));
//	printf("[25] Delete Result=%d\n", r = Delete_Data(25));
//	printf("[3] Delete Result=%d\n", r = Delete_Data(3));
//	printf("[12] Delete Result=%d\n", r = Delete_Data(12));
//	Print_All_Data();
//
//	printf("Inserted Position=%d, ID=%d\n", r = Insert_Data(&test[13]), test[13].id);
//	printf("Inserted Position=%d, ID=%d\n", r = Insert_Data(&test[5]), test[5].id);
//	Print_All_Data();
//}
//
//#endif
//
//#endif
//
///***********************************************************/
//// [3-2.9] Hash Table => Chainning ����� ����
///***********************************************************/
//
//#if 01
//
///***********************************************************/
//// [3-2.9] Hash Table�� ���� �⺻ �Լ���
///***********************************************************/
//
//#if 01
//
//#include <stdio.h>
//#include <string.h>
//#include <conio.h>
//#include <malloc.h>
//
//typedef struct _score
//{
//	int id;
//	int jumsu;
//	char name[10];
//	struct _score* next;
//}SCORE;
//
//#define MAX_ST		20
//#define HASH_KEY	5
//
//SCORE Hash_table[HASH_KEY];
//
//
//
//int Create_Data(SCORE* p);
//int Get_Hash_Key(int id);
//void Init_Hash_Table(void);
//void Print_All_Data(void);
//int Insert_Data(SCORE* d);
//SCORE* Search_Data(int id);
//int Delete_Data(int id);
//
//SCORE test[MAX_ST + 2] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
//							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"}, \
//							   {15, 90, "ki"}, {11, 20, "kong"}, {14, 40, "shin"}, {12, 50, "son"}, {17, 48, "lee"}, \
//							   {20, 100, "min"}, {19, 80, "you"}, {13, 45, "song"}, {16, 54, "no"}, {18, 100, "yang"}, \
//							   {21, 58, "seo"}, {23, 88, "oh"} };
//
//int Create_Data(SCORE* p)
//{
//	printf("\n����� �Է��Ͻÿ� => ");
//	scanf("%d", &p->id);
//	fflush(stdin);
//	printf("�̸��� �Է��Ͻÿ� => ");
//	scanf("%s", p->name);
//	fflush(stdin);
//	printf("������ �Է��Ͻÿ� => ");
//	scanf("%d", &p->jumsu);
//	fflush(stdin);
//
//	return 1;
//}
//
//int Get_Hash_Key(int id)
//{
//	return id % HASH_KEY;
//}
//
//void Init_Hash_Table(void)
//{
//	int i;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		Hash_table[i].next = (SCORE*)0;
//	}
//}
//
//void Print_All_Data(void)
//{
//	int i;
//	SCORE* p;
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		p = Hash_table[i].next;
//
//		for (;;)
//		{
//			if (p == (SCORE*)0) break;
//			printf("[%d] address:0x%.8X, ID: %d, NAME: %s, next: 0x%.8X\n", i, p, p->id, p->name, p->next);
//			p = p->next;
//		}
//	}
//}
//
//#endif
//
///***********************************************************/
//// [3-2.10] Insert
///***********************************************************/
//
//#if 01
//
////�������� �����ؼ� ����
//int Insert_Data(SCORE* d)
//{
//	int idx = Get_Hash_Key(d->id);
//	SCORE* head = &Hash_table[idx];
//
//	for (;;)
//	{
//		if (head->next == 0 || head->next->id > d->id)
//		{
//			SCORE* temp = (SCORE*)malloc(sizeof(SCORE));
//			if (temp == NULL) return -1;
//			
//			*temp = *d;
//			temp->next = head->next;
//			head->next = temp;
//			return 1;
//		}
//
//		else if (head->next->id == d->id) return -2;
//
//		else
//			head = head->next;
//		
//	}
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//
//	Init_Hash_Table();
//
//	for (i = 0; i < MAX_ST; i++)
//	{
//		printf("[Loop: %d] Insert Result=%d, ID=%d\n", i, r = Insert_Data(&test[i]), test[i].id);
//		Print_All_Data();
//	}
//}
//
//#endif
//
///***********************************************************/
//// [3-2.11] Delete
///***********************************************************/
//
//#if 01
//
//int Delete_Data(int id)
//{
//	int idx = Get_Hash_Key(id);
//	SCORE* head = &Hash_table[idx];
//
//	for (;;)
//	{
//		if (head->next == NULL || head->next->id > id)
//			return -1;
//
//		else if (head->next->id == id)
//		{
//			SCORE* p = head->next;
//			head->next = head->next->next;
//			free(p);
//			return 1;
//		}
//		else
//			head = head->next;
//	}
//}
//
//#endif
//
//#if 0
//
//void main(void)
//{
//	int i;
//	int r;
//
//	Init_Hash_Table();
//
//	for (i = 0; i < MAX_ST; i++) printf("[Loop: %d] Insert Result=%d, ID=%d\n", i, r = Insert_Data(&test[i]), test[i].id);
//	Print_All_Data();
//
//	printf("[1] Delete Result=%d\n", r = Delete_Data(1));
//	printf("[11] Delete Result=%d\n", r = Delete_Data(11));
//	printf("[16] Delete Result=%d\n", r = Delete_Data(16));
//	printf("[9] Delete Result=%d\n", r = Delete_Data(9));
//	printf("[10] Delete Result=%d\n", r = Delete_Data(10));
//	Print_All_Data();
//
//	printf("Inserted Position=%d, ID=%d\n", r = Insert_Data(&test[1]), test[1].id);
//	printf("Inserted Position=%d, ID=%d\n", r = Insert_Data(&test[11]), test[11].id);
//	Print_All_Data();
//}
//
//#endif
//
///***********************************************************/
//// [3-2.12] Search
///***********************************************************/
//
//#if 01
//
//SCORE* Search_Data(int id)
//{
//	int idx = Get_Hash_Key(id);
//	SCORE* head = &Hash_table[idx];
//
//	for (;;)
//	{
//		if (head == NULL || head->id > id) 
//			return NULL;
//
//		else if (head->id == id)
//		{
//			return head;
//		}
//		else
//			head = head->next;
//	}
//}
//
//#endif
//
//#if 01
//
//void main(void)
//{
//	int i;
//	int r;
//	SCORE* p;
//
//	Init_Hash_Table();
//
//	for (i = 0; i < MAX_ST; i++) printf("[Loop: %d] Insert Result=%d, ID=%d\n", i, r = Insert_Data(&test[i]), test[i].id);
//	Print_All_Data();
//
//	printf("Serch Result=0x%.8X\n", p = Search_Data(3));
//	if (p) printf("[%d] address:0x%.8X, ID: %d, NAME: %s, next: 0x%.8X\n", i, p, p->id, p->name, p->next);
//	printf("Serch Result=0x%.8X\n", p = Search_Data(12));
//	if (p) printf("[%d] address:0x%.8X, ID: %d, NAME: %s, next: 0x%.8X\n", i, p, p->id, p->name, p->next);
//	printf("Serch Result=0x%.8X\n", p = Search_Data(25));
//	if (p) printf("[%d] address:0x%.8X, ID: %d, NAME: %s, next: 0x%.8X\n", i, p, p->id, p->name, p->next);
//}
//
//#endif
//
//#endif
//
///***********************************************************/
//// [3-2.13] Hash Table => ���� ����� ���� Chainning ���
//// �ϼ��� ���� ������ �����Ͽ� ó������ ��� �缳���϶�
///***********************************************************/
//