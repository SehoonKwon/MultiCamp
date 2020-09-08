#pragma warning(disable: 4996)

/***********************************************************/
// [1-1] ����
/***********************************************************/

#if 0
#if 01

#include <stdio.h>
#include <string.h>

// ���Ŀ� ��� �� �ڷ�
typedef struct _score
{
	int id;
	int jumsu;
	char name[10];
}SCORE;

#define MAX_ST (10)

SCORE exam[MAX_ST] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"} };

int Print_All_Data(void);

int Compare_Id(SCORE* x, SCORE* y);
int Compare_Name(SCORE* x, SCORE* y);
int Compare_Jumsu(SCORE* x, SCORE* y);

int Sort_Bubble(SCORE* d, int n, int order, int (*comp)(SCORE* x, SCORE* y));
int Sort_Select(SCORE* d, int n, int order, int (*comp)(SCORE* x, SCORE* y));
int Sort_Insertion(SCORE* d, int n, int order, int (*comp)(SCORE* x, SCORE* y));
int Sort_Quick(SCORE* d, int order, int s, int e, int (*comp)(SCORE* x, SCORE* y));
int Sort_Merge(SCORE* d, SCORE* tmp, int order, int s, int e, int (*comp)(SCORE* x, SCORE* y));

int Print_All_Data(void)
{
	int i;

	for (i = 0; i < MAX_ST; i++)
	{
		printf("[%d] ID=%d, NAME=%s, SCORE=%d\n", i, exam[i].id, exam[i].name, exam[i].jumsu);
	}

	return i;
}

int Compare_Id(SCORE* x, SCORE* y)
{
	return x->id - y->id;
}

int Compare_Name(SCORE* x, SCORE* y)
{
	return strcmp(x->name, y->name);
}

int Compare_Jumsu(SCORE* x, SCORE* y)
{
	return x->jumsu - y->jumsu;
}

#endif

/***********************************************************/
// [1-1.1] Bubble Sort
/***********************************************************/

#if 0

int Sort_Bubble(SCORE* d, int n, int order, int (*comp)(SCORE* x, SCORE* y))
{



}

#endif

#if 0

void main(void)
{
	printf("Printed Data Count = %d\n", Print_All_Data());

	printf("===================================================\n");
	printf("Sorted Data Count = %d\n", Sort_Bubble(exam, 10, 1, Compare_Id));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("Sorted Data Count = %d\n", Sort_Bubble(exam, 10, -1, Compare_Id));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("===================================================\n");
	printf("Sorted Data Count = %d\n", Sort_Bubble(exam, 10, 1, Compare_Name));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("Sorted Data Count = %d\n", Sort_Bubble(exam, 10, -1, Compare_Name));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("===================================================\n");
	printf("Sorted Data Count = %d\n", Sort_Bubble(exam, 10, 1, Compare_Jumsu));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("Sorted Data Count = %d\n", Sort_Bubble(exam, 10, -1, Compare_Jumsu));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("===================================================\n");
}

#endif

/***********************************************************/
// [1-1.2] �ڷḦ ���� ���ķ� �����ϴ� �Լ�
/***********************************************************/

#if 0

int Sort_Select(SCORE* d, int n, int order, int (*comp)(SCORE* x, SCORE* y))
{



}

#endif

#if 0

void main(void)
{
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("===================================================\n");
	printf("Sorted Data Count = %d\n", Sort_Select(exam, 10, 1, Compare_Id));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("Sorted Data Count = %d\n", Sort_Select(exam, 10, -1, Compare_Id));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("===================================================\n");
	printf("Sorted Data Count = %d\n", Sort_Select(exam, 10, 1, Compare_Name));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("Sorted Data Count = %d\n", Sort_Select(exam, 10, -1, Compare_Name));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("===================================================\n");
	printf("Sorted Data Count = %d\n", Sort_Select(exam, 10, 1, Compare_Jumsu));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("Sorted Data Count = %d\n", Sort_Select(exam, 10, -1, Compare_Jumsu));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("===================================================\n");
}

#endif

/***********************************************************/
// [1-1.3] �ڷḦ ���� ���ķ� �����ϴ� �Լ�
/***********************************************************/

#if 0

int Sort_Insertion(SCORE* d, int n, int ord, int (*comp)(SCORE* x, SCORE* y))
{



}

#endif

#if 0

void main(void)
{
	printf("Printed Data Count = %d\n", Print_All_Data());

	printf("===================================================\n");
	printf("Sorted Data Count = %d\n", Sort_Insertion(exam, 10, 1, Compare_Id));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("Sorted Data Count = %d\n", Sort_Insertion(exam, 10, -1, Compare_Id));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("===================================================\n");
	printf("Sorted Data Count = %d\n", Sort_Insertion(exam, 10, 1, Compare_Name));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("Sorted Data Count = %d\n", Sort_Insertion(exam, 10, -1, Compare_Name));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("===================================================\n");
	printf("Sorted Data Count = %d\n", Sort_Insertion(exam, 10, 1, Compare_Jumsu));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("Sorted Data Count = %d\n", Sort_Insertion(exam, 10, -1, Compare_Jumsu));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("===================================================\n");
}

#endif

/***********************************************************/
// [1-1.4] Quick Sort �Լ� ����
/***********************************************************/

#if 0

int Sort_Quick(SCORE* d, int order, int s, int e, int (*comp)(SCORE* x, SCORE* y))
{




}

#endif

#if 0

void main(void)
{
	printf("Printed Data Count = %d\n", Print_All_Data());

	printf("===================================================\n");
	printf("Sorted Data Count = %d\n", Sort_Quick(exam, 1, 0, MAX_ST - 1, Compare_Id));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("Sorted Data Count = %d\n", Sort_Quick(exam, -1, 0, MAX_ST - 1, Compare_Id));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("===================================================\n");
	printf("Sorted Data Count = %d\n", Sort_Quick(exam, 1, 0, MAX_ST - 1, Compare_Name));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("Sorted Data Count = %d\n", Sort_Quick(exam, -1, 0, MAX_ST - 1, Compare_Name));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("===================================================\n");
	printf("Sorted Data Count = %d\n", Sort_Quick(exam, 1, 0, MAX_ST - 1, Compare_Jumsu));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("Sorted Data Count = %d\n", Sort_Quick(exam, -1, 0, MAX_ST - 1, Compare_Jumsu));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("===================================================\n");
}

#endif


/***********************************************************/
// [1-1.5] Merge Sort �Լ� ����
/***********************************************************/

#if 01

int Sort_Merge(SCORE* d, SCORE* tmp, int order, int s, int e, int (*comp)(SCORE* x, SCORE* y))
{





}

#endif

#if 01

SCORE tmp[MAX_ST];

void main(void)
{
	printf("Printed Data Count = %d\n", Print_All_Data());

	printf("===================================================\n");
	printf("Sorted Data Count = %d\n", Sort_Merge(exam, tmp, 1, 0, MAX_ST - 1, Compare_Id));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("Sorted Data Count = %d\n", Sort_Merge(exam, tmp, -1, 0, MAX_ST - 1, Compare_Id));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("===================================================\n");
	printf("Sorted Data Count = %d\n", Sort_Merge(exam, tmp, 1, 0, MAX_ST - 1, Compare_Name));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("Sorted Data Count = %d\n", Sort_Merge(exam, tmp, -1, 0, MAX_ST - 1, Compare_Name));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("===================================================\n");
	printf("Sorted Data Count = %d\n", Sort_Merge(exam, tmp, 1, 0, MAX_ST - 1, Compare_Jumsu));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("Sorted Data Count = %d\n", Sort_Merge(exam, tmp, -1, 0, MAX_ST - 1, Compare_Jumsu));
	printf("Printed Data Count = %d\n", Print_All_Data());
	printf("===================================================\n");
}
#endif

#endif

/***********************************************************/
// [1-2] ���� Ž��
/***********************************************************/

#if 0

#if 0

#include <stdio.h>
#include <string.h>

// ���� Ž���� ��� �� �ڷ�
typedef struct _score
{
	int id;
	int jumsu;
	char name[10];
}SCORE;

#define MAX_ST (10)

SCORE exam[MAX_ST] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"} };

int Print_All_Data(void);

int Compare_Id(SCORE* x, SCORE* y);
int Compare_Name(SCORE* x, SCORE* y);
int Compare_Jumsu(SCORE* x, SCORE* y);

int Sort_Bubble(SCORE* d, int n, int order, int (*comp)(SCORE* x, SCORE* y));
int Sort_Select(SCORE* d, int n, int order, int (*comp)(SCORE* x, SCORE* y));
int Sort_Insertion(SCORE* d, int n, int order, int (*comp)(SCORE* x, SCORE* y));
int Sort_Quick(SCORE* d, int order, int s, int e, int (*comp)(SCORE* x, SCORE* y));
int Sort_Merge(SCORE* d, SCORE* tmp, int order, int s, int e, int (*comp)(SCORE* x, SCORE* y));

int Print_All_Data(void)
{
	int i;

	for (i = 0; i < MAX_ST; i++)
	{
		printf("[%d] ID=%d, NAME=%s, SCORE=%d\n", i, exam[i].id, exam[i].name, exam[i].jumsu);
	}

	return i;
}

void Print_Data(int n)
{
	if ((n < 0) || (n >= MAX_ST)) return;
	printf("[%d] ID=%d, NAME=%s, SCORE=%d\n", n, exam[n].id, exam[n].name, exam[n].jumsu);
}

int Compare_Id(SCORE* x, SCORE* y)
{
	return x->id - y->id;
}

int Compare_Name(SCORE* x, SCORE* y)
{
	return strcmp(x->name, y->name);
}

int Compare_Jumsu(SCORE* x, SCORE* y)
{
	return x->jumsu - y->jumsu;
}

SCORE tmp[MAX_ST];

int Sort_Merge(SCORE* d, SCORE* tmp, int order, int s, int e, int (*comp)(SCORE* x, SCORE* y))
{
	int m, idx1, idx2, idxtmp;
	if (s >= e) return -1;

	m = (s + e) / 2;

	Sort_Merge(d, tmp, order, s, m, comp);
	Sort_Merge(d, tmp, order, m + 1, e, comp);

	idx1 = s; idx2 = m + 1; idxtmp = s;
	while (idx1 <= m && idx2 <= e)
	{
		if ((order * comp(&d[idx1], &d[idx2])) < 0) tmp[idxtmp++] = d[idx1++];
		else tmp[idxtmp++] = d[idx2++];
	}

	if (idx1 <= m) while (idx1 <= m) tmp[idxtmp++] = d[idx1++];
	else while (idx2 <= e) tmp[idxtmp++] = d[idx2++];

	for (idxtmp = s; idxtmp <= e; idxtmp++) d[idxtmp] = tmp[idxtmp];
	return e - s + 1;
}

#endif

/***********************************************************/
// [1-2.1] Binary Search �Լ� ����
/***********************************************************/

#if 0

int Binary_Search(SCORE* src, int s, int e, SCORE* d, int (*comp)(SCORE* x, SCORE* y))
{


}
#endif


#if 0
void main(void)
{
	int ret;
	SCORE d;

	printf("Binary Search Test\n");

	printf("Exam Data(Sort by ID)\n");
	Sort_Merge(exam, tmp, 1, 0, MAX_ST - 1, Compare_Id);
	Print_All_Data();
	printf("============================================\n");

	d.id = 1;
	printf("Binary Search (ID : 1) = %d\n", ret = Binary_Search(exam, 0, MAX_ST - 1, &d, Compare_Id));
	Print_Data(ret);

	d.id = 7;
	printf("Binary Search (ID : 7) = %d\n", ret = Binary_Search(exam, 0, MAX_ST - 1, &d, Compare_Id));
	Print_Data(ret);

	d.id = 10;
	printf("Binary Search (ID : 10) = %d\n", ret = Binary_Search(exam, 0, MAX_ST - 1, &d, Compare_Id));
	Print_Data(ret);

	d.id = 15;
	printf("Binary Search (ID : 15) = %d\n", ret = Binary_Search(exam, 0, MAX_ST - 1, &d, Compare_Id));
	Print_Data(ret);
	printf("============================================\n");

	printf("Exam Data(Sort by Name)\n");
	Sort_Merge(exam, tmp, 1, 0, MAX_ST - 1, Compare_Name);
	Print_All_Data();
	printf("============================================\n");

	strcpy(d.name, "moon");
	printf("Binary Search (Name : moon) = %d\n", ret = Binary_Search(exam, 0, MAX_ST - 1, &d, Compare_Name));
	Print_Data(ret);

	strcpy(d.name, "kim");
	printf("Binary Search (Name : kim) = %d\n", ret = Binary_Search(exam, 0, MAX_ST - 1, &d, Compare_Name));
	Print_Data(ret);

	strcpy(d.name, "song");
	printf("Binary Search (Name : song) = %d\n", ret = Binary_Search(exam, 0, MAX_ST - 1, &d, Compare_Name));
	Print_Data(ret);

	strcpy(d.name, "choi");
	printf("Binary Search (Name : choi) = %d\n", ret = Binary_Search(exam, 0, MAX_ST - 1, &d, Compare_Name));
	Print_Data(ret);
	printf("============================================\n");

}
#endif

/***********************************************************/
// [1-2.2] Binary Search ��� Lower bound Ž�� �Լ� ����
/***********************************************************/

#if 0
int Binary_Search_Lower(SCORE* src, int s, int e, SCORE* d, int (*comp)(SCORE* x, SCORE* y))
{



}
#endif

/***********************************************************/
// [1-2.3] Binary Search ��� Uppwer bound Ž�� �Լ� ����
/***********************************************************/
#if 0
int Binary_Search_Upper(SCORE* src, int s, int e, SCORE* d, int (*comp)(SCORE* x, SCORE* y))
{




}
#endif


#if 0
void main(void)
{
	int i;
	int lower, upper;
	SCORE ld, ud;

	printf("Binary Search Test(Upper, Lower bound)\n");

	printf("Exam Data(Sort by jumsu)\n");
	Sort_Merge(exam, tmp, 1, 0, MAX_ST - 1, Compare_Jumsu);
	Print_All_Data();
	printf("============================================\n");

	ld.jumsu = 75;
	ud.jumsu = 100;
	lower = Binary_Search_Lower(exam, 0, MAX_ST - 1, &ld, Compare_Jumsu);
	upper = Binary_Search_Upper(exam, 0, MAX_ST - 1, &ud, Compare_Jumsu);
	printf("Binary Search (Jumsu : 75~100) = (%d,%d)\n", lower, upper);
	for (i = lower; i <= upper; i++)
	{
		Print_Data(i);
	}

	ld.jumsu = 0;
	ud.jumsu = 74;
	lower = Binary_Search_Lower(exam, 0, MAX_ST - 1, &ld, Compare_Jumsu);
	upper = Binary_Search_Upper(exam, 0, MAX_ST - 1, &ud, Compare_Jumsu);
	printf("Binary Search (Jumsu : 0~74) = (%d,%d)\n", lower, upper);
	for (i = lower; i <= upper; i++)
	{
		Print_Data(i);
	}

	ld.jumsu = 51;
	ud.jumsu = 74;
	lower = Binary_Search_Lower(exam, 0, MAX_ST - 1, &ld, Compare_Jumsu);
	upper = Binary_Search_Upper(exam, 0, MAX_ST - 1, &ud, Compare_Jumsu);
	printf("Binary Search (Jumsu : 51~74) = (%d,%d)\n", lower, upper);
}
#endif

#endif

/***********************************************************/
// [1-3.1] ���� ����Ʈ - stack
/***********************************************************/

#if 0

#include <stdio.h>

#define MAX_STACK		10
#define STACK_EMPTY	MAX_STACK
#define STACK_FULL		0

int Push_Stack(int data);
int Pop_Stack(int* p);
int Print_Stack(void);
int Count_Full_Data_Stack(void);
int Count_Empty_Data_Stack(void);

int a[MAX_STACK + 1] = { 1,2,3,4,5,6,7,8,9,10,11 };
int Stack[MAX_STACK];
int Sptr = STACK_EMPTY;

int Push_Stack(int data)
{



}

int Pop_Stack(int* p)
{



}

int Print_Stack(void)
{
	int i;

	for (i = Sptr; i < MAX_STACK; i++)
	{
		printf("STACK[%d] = %d\n", i, Stack[i]);
	}

	return MAX_STACK - Sptr;
}

int Count_Full_Data_Stack(void)
{
	return STACK_EMPTY - Sptr;
}

int Count_Empty_Data_Stack(void)
{
	return Sptr - STACK_FULL;
}

void main(void)
{
	int i;

	for (i = 0; i < (MAX_STACK + 1); i++)
	{
		printf("%d, ", a[i]);
	}

	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("Push Result = %d\n", Push_Stack(a[i]));
		printf("Print Result = %d, ", Print_Stack());
		printf("Full = %d ", Count_Full_Data_Stack());
		printf("Empty = %d\n", Count_Empty_Data_Stack());
		printf("Sptr = %d\n", Sptr);
	}

	for (i = 0; i < 5; i++)
	{
		printf("Pop Result = %d\n", Pop_Stack(&a[i]));
		printf("Print Result = %d, ", Print_Stack());
		printf("Full = %d ", Count_Full_Data_Stack());
		printf("Empty = %d\n", Count_Empty_Data_Stack());
		printf("Sptr = %d\n", Sptr);
	}

	for (i = 0; i < (MAX_STACK + 1); i++)
	{
		printf("%d, ", a[i]);
	}

	printf("\n");

	for (i = 0; i < (MAX_STACK + 1); i++)
	{
		printf("Push Result = %d\n", Push_Stack(a[i]));
		printf("Print Result = %d, ", Print_Stack());
		printf("Full = %d ", Count_Full_Data_Stack());
		printf("Empty = %d\n", Count_Empty_Data_Stack());
		printf("Sptr = %d\n", Sptr);
	}

	for (i = 0; i < (MAX_STACK + 1); i++)
	{
		printf("Pop Result = %d\n", Pop_Stack(&a[i]));
		printf("Print Result = %d, ", Print_Stack());
		printf("Full = %d ", Count_Full_Data_Stack());
		printf("Empty = %d\n", Count_Empty_Data_Stack());
		printf("Sptr = %d\n", Sptr);
	}

	for (i = 0; i < (MAX_STACK + 1); i++)
	{
		printf("%d, ", a[i]);
	}

	printf("\n");
}

#endif

/***********************************************************/
// [1-3.2] ���� ����Ʈ - Linear Queue
/***********************************************************/

#if 0

#include <stdio.h>

#define MAX_Q			5
#define Q_EMPTY		0
#define Q_FULL			MAX_Q

int In_Queue(int data);
int Out_Queue(int* p);
int Print_Queue(void);
int Count_Full_Data_Queue(void);
int Count_Empty_Data_Queue(void);

int a[MAX_Q + 1] = { 1,2,3,4,5,6 };
int Queue[MAX_Q];
int Wrptr = Q_EMPTY;
int Rdptr = Q_EMPTY;

int In_Queue(int data)
{



}

int Out_Queue(int* p)
{





}

int Print_Queue(void)
{
	int i;

	for (i = Rdptr; i < Wrptr; i++)
	{
		printf("Queue[%d] = %d\n", i, Queue[i]);
	}

	return Wrptr - Rdptr;
}

int Count_Full_Data_Queue(void)
{
	return Wrptr - Rdptr;
}

int Count_Empty_Data_Queue(void)
{
	return MAX_Q - (Wrptr - Rdptr);
}

void main(void)
{
	int i;

	for (i = 0; i < (MAX_Q + 1); i++)
	{
		printf("%d, ", a[i]);
	}

	printf("\n");

	for (i = 0; i < 3; i++)
	{
		printf("Queue Result = %d\n", In_Queue(a[i]));
		printf("Print Result = %d, ", Print_Queue());
		printf("Full = %d ", Count_Full_Data_Queue());
		printf("Empty = %d\n", Count_Empty_Data_Queue());
		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
	}

	for (i = 0; i < 3; i++)
	{
		a[i] = 0;
	}

	for (i = 0; i < 3; i++)
	{
		printf("Dequeue Result = %d\n", Out_Queue(&a[i]));
		printf("Print Result = %d, ", Print_Queue());
		printf("Full = %d ", Count_Full_Data_Queue());
		printf("Empty = %d\n", Count_Empty_Data_Queue());
		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
	}

	for (i = 0; i < (MAX_Q + 1); i++)
	{
		printf("%d, ", a[i]);
	}

	printf("\n");

	for (i = 0; i < (MAX_Q + 1); i++)
	{
		printf("Queue Result = %d\n", In_Queue(a[i]));
		printf("Print Result = %d, ", Print_Queue());
		printf("Full = %d ", Count_Full_Data_Queue());
		printf("Empty = %d\n", Count_Empty_Data_Queue());
		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
	}

	for (i = 0; i < (MAX_Q + 1); i++)
	{
		a[i] = 0;
	}

	for (i = 0; i < (MAX_Q + 1); i++)
	{
		printf("Dequeue Result = %d\n", Out_Queue(&a[i]));
		printf("Print Result = %d, ", Print_Queue());
		printf("Full = %d ", Count_Full_Data_Queue());
		printf("Empty = %d\n", Count_Empty_Data_Queue());
		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
	}

	for (i = 0; i < (MAX_Q + 1); i++)
	{
		printf("%d, ", a[i]);
	}

	printf("\n");
}

#endif

/***********************************************************/
// [1-3.3] ���� ����Ʈ - Circular Queue
/***********************************************************/

#if 0

#include <stdio.h>

#define MAX_Q		8
#define Q_MIN		0
#define Q_MAX		MAX_Q

int In_Queue(int data);
int Out_Queue(int* p);
int Print_Queue(void);
int Count_Full_Data_Queue(void);
int Count_Empty_Data_Queue(void);

int a[MAX_Q + 1] = { 1,2,3,4,5,6,7,8,9 };
int Queue[MAX_Q];
int Wrptr = Q_MIN;
int Rdptr = Q_MIN;

int In_Queue(int data)
{





}

int Out_Queue(int* p)
{




}

int Print_Queue(void)
{
	int i;
	int rd = Rdptr;
	int n = Count_Full_Data_Queue();

	for (i = 0; i < n; i++)
	{
		printf("Queue[%d] = %d\n", rd, Queue[rd++]);
		rd %= MAX_Q;
	}

	return n;
}

int Count_Full_Data_Queue(void)
{
	if (Rdptr > Wrptr) return MAX_Q - (Rdptr - Wrptr);
	return Wrptr - Rdptr;
}

int Count_Empty_Data_Queue(void)
{
	return MAX_Q - Count_Full_Data_Queue() - 1;
}

void main(void)
{
	int i;

	for (i = 0; i < (MAX_Q + 1); i++)
	{
		printf("%d, ", a[i]);
	}

	printf("\n");

	for (i = 0; i < 3; i++)
	{
		printf("Queue Result = %d\n", In_Queue(a[i]));
		printf("Print Result = %d, ", Print_Queue());
		printf("Full = %d ", Count_Full_Data_Queue());
		printf("Empty = %d\n", Count_Empty_Data_Queue());
		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
	}

	for (i = 0; i < 3; i++)
	{
		a[i] = 0;
	}

	for (i = 0; i < 3; i++)
	{
		printf("Dequeue Result = %d\n", Out_Queue(&a[i]));
		printf("Print Result = %d, ", Print_Queue());
		printf("Full = %d ", Count_Full_Data_Queue());
		printf("Empty = %d\n", Count_Empty_Data_Queue());
		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
	}

	for (i = 0; i < (MAX_Q + 1); i++)
	{
		printf("%d, ", a[i]);
	}

	printf("\n");

	for (i = 0; i < (MAX_Q + 1); i++)
	{
		printf("Queue Result = %d\n", In_Queue(a[i]));
		printf("Print Result = %d, ", Print_Queue());
		printf("Full = %d ", Count_Full_Data_Queue());
		printf("Empty = %d\n", Count_Empty_Data_Queue());
		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
	}

	for (i = 0; i < (MAX_Q + 1); i++)
	{
		a[i] = 0;
	}

	for (i = 0; i < (MAX_Q + 1); i++)
	{
		printf("Dequeue Result = %d\n", Out_Queue(&a[i]));
		printf("Print Result = %d, ", Print_Queue());
		printf("Full = %d ", Count_Full_Data_Queue());
		printf("Empty = %d\n", Count_Empty_Data_Queue());
		printf("Wrptr = %d, Rdptr = %d\n", Wrptr, Rdptr);
	}

	for (i = 0; i < (MAX_Q + 1); i++)
	{
		printf("%d, ", a[i]);
	}

	printf("\n");
}

#endif

/***********************************************************/
// [1-4] Linked List
/***********************************************************/

/***********************************************************/
// [1-4-1] �迭 ��� ���� ����Ʈ
/***********************************************************/

#if 0

/***********************************************************/
// [1-4-1.1] ������ �𵨸�
/***********************************************************/

#if 0

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <malloc.h>

typedef struct _score
{
	int id;
	int jumsu;
	char name[10];
	struct _score* next;
}SCORE;

SCORE Head;

#define MAX_ST		20

SCORE exam[MAX_ST];

// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�



int Print_All_Data(void);
int Print_Data(int no);
int Count_Data(void);
int Create_Data(SCORE* p);
int Insert_Data(SCORE* p);
int Insert_Node(SCORE* head, SCORE* d);
int Print_All_Node(SCORE* head);
SCORE* Search_Id_Node(SCORE* head, int id);
int Count_Node(SCORE* head);
int Print_Node(SCORE* head, int id);
int Delete_Node(SCORE* head, int id);
int Copy_All_Node(SCORE* head, SCORE* buf);
int Count_Name_Node(SCORE* head, char* name);
int Count_Score_Node(SCORE* head, int jumsu);
int Copy_Name_Node(SCORE* head, char* name, SCORE* buf);
int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf);

SCORE test[MAX_ST] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"}, \
							   {15, 90, "ki"}, {11, 20, "kong"}, {14, 40, "shin"}, {12, 50, "son"}, {17, 48, "lee"}, \
							   {20, 100, "min"}, {19, 80, "you"}, {13, 45, "song"}, {16, 54, "no"}, {18, 100, "yang"} };

void Make_Test_Data(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		exam[i] = test[i];
	}
}

#endif

/***********************************************************/
// [1-4-1.2] ������ ����, �μ�, ��� �Լ� ����
/***********************************************************/

#if 0

int Create_Data(SCORE* p)
{
	printf("\n����� �Է��Ͻÿ� => ");
	scanf("%d", &p->id);
	fflush(stdin);
	printf("�̸��� �Է��Ͻÿ� => ");
	scanf("%s", p->name);
	fflush(stdin);
	printf("������ �Է��Ͻÿ� => ");
	scanf("%d", &p->jumsu);
	fflush(stdin);
	p->next = (SCORE*)0x0;

	return 1;
}

int Print_All_Data(void)
{
	int i;

	printf("Head.next = 0x%.8X\n", Head.next);

	for (i = 0; i < MAX_ST; i++)
	{
		if (exam[i].id == 0) break;
		printf("[%d] addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, next = 0x%.8X\n", i, &exam[i], exam[i].id, exam[i].name, exam[i].jumsu, exam[i].next);
	}

	return i;
}

int Print_Data(int no)
{
	if (exam[no].id == 0) return -1;
	printf("[%d] addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, next = 0x%.8X\n", &exam[no], exam[no].id, exam[no].name, exam[no].jumsu, exam[no].next);
	return 1;
}

int Count_Data(void)
{
	int i;

	for (i = 0; i < MAX_ST; i++)
	{
		if (exam[i].id == 0) break;
	}

	return i;
}

int Insert_Data(SCORE* p)
{
	int i;

	for (i = 0; i < MAX_ST; i++)
	{
		if (exam[i].id == 0)
		{
			exam[i] = (*p);
			return i;
		}

		if (exam[i].id == p->id)
		{
			return -2;
		}
	}

	return -1;
}

#endif

/***********************************************************/
// [1-4-1.3] ������ �ϳ��� �����Ͽ� Linked List�� �߰��ϴ� �Լ�
/***********************************************************/

#if 0

int Insert_Node(SCORE* head, SCORE* d)
{








}

#endif

#if 0

void main(void)
{
	int i;
	int r;

	for (i = 0; i < 8; i++)
	{
		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
		printf("Printed Data Count = %d\n", Print_All_Data());
		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
		printf("Printed Data Count = %d\n", Print_All_Data());
	}
}

#endif

/***********************************************************/
// [1-4-1.4] link�� ���� �� ����� ������ �μ��ϵ��� �Լ�
/***********************************************************/
/***********************************************************/
// [1-4-1.5] link�� ���� �־��� ����� �´� ��� �� ã�� �ּҸ� �����ϴ� �Լ�
/***********************************************************/

#if 0

int Print_All_Node(SCORE* head)
{






}

SCORE* Search_Id_Node(SCORE* head, int id)
{






}

#endif

#if 0

void main(void)
{
	int i;
	int r;
	SCORE* p;

	for (i = 0; i < 8; i++)
	{
		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
		printf("Printed Data Count = %d\n", Print_All_Data());
		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
		printf("Printed Node Count = %d\n", Print_All_Node(&Head));
	}

	printf("Searched Node Address = 0x%.8X\n", p = Search_Id_Node(&Head, 8));

	if (p != (SCORE*)0x0)
	{
		printf("ID=%d, NAME=%s, SCORE=%d, next = 0x%.8X\n", p->id, p->name, p->jumsu, p->next);
	}

	printf("Searched Node Address = 0x%.8X\n", p = Search_Id_Node(&Head, 7));

	if (p != (SCORE*)0x0)
	{
		printf("ID=%d, NAME=%s, SCORE=%d, next = 0x%.8X\n", p->id, p->name, p->jumsu, p->next);
	}
}

#endif

/***********************************************************/
// [1-4-1.6] list�� ����� �ڷ��� �Ѽ��� ����ϴ� �Լ�
/***********************************************************/

#if 0

int Count_Node(SCORE* head)
{






}

#endif

/***********************************************************/
// [1-4-1.7] link�� ���� �־��� ����� �´� �ڷḦ �μ��ϴ� �Լ�
/***********************************************************/

#if 0

int Print_Node(SCORE* head, int id)
{






}

#endif

#if 0

void main(void)
{
	int i;
	int r;

	for (i = 0; i < 8; i++)
	{
		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
		printf("Printed Data Count = %d\n", Print_All_Data());
		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
		printf("Printed Node Count = %d\n", Print_All_Node(&Head));
		printf("Node Count = %d\n", Count_Node(&Head));
	}

	printf("Print Node Result = %d\n", Print_Node(&Head, 8));
	printf("Print Node Result = %d\n", Print_Node(&Head, 7));
}

#endif

/***********************************************************/
// [1-4-1.8] link�� ���� �־��� ����� node�� ã�Ƽ� �����ϴ� �Լ�
/***********************************************************/

#if 0

int Delete_Node(SCORE* head, int id)
{






}

#endif

#if 0

void main(void)
{
	int i;
	int r;

	for (i = 0; i < 8; i++)
	{
		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
	}

	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
	printf("Delete Node Result = %d\n", Delete_Node(&Head, 8));
	printf("Delete Node Result = %d\n", Delete_Node(&Head, 7));
	printf("Delete Node Result = %d\n", Delete_Node(&Head, 1));
	printf("Delete Node Result = %d\n", Delete_Node(&Head, 10));
	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
}

#endif

/***********************************************************/
// [1-4-1.9] �־��� ���ۿ� �ڷḦ ��� ������ �ִ� �Լ� 
/***********************************************************/

#if 0

int Copy_All_Node(SCORE* head, SCORE* buf)
{







}

#endif

#if 0

void main(void)
{
	int i;
	int r;
	SCORE* p;
	SCORE new_head;

	for (i = 0; i < 8; i++)
	{
		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
	}

	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
	printf("Node Count = %d\n", r = Count_Node(&Head));

	p = calloc(r, sizeof(SCORE));
	printf("Copy All Node Result = %d\n", Copy_All_Node(&Head, p));
	new_head.next = p;
	printf("Printed Node Count = %d\n", Print_All_Node(&new_head));
	free(p);
}

#endif

/***********************************************************/
// [1-4-1.10] node���� ��û�� �ڷ��� ���� ����ϰų� ���ۿ� ������ �ִ� �Լ�
/***********************************************************/

#if 0

int Count_Name_Node(SCORE* head, char* name)
{
	int n = 0;

	if (head->next == (SCORE*)0x0) return 0;
	head = head->next;

	for (;;)
	{
		if (!strcmp(head->name, name)) n++;
		if (head->next == (SCORE*)0x0) return n;
		head = head->next;
	}
}

int Count_Score_Node(SCORE* head, int jumsu)
{
	int n = 0;

	if (head->next == (SCORE*)0x0) return 0;
	head = head->next;

	for (;;)
	{
		if (head->jumsu == jumsu) n++;
		if (head->next == (SCORE*)0x0) return n;
		head = head->next;
	}
}

int Copy_Name_Node(SCORE* head, char* name, SCORE* buf)
{






}

int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf)
{







}

#endif

#if 0

void main(void)
{
	int i;
	int r;
	SCORE* p;
	SCORE new_head;

	for (i = 0; i < 20; i++)
	{
		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
	}

	printf("Printed Node Count = %d\n", Print_All_Node(&Head));

	printf("Name Node Count = %d\n", r = Count_Name_Node(&Head, "lew"));
	p = calloc(r, sizeof(SCORE));
	printf("Copy Name Node Result = %d\n", Copy_Name_Node(&Head, "lew", p));
	new_head.next = p;
	printf("Printed Node Count = %d\n", Print_All_Node(&new_head));
	free(p);

	printf("Score Node Count = %d\n", r = Count_Score_Node(&Head, 100));
	p = calloc(r, sizeof(SCORE));
	printf("Copy Score Node Result = %d\n", Copy_Score_Node(&Head, 100, p));
	new_head.next = p;
	printf("Printed Node Count = %d\n", Print_All_Node(&new_head));
	free(p);
}

#endif


#endif

/***********************************************************/
// [1-4-2] �迭 ��� ���� ����Ʈ - ���� ��ũ
/***********************************************************/

#if 0

/***********************************************************/
// [1-4-2.1] ���� Linked List ����� �״�� ����ϴ� �Լ���
// ��, �μ��� �� Prev Node ���� �μ��ϵ��� �߰��Ѵ�
/***********************************************************/

#if 0

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <malloc.h>

typedef struct _score
{
	int id;
	int jumsu;
	char name[10];
	struct _score* next;
	struct _score* prev;
}SCORE;

SCORE Head;

#define MAX_ST		20

SCORE exam[MAX_ST];

// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�

int Print_All_Data(void);
int Print_Data(int no);
int Count_Data(void);
int Create_Data(SCORE* p);
int Insert_Data(SCORE* p);
int Insert_Node(SCORE* head, SCORE* d);
int Print_All_Node(SCORE* head);
int Print_All_Node_Reverse(SCORE* head);
SCORE* Search_Id_Node(SCORE* head, int id);
int Count_Node(SCORE* head);
int Print_Node(SCORE* head, int id);
int Delete_Node(SCORE* head, int id);
int Copy_All_Node(SCORE* head, SCORE* buf);
int Count_Name_Node(SCORE* head, char* name);
int Count_Score_Node(SCORE* head, int jumsu);
int Copy_Name_Node(SCORE* head, char* name, SCORE* buf);
int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf);
int Print_Selected_Node(SCORE* head, int id, int num);
int Print_Selected_Node_Reverse(SCORE* head, int id, int num);

SCORE test[MAX_ST] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"}, \
							   {15, 90, "ki"}, {11, 20, "kong"}, {14, 40, "shin"}, {12, 50, "son"}, {17, 48, "lee"}, \
							   {20, 100, "min"}, {19, 80, "you"}, {13, 45, "song"}, {16, 54, "no"}, {18, 100, "yang"} };

void Make_Test_Data(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		exam[i] = test[i];
	}
}

int Create_Data(SCORE* p)
{
	printf("\n����� �Է��Ͻÿ� => ");
	scanf("%d", &p->id);
	fflush(stdin);
	printf("�̸��� �Է��Ͻÿ� => ");
	scanf("%s", p->name);
	fflush(stdin);
	printf("������ �Է��Ͻÿ� => ");
	scanf("%d", &p->jumsu);
	fflush(stdin);
	p->next = (SCORE*)0x0;
	p->prev = (SCORE*)0x0;

	return 1;
}

int Print_All_Data(void)
{
	int i;

	printf("Head= 0x%.8X, Head.next=0x%.8X, Head.prev=0x%.8X\n", &Head, Head.next, Head.prev);

	for (i = 0; i < MAX_ST; i++)
	{
		if (exam[i].id == 0) break;
		printf("[%d] addr=0x%.8X, ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", i, &exam[i], exam[i].id, exam[i].name, exam[i].jumsu, exam[i].next, exam[i].prev);
	}

	return i;
}

int Print_Data(int no)
{
	if (exam[no].id == 0) return -1;
	printf("[%d] addr=0x%.8X, ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", &exam[no], exam[no].id, exam[no].name, exam[no].jumsu, exam[no].next, exam[no].prev);
	return 1;
}

int Count_Data(void)
{
	int i;

	for (i = 0; i < MAX_ST; i++)
	{
		if (exam[i].id == 0) break;
	}

	return i;
}

int Insert_Data(SCORE* p)
{
	int i;

	for (i = 0; i < MAX_ST; i++)
	{
		if (exam[i].id == 0)
		{
			exam[i] = (*p);
			return i;
		}

		if (exam[i].id == p->id)
		{
			return -2;
		}
	}

	return -1;
}

int Print_All_Node(SCORE* head)
{
	int i;

	printf("Head.next = 0x%.8X Head.prev = 0x%.8X\n", head->next, head->prev);

	for (i = 0; i < MAX_ST; i++)
	{
		if (head->next == (SCORE*)0x0) return i;
		printf("addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", head->next, head->next->id, head->next->name, head->next->jumsu, head->next->next, head->next->prev);
		head = head->next;
	}
	return i;
}

int Count_Node(SCORE* head)
{
	int i;

	for (i = 0; i < MAX_ST; i++)
	{
		if (head->next == (SCORE*)0x0) return i;
		head = head->next;
	}
	return i;
}

SCORE* Search_Id_Node(SCORE* head, int id)
{
	for (;;)
	{
		if (head->next == (SCORE*)0x0) return (SCORE*)0x0;
		if (head->next->id == id) return head->next;
		head = head->next;
	}
}

int Print_Node(SCORE* head, int id)
{
	SCORE* p = Search_Id_Node(head, id);

	if (p != (SCORE*)0x0)
	{
		printf("ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", p->id, p->name, p->jumsu, p->next, p->prev);
		return 1;
	}

	return -1;
}

int Copy_All_Node(SCORE* head, SCORE* buf)
{
	int i;
	if (head->next == NULL) return -1;

	for (i = 0; i < MAX_ST; i++)
	{
		if (head->next == NULL) break;
		buf[i] = *head->next;
		buf[i].next = &buf[i + 1];
		head = head->next;
	}

	buf[i - 1].next = NULL;
	return i;
}

int Count_Name_Node(SCORE* head, char* name)
{
	int n = 0;

	if (head->next == (SCORE*)0x0) return 0;
	head = head->next;

	for (;;)
	{
		if (!strcmp(head->name, name)) n++;
		if (head->next == (SCORE*)0x0) return n;
		head = head->next;
	}
}

int Count_Score_Node(SCORE* head, int jumsu)
{
	int n = 0;

	if (head->next == (SCORE*)0x0) return 0;
	head = head->next;

	for (;;)
	{
		if (head->jumsu == jumsu) n++;
		if (head->next == (SCORE*)0x0) return n;
		head = head->next;
	}
}

int Copy_Name_Node(SCORE* head, char* name, SCORE* buf)
{
	int n = 0;

	if (head->next == (SCORE*)0x0) return 0;
	head = head->next;

	for (;;)
	{
		if (!strcmp(head->name, name))
		{
			buf[n] = *head;
			buf[n].next = &buf[n + 1];
			n++;
		}
		if (head->next == (SCORE*)0x0) break;
		head = head->next;
	}
	buf[n - 1].next = (SCORE*)0x0;
	return n;
}

int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf)
{
	int n = 0;

	if (head->next == (SCORE*)0x0) return 0;
	head = head->next;

	for (;;)
	{
		if (head->jumsu == jumsu)
		{
			buf[n] = *head;
			buf[n].next = &buf[n + 1];
			n++;
		}
		if (head->next == (SCORE*)0x0) break;
		head = head->next;
	}
	buf[n - 1].next = (SCORE*)0x0;
	return n;
}

#endif

/***********************************************************/
// [1-4-2.2] ������ �ϳ��� �����Ͽ� Linked List�� �߰��ϴ� �Լ�
/***********************************************************/

#if 0

int Insert_Node(SCORE* head, SCORE* d)
{





}

#endif

#if 0

void main(void)
{
	int i;
	int r;

	for (i = 0; i < 8; i++)
	{
		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
		printf("Printed Data Count = %d\n", Print_All_Data());
		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
		printf("Printed Data Count = %d\n", Print_All_Data());
	}
}

#endif

/***********************************************************/
// [1-4-2.3] �־��� ����� node�� ã�Ƽ� �����ϴ� �Լ�
/***********************************************************/

#if 0

int Delete_Node(SCORE* head, int id)
{






}

#endif

#if 0

void main(void)
{
	int i;
	int r;

	for (i = 0; i < 8; i++)
	{
		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
	}

	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
	printf("[8] Delete Node Result = %d\n", Delete_Node(&Head, 8));
	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
	printf("[7] Delete Node Result = %d\n", Delete_Node(&Head, 7));
	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
	printf("[1] Delete Node Result = %d\n", Delete_Node(&Head, 1));
	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
	printf("[10] Delete Node Result = %d\n", Delete_Node(&Head, 10));
	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
}

#endif

/***********************************************************/
// [1-4-2.4] ���� ��ũ ����� ���� 1, �������� �˻�
/***********************************************************/

#if 0

int Print_All_Node_Reverse(SCORE* head)
{







}

#endif

#if 0

void main(void)
{
	int i;
	int r;

	for (i = 0; i < 8; i++)
	{
		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
	}

	printf("Printed Node Count(Up) = %d\n", Print_All_Node(&Head));
	printf("Printed Node Count(Down) = %d\n", Print_All_Node_Reverse(&Head));
	printf("[8] Delete Node Result = %d\n", Delete_Node(&Head, 8));
	printf("Printed Node Count(Down) = %d\n", Print_All_Node_Reverse(&Head));
}

#endif

/***********************************************************/
// [1-4-2.5] ���� ��ũ ����� ���� 2, ���������� ���� ���� �μ�
/***********************************************************/

#if 0

int Print_Selected_Node(SCORE* head, int id, int num)
{








}

int Print_Selected_Node_Reverse(SCORE* head, int id, int num)
{









}

#endif

#if 0

void main(void)
{
	int i;
	int r;

	for (i = 0; i < MAX_ST; i++)
	{
		printf("[Loop: %d] Insert Result = %d\n", i, r = Insert_Data(&test[i]));
		printf("Insert Node Result = %d\n", Insert_Node(&Head, &exam[r]));
	}

	printf("Printed Node Count(Up) = %d\n", Print_All_Node(&Head));
	printf("Printed Node Count(Down) = %d\n", Print_All_Node_Reverse(&Head));

	r = Print_Selected_Node(&Head, 7, 3);
	printf("Printed Data Number => %d\n", r);

	r = Print_Selected_Node(&Head, 19, 3);
	printf("Printed Data Number => %d\n", r);

	r = Print_Selected_Node_Reverse(&Head, 7, 3);
	printf("Printed Data Number => %d\n", r);

	r = Print_Selected_Node_Reverse(&Head, 2, 3);
	printf("Printed Data Number => %d\n", r);
}

#endif

#endif

/***********************************************************/
// [1-4-3] Heap ��� ���� ����Ʈ
/***********************************************************/
#if 0

#if 0

/***********************************************************/
// [1-4-3.1] ���� �迭 ��� linked list ����� �״�� ����ϴ� �Լ���
/***********************************************************/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <malloc.h>

typedef struct _score
{
	int id;
	int jumsu;
	char name[10];
	struct _score* next;
}SCORE;

SCORE Head;

// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�

int Print_All_Data(void);
int Print_Data(int no);
int Count_Data(void);
int Create_Data(SCORE* p);
int Insert_Data(SCORE* p);
int Insert_Node(SCORE* head, SCORE* d);
int Print_All_Node(SCORE* head);
SCORE* Search_Id_Node(SCORE* head, int id);
int Count_Node(SCORE* head);
int Print_Node(SCORE* head, int id);
int Delete_Node(SCORE* head, int id);
int Copy_All_Node(SCORE* head, SCORE* buf);
int Count_Name_Node(SCORE* head, char* name);
int Count_Score_Node(SCORE* head, int jumsu);
int Copy_Name_Node(SCORE* head, char* name, SCORE* buf);
int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf);

#define MAX_ST  20

SCORE test[MAX_ST] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"}, \
							   {15, 90, "ki"}, {11, 20, "kong"}, {14, 40, "shin"}, {12, 50, "son"}, {17, 48, "lee"}, \
							   {20, 100, "min"}, {19, 80, "you"}, {13, 45, "song"}, {16, 54, "no"}, {18, 100, "yang"} };

int Create_Data(SCORE* p)
{
	printf("\n����� �Է��Ͻÿ� => ");
	scanf("%d", &p->id);
	fflush(stdin);
	printf("�̸��� �Է��Ͻÿ� => ");
	scanf("%s", p->name);
	fflush(stdin);
	printf("������ �Է��Ͻÿ� => ");
	scanf("%d", &p->jumsu);
	fflush(stdin);
	p->next = (SCORE*)0x0;

	return 1;
}

int Print_All_Node(SCORE* head)
{
	int n = 0;

	printf("Head.next = 0x%.8X\n", head->next);
	if (head->next == (SCORE*)0x0) return 0;
	head = head->next;

	for (;;)
	{
		printf("addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, next = 0x%.8X\n", head, head->id, head->name, head->jumsu, head->next);
		n++;
		if (head->next == (SCORE*)0x0) return n;
		head = head->next;
	}
}

SCORE* Search_Id_Node(SCORE* head, int id)
{
	if (head->next == (SCORE*)0x0) return (SCORE*)0x0;
	head = head->next;

	for (;;)
	{
		if (head->id == id) return head;
		if (head->next == (SCORE*)0x0) return (SCORE*)0x0;
		head = head->next;
	}
}

int Count_Node(SCORE* head)
{
	int n = 0;

	if (head->next == (SCORE*)0x0) return 0;
	head = head->next;

	for (;;)
	{
		n++;
		if (head->next == (SCORE*)0x0) return n;
		head = head->next;
	}
}

int Print_Node(SCORE* head, int id)
{
	SCORE* p = Search_Id_Node(head, id);

	if (p != (SCORE*)0x0)
	{
		printf("ID=%d, NAME=%s, SCORE=%d, next = 0x%.8X\n", p->id, p->name, p->jumsu, p->next);
		return 1;
	}

	return -1;
}

int Copy_All_Node(SCORE* head, SCORE* buf)
{
	int n = 0;

	if (head->next == (SCORE*)0x0) return -1;
	head = head->next;

	for (;;)
	{
		buf[n] = *head;
		buf[n].next = &buf[n + 1];
		if (head->next == (SCORE*)0x0)
		{
			buf[n].next = (SCORE*)0x0;
			return n + 1;
		}
		n++;
		head = head->next;
	}
}

int Count_Name_Node(SCORE* head, char* name)
{
	int n = 0;

	if (head->next == (SCORE*)0x0) return 0;
	head = head->next;

	for (;;)
	{
		if (!strcmp(head->name, name)) n++;
		if (head->next == (SCORE*)0x0) return n;
		head = head->next;
	}
}

int Count_Score_Node(SCORE* head, int jumsu)
{
	int n = 0;

	if (head->next == (SCORE*)0x0) return 0;
	head = head->next;

	for (;;)
	{
		if (head->jumsu == jumsu) n++;
		if (head->next == (SCORE*)0x0) return n;
		head = head->next;
	}
}

int Copy_Name_Node(SCORE* head, char* name, SCORE* buf)
{
	int n = 0;

	if (head->next == (SCORE*)0x0) return 0;
	head = head->next;

	for (;;)
	{
		if (!strcmp(head->name, name))
		{
			buf[n] = *head;
			buf[n].next = &buf[n + 1];
			n++;
		}

		if (head->next == (SCORE*)0x0)
		{
			buf[n - 1].next = (SCORE*)0x0;
			return n;
		}

		head = head->next;
	}
}

int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf)
{
	int n = 0;

	if (head->next == (SCORE*)0x0) return 0;
	head = head->next;

	for (;;)
	{
		if (head->jumsu == jumsu)
		{
			buf[n] = *head;
			buf[n].next = &buf[n + 1];
			n++;
		}

		if (head->next == (SCORE*)0x0)
		{
			buf[n - 1].next = (SCORE*)0x0;
			return n;
		}

		head = head->next;
	}
}
#endif
/***********************************************************/
// [1-4-3.2] ���޹��� �����͸� ���� �����ϰ� Linked List�� �߰��ϴ� �Լ� (calloc ���)
/***********************************************************/

#if 0

int Insert_Node(SCORE* head, SCORE* d)
{






}

#endif

#if 0

void main(void)
{
	int i;
	SCORE* p;

	for (i = 0; i < 8; i++)
	{
		printf("Insert Node Result = %d\n", Insert_Node(&Head, &test[i]));
	}

	printf("Printed Node Count = %d\n", Print_All_Node(&Head));

	printf("Searched Node Address = 0x%.8X\n", p = Search_Id_Node(&Head, 8));

	if (p != (SCORE*)0x0)
	{
		printf("ID=%d, NAME=%s, SCORE=%d, next = 0x%.8X\n", p->id, p->name, p->jumsu, p->next);
	}

	printf("Searched Node Address = 0x%.8X\n", p = Search_Id_Node(&Head, 7));

	if (p != (SCORE*)0x0)
	{
		printf("ID=%d, NAME=%s, SCORE=%d, next = 0x%.8X\n", p->id, p->name, p->jumsu, p->next);
	}
}

#endif

/***********************************************************/
// [1-4-3.3] ���޹��� ����� �ڷḦ ��ũ�� ������ �����ϴ� �Լ� (free ���)
/***********************************************************/

#if 0

int Delete_Node(SCORE* head, int id)
{






}

#endif

#if 0

void main(void)
{
	int i;

	for (i = 0; i < 8; i++)
	{
		printf("Insert Node Result = %d\n", Insert_Node(&Head, &test[i]));
	}

	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
	printf("Delete Node Result = %d\n", Delete_Node(&Head, 8));
	printf("Delete Node Result = %d\n", Delete_Node(&Head, 7));
	printf("Delete Node Result = %d\n", Delete_Node(&Head, 1));
	printf("Delete Node Result = %d\n", Delete_Node(&Head, 10));
	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
}

#endif

#endif


/***********************************************************/
// [1-4-4] �� ��� ���� ����Ʈ - ���� ��ũ
/***********************************************************/

#if 0

/***********************************************************/
// [1-4-4.0] ���� Linked List ����� �״�� ����ϴ� �Լ���
/***********************************************************/

#if 0

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <malloc.h>

typedef struct _score
{
	int id;
	int jumsu;
	char name[10];
	struct _score* next;
	struct _score* prev;
}SCORE;

SCORE Head;

#define MAX_ST		20


// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�


int Print_All_Data(void);
int Print_Data(int no);
int Count_Data(void);
int Create_Data(SCORE* p);
int Insert_Data(SCORE* p);
int Insert_Node(SCORE* head, SCORE* d);
int Print_All_Node(SCORE* head);
int Print_All_Node_Reverse(SCORE* head);
SCORE* Search_Id_Node(SCORE* head, int id);
int Count_Node(SCORE* head);
int Print_Node(SCORE* head, int id);
int Delete_Node(SCORE* head, int id);
int Copy_All_Node(SCORE* head, SCORE* buf);
int Count_Name_Node(SCORE* head, char* name);
int Count_Score_Node(SCORE* head, int jumsu);
int Copy_Name_Node(SCORE* head, char* name, SCORE* buf);
int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf);
int Print_Selected_Node(SCORE* head, int id, int num);
int Print_Selected_Node_Reverse(SCORE* head, int id, int num);

SCORE test[MAX_ST] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"}, \
							   {15, 90, "ki"}, {11, 20, "kong"}, {14, 40, "shin"}, {12, 50, "son"}, {17, 48, "lee"}, \
							   {20, 100, "min"}, {19, 80, "you"}, {13, 45, "song"}, {16, 54, "no"}, {18, 100, "yang"} };


int Create_Data(SCORE* p)
{
	printf("\n����� �Է��Ͻÿ� => ");
	scanf("%d", &p->id);
	fflush(stdin);
	printf("�̸��� �Է��Ͻÿ� => ");
	scanf("%s", p->name);
	fflush(stdin);
	printf("������ �Է��Ͻÿ� => ");
	scanf("%d", &p->jumsu);
	fflush(stdin);
	p->next = (SCORE*)0x0;
	p->prev = (SCORE*)0x0;

	return 1;
}

SCORE* Search_Id_Node(SCORE* head, int id)
{
	for (;;)
	{
		if (head->next == (SCORE*)0x0) return (SCORE*)0x0;
		if (head->next->id == id) return head->next;
		head = head->next;
	}
}

int Count_Node(SCORE* head)
{
	int i = 0;

	for (;;)
	{
		if (head->next == (SCORE*)0x0) return i;
		head = head->next;
		i++;
	}
}

int Print_Node(SCORE* head, int id)
{
	SCORE* p = Search_Id_Node(head, id);

	if (p != (SCORE*)0x0)
	{
		printf("ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", p->id, p->name, p->jumsu, p->next, p->prev);
		return 1;
	}

	return -1;
}

int Copy_All_Node(SCORE* head, SCORE* buf)
{
	int i = 0;
	if (head->next == NULL) return -1;

	for (;;)
	{
		if (head->next == NULL) break;
		buf[i] = *head->next;
		buf[i].next = &buf[i + 1];
		head = head->next;
		i++;
	}

	buf[i - 1].next = NULL;
	return i;
}

int Count_Name_Node(SCORE* head, char* name)
{
	int n = 0;

	if (head->next == (SCORE*)0x0) return 0;
	head = head->next;

	for (;;)
	{
		if (!strcmp(head->name, name)) n++;
		if (head->next == (SCORE*)0x0) return n;
		head = head->next;
	}
}

int Count_Score_Node(SCORE* head, int jumsu)
{
	int n = 0;

	if (head->next == (SCORE*)0x0) return 0;
	head = head->next;

	for (;;)
	{
		if (head->jumsu == jumsu) n++;
		if (head->next == (SCORE*)0x0) return n;
		head = head->next;
	}
}

int Copy_Name_Node(SCORE* head, char* name, SCORE* buf)
{
	int n = 0;

	if (head->next == (SCORE*)0x0) return 0;
	head = head->next;

	for (;;)
	{
		if (!strcmp(head->name, name))
		{
			buf[n] = *head;
			buf[n].next = &buf[n + 1];
			n++;
		}
		if (head->next == (SCORE*)0x0) break;
		head = head->next;
	}
	buf[n - 1].next = (SCORE*)0x0;
	return n;
}

int Copy_Score_Node(SCORE* head, int jumsu, SCORE* buf)
{
	int n = 0;

	if (head->next == (SCORE*)0x0) return 0;
	head = head->next;

	for (;;)
	{
		if (head->jumsu == jumsu)
		{
			buf[n] = *head;
			buf[n].next = &buf[n + 1];
			n++;
		}
		if (head->next == (SCORE*)0x0) break;
		head = head->next;
	}
	buf[n - 1].next = (SCORE*)0x0;
	return n;
}

int Print_All_Node(SCORE* head)
{
	int i = 0;

	printf("Head.next = 0x%.8X Head.prev = 0x%.8X\n", head->next, head->prev);

	for (;;)
	{
		if (head->next == (SCORE*)0x0) return i;
		printf("addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", head->next, head->next->id, head->next->name, head->next->jumsu, head->next->next, head->next->prev);
		head = head->next;
		i++;
	}
}

int Print_All_Node_Reverse(SCORE* head)
{
	int i = 0;

	printf("Head.next = 0x%.8X Head.prev = 0x%.8X\n", head->next, head->prev);

	while (head->next != (SCORE*)0x0)
	{
		head = head->next;
	}

	printf("Tail.next = 0x%.8X Tail.prev = 0x%.8X\n", head->next, head->prev);

	for (;;)
	{
		if (head->prev == (SCORE*)0x0) return i;
		printf("addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", head, head->id, head->name, head->jumsu, head->next, head->prev);
		head = head->prev;
		i++;
	}
}

int Print_Selected_Node(SCORE* head, int id, int num)
{
	int i = 0;

	head = Search_Id_Node(head, id);

	if (head == (SCORE*)0x0) return -1;

	printf("==================================================================================\n");

	while (i < num)
	{
		printf("addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", head, head->id, head->name, head->jumsu, head->next, head->prev);
		i++;
		if (head->next == (SCORE*)0x0) break;
		head = head->next;
	}

	return i;
}

int Print_Selected_Node_Reverse(SCORE* head, int id, int num)
{
	int i = 0;

	head = Search_Id_Node(head, id);

	if (head == (SCORE*)0x0) return -1;

	printf("==================================================================================\n");

	while (i < num)
	{
		printf("addr = 0x%.8X, ID=%d, NAME=%s, SCORE=%d, next=0x%.8X, prev=0x%.8X\n", head, head->id, head->name, head->jumsu, head->next, head->prev);
		i++;
		if (head->prev->prev == (SCORE*)0x0) break;
		head = head->prev;
	}

	return i;
}

#endif

/***********************************************************/
// [1-4-4.1] ������ �ϳ��� �����Ͽ� Linked List�� �߰��ϴ� �Լ� (calloc ���)
/***********************************************************/

#if 0

int Insert_Node(SCORE* head, SCORE* d)
{






}

#endif

#if 0

void main(void)
{
	int i;

	for (i = 0; i < 8; i++)
	{
		printf("Insert Node Result = %d\n", Insert_Node(&Head, &test[i]));
		printf("Printed Node Count = %d\n", Print_All_Node(&Head));
	}
}

#endif

/***********************************************************/
// [1-4-4.2] �־��� ����� node�� ã�Ƽ� �����ϴ� �Լ�
/***********************************************************/

#if 0

int Delete_Node(SCORE* head, int id)
{






}

#endif

#if 0

void main(void)
{
	int i;

	for (i = 0; i < 8; i++)
	{
		printf("Insert Node Result = %d\n", Insert_Node(&Head, &test[i]));
	}

	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
	printf("Delete Node Result = %d\n", Delete_Node(&Head, 8));
	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
	printf("Delete Node Result = %d\n", Delete_Node(&Head, 7));
	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
	printf("Delete Node Result = %d\n", Delete_Node(&Head, 1));
	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
	printf("Delete Node Result = %d\n", Delete_Node(&Head, 10));
	printf("Printed Node Count = %d\n", Print_All_Node(&Head));
}

#endif

#endif


/***********************************************************/
// [1-5] ���Ḯ��Ʈ ��� ���ð� ť
/***********************************************************/

/***********************************************************/
// [1-5-1] �� ��� stack
/***********************************************************/

#if 0

#include <stdio.h>
#include <malloc.h>

typedef struct _stk
{
	int num;
	struct _stk* next;
}STACK;

STACK* Sptr = (STACK*)0;
STACK a[10] = { {1,0},{2,0},{3,0},{4,0},{5,0},{6,0},{7,0},{8,0},{9,0},{10,0} };

int Push_Stack(STACK* data);
int Pop_Stack(STACK* p);
int Print_Stack(void);
int Count_Full_Data_Stack(void);

int Push_Stack(STACK* data)
{





}

int Pop_Stack(STACK* p)
{






}

int Print_Stack(void)
{







}

int Count_Full_Data_Stack(void)
{






}

void main(void)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("Push Result = %d\n", Push_Stack(&a[i]));
		printf("Print Result = %d, ", Print_Stack());
		printf("Full = %d\n", Count_Full_Data_Stack());
	}

	for (i = 0; i < 6; i++)
	{
		printf("Pop Result = %d\n", Pop_Stack(&a[i]));
		printf("Print Result = %d, ", Print_Stack());
		printf("Full = %d\n ", Count_Full_Data_Stack());
	}

	for (i = 0; i < 3; i++)
	{
		printf("Push Result = %d\n", Push_Stack(&a[i]));
		printf("Print Result = %d, ", Print_Stack());
		printf("Full = %d\n", Count_Full_Data_Stack());
	}

	for (i = 0; i < 5; i++)
	{
		printf("Pop Result = %d\n", Pop_Stack(&a[i]));
		printf("Print Result = %d, ", Print_Stack());
		printf("Full = %d\n ", Count_Full_Data_Stack());
	}

	printf("\n");
}

#endif

/***********************************************************/
// [1-5-2] �� ���  Linear Queue
/***********************************************************/
#if 0

#include <stdio.h>
#include <malloc.h>

typedef struct _que
{
	int num;
	struct _que* next;
}QUEUE;

QUEUE* Wrptr = (QUEUE*)0;;
QUEUE* Rdptr = (QUEUE*)0;;

QUEUE a[10] = { {1,0},{2,0},{3,0},{4,0},{5,0},{6,0},{7,0},{8,0},{9,0},{10,0} };

int In_Queue(QUEUE* data);
int Out_Queue(QUEUE* p);
int Print_Queue(void);
int Count_Full_Data_Queue(void);

int In_Queue(QUEUE* data)
{







}

int Out_Queue(QUEUE* p)
{







}

int Print_Queue(void)
{








}

int Count_Full_Data_Queue(void)
{








}

void main(void)
{
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("Queue Result = %d\n", In_Queue(&a[i]));
		printf("Print Result = %d, ", Print_Queue());
		printf("Full = %d\n", Count_Full_Data_Queue());
	}

	for (i = 0; i < 2; i++)
	{
		printf("Dequeue Result = %d\n", Out_Queue(&a[i]));
		printf("Print Result = %d, ", Print_Queue());
		printf("Full = %d\n", Count_Full_Data_Queue());
	}

	for (i = 0; i < 4; i++)
	{
		printf("Queue Result = %d\n", In_Queue(&a[i]));
		printf("Print Result = %d, ", Print_Queue());
		printf("Full = %d\n", Count_Full_Data_Queue());
	}

	for (i = 0; i < 7; i++)
	{
		printf("Dequeue Result = %d\n", Out_Queue(&a[i]));
		printf("Print Result = %d, ", Print_Queue());
		printf("Full = %d\n", Count_Full_Data_Queue());
	}

	for (i = 0; i < 3; i++)
	{
		printf("Queue Result = %d\n", In_Queue(&a[i]));
		printf("Print Result = %d, ", Print_Queue());
		printf("Full = %d\n", Count_Full_Data_Queue());
	}

	for (i = 0; i < 3; i++)
	{
		printf("Dequeue Result = %d\n", Out_Queue(&a[i]));
		printf("Print Result = %d, ", Print_Queue());
		printf("Full = %d\n", Count_Full_Data_Queue());
	}
}

#endif


/***********************************************************/
// [2-1] �׷���  
/***********************************************************/

#if 0
#include <stdio.h>
#include <stdlib.h>

/***********************************************************/
// [2-1.1] Graph �⺻ �ڷ�
/***********************************************************/

#define NUM_NODE 6
#define NUM_EDGE 16

typedef struct
{
	int s;
	int e;
	int cost;
}EDGE;
EDGE edge[16] = { {1,2,3},{1,4,6},{1,5,12},{2,3,2},{2,4,9},{3,2,4},{3,5,6},{3,6,7},{4,1,8},{4,5,5},{5,2,11},{5,3,8},{5,4,7},{5,6,5},{6,2,13},{6,3,5} };


/***********************************************************/
// [2-1.2] ���� ���
/***********************************************************/

#if 0

#define NOT_CONNECTED	(0x7fffffff)
int matrix[NUM_NODE + 1][NUM_NODE + 1];

void Init_Graph_Adjacency_Matrix(void)
{
	int s, e, i;
	for (s = 1; s <= NUM_NODE; s++) {//��� ��� ��ȣ
		for (e = 1; e <= NUM_NODE; e++) {//���� ��� ��ȣ
			matrix[s][e] = NOT_CONNECTED;
		}
	}

	for (i = 0; i < NUM_EDGE; i++) {//���� ���� �ε���
		matrix[edge[i].s][edge[i].e] = edge[i].cost;
	}
}


int visited[100];
int path_cnt;
int path[100];
void DFS(int cur, int e, int sum_cost)
{
	int i;
	visited[cur] = 1;
	path[path_cnt++] = cur;

	if (cur == e)
	{
		printf("%d ", path[0]);
		for (i = 1; i < path_cnt; i++) printf("- %d ", path[i]);
		printf("[total cost : %d]\n", sum_cost);
		visited[cur] = 0;
		path_cnt--;
		return;
	}

	for (i = 1; i <= NUM_NODE; i++)
	{
		if (matrix[cur][i] != NOT_CONNECTED && !visited[i])
		{
			DFS(i, e, sum_cost + matrix[cur][i]);
		}
	}

	visited[cur] = 0;
	path_cnt--;
}

int main(void)
{
	printf("Graph - Adjacency matrix\n\n");

	Init_Graph_Adjacency_Matrix();

	printf("[Path] Node 1 -> Node 6\n");
	DFS(1, 6, 0);

	printf("\n[Path] Node 3 -> Node 5\n");
	DFS(3, 5, 0);
}
#endif

/***********************************************************/
// [2-1.3] ���� ����Ʈ (�迭 ���)
/***********************************************************/

#if 0
typedef struct list
{
	int node;
	int cost;
}LIST;

LIST list[NUM_NODE + 1][NUM_NODE];
int list_cnt[NUM_NODE + 1];

void Init_Graph_Adjacency_list(void)
{

}


int visited[100];
int path_cnt;
int path[100];
void DFS(int cur, int e, int sum_cost)
{
	int i;
	visited[cur] = 1;
	path[path_cnt++] = cur;

	if (cur == e)
	{
		printf("%d ", path[0]);
		for (i = 1; i < path_cnt; i++) printf("- %d ", path[i]);
		printf("[total cost : %d]\n", sum_cost);
		visited[cur] = 0;
		path_cnt--;
		return;
	}

	for (i = 0; i < list_cnt[cur]; i++)
	{
		if (!visited[list[cur][i].node])
		{
			DFS(list[cur][i].node, e, sum_cost + list[cur][i].cost);
		}
	}

	visited[cur] = 0;
	path_cnt--;
}

int main(void)
{
	printf("Graph - Adjacency list\n\n");

	Init_Graph_Adjacency_list();

	printf("[Path] Node 1 -> Node 6\n");
	DFS(1, 6, 0);

	printf("\n[Path] Node 3 -> Node 5\n");
	DFS(3, 5, 0);

	return 0;
}
#endif

/***********************************************************/
// [2-1.4] ���� ����Ʈ (Heap ���)
/***********************************************************/

#if 01

typedef struct list
{
	int node;
	int cost;
	struct list* next;
}LIST;

LIST list[NUM_NODE + 1];
void DeleteAllNode(LIST* p) {
	for (;;) {
		LIST* delnode = p;
		if (p == NULL) break;
		p = p->next;
		free(delnode);
	}
}

int Init_Graph_Adjacency_list(void)
{
	int i, idx, cnt = 0;
	LIST* head, * np;
	for (i = 1; i <= NUM_NODE; i++) {//�׽�Ʈ ���̽� �������� ��� �ʿ�
		if (list[i].next != NULL) {//�Ҵ� ���� �� ������ �Ҵ�����
			DeleteAllNode(list[i].next);
		}
		list[i].next = NULL;
	}
	for (i = 0; i < NUM_EDGE; i++) {
		idx = edge[i].s;
		head = &list[idx];
		cnt++;
#if 0
		//���� ��� ��ȣ ������������ �Է� �Ϸ���
		for (;;) {
			if ((head->next == NULL) || (head->next->node >= edge[i].e)) {
				np = malloc(sizeof(LIST));
				np->node = edge[i].e; np->cost = edge[i].cost;
				np->next = head->next;
				head->next = np;
				break;
			}
			head = head->next;
		}
#else
		//��� ���� �׳� �߰��ϴ� ���
		np = (LIST *)malloc(sizeof(LIST));
		np->node = edge[i].e; np->cost = edge[i].cost;
		np->next = head->next;
		head->next = np;
#endif
	}
	return cnt;
}


int visited[100];
int path_cnt;
int path[100];
void DFS(int cur, int e, int sum_cost)
{
	int i;
	LIST* p;
	visited[cur] = 1;
	path[path_cnt++] = cur;

	if (cur == e)
	{
		printf("%d ", path[0]);
		for (i = 1; i < path_cnt; i++) printf("- %d ", path[i]);
		printf("[total cost : %d]\n", sum_cost);
		visited[cur] = 0;
		path_cnt--;
		return;
	}

	p = list[cur].next;
	while (p != (LIST*)0)
	{
		if (!visited[p->node])
		{
			DFS(p->node, e, sum_cost + p->cost);
		}
		p = p->next;
	}

	visited[cur] = 0;
	path_cnt--;
}

int main(void)
{
	int ret;

	printf("Graph - Adjacency list\n\n");

	ret = Init_Graph_Adjacency_list();
	if (!ret) return 0;

	printf("[Path] Node 1 -> Node 6\n");
	DFS(1, 6, 0);

	printf("\n[Path] Node 3 -> Node 5\n");
	DFS(3, 5, 0);

	return 0;
}
#endif

#endif

/***********************************************************/
// [2-2] Hash Table 
/***********************************************************/

#if 0

/***********************************************************/
// [2-2.1] Hash Table�� ���� �⺻ �Լ���
/***********************************************************/

#if 0

#include <stdio.h>
#include <string.h>
#include <conio.h>

#include <malloc.h>

typedef struct _score
{
	int id;
	int jumsu;
	char name[10];
}SCORE;

#define MAX_ST		20
#define HASH_KEY	10
#define STEP		1

SCORE Hash_table[MAX_ST];

// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�

int Create_Data(SCORE* p);
int Get_Hash_Key(int id);
void Init_Hash_Table(void);
void Print_All_Data(void);
int Insert_Data(SCORE* d);
SCORE* Search_Data(int id);
int Delete_Data(int id);

SCORE test[MAX_ST + 2] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"}, \
							   {15, 90, "ki"}, {11, 20, "kong"}, {14, 40, "shin"}, {12, 50, "son"}, {17, 48, "lee"}, \
							   {20, 100, "min"}, {19, 80, "you"}, {13, 45, "song"}, {16, 54, "no"}, {18, 100, "yang"}, \
							   {21, 58, "seo"}, {23, 88, "oh"} };

int Create_Data(SCORE* p)
{
	printf("\n����� �Է��Ͻÿ� => ");
	scanf("%d", &p->id);
	fflush(stdin);
	printf("�̸��� �Է��Ͻÿ� => ");
	scanf("%s", p->name);
	fflush(stdin);
	printf("������ �Է��Ͻÿ� => ");
	scanf("%d", &p->jumsu);
	fflush(stdin);

	return 1;
}

int Get_Hash_Key(int id)
{
	return id % HASH_KEY;
}

void Init_Hash_Table(void)
{
	int i;

	for (i = 0; i < MAX_ST; i++)
	{
		Hash_table[i].id = -1;
	}
}

#endif

#if 0

void Print_All_Data(void)
{
	int i;

	for (i = 0; i < MAX_ST; i++)
	{
		if (Hash_table[i].id != -1) printf("[%d] ID: %d, NAME: %s\n", i, Hash_table[i].id, Hash_table[i].name);
	}
}

#endif

/***********************************************************/
// [2-2.2] Insert => Open Address ���
/***********************************************************/

#if 0

int Insert_Data(SCORE* d)
{







}

#endif

#if 0

void main(void)
{
	int i;
	int r;

	Init_Hash_Table();

	for (i = 0; i < (MAX_ST + 2); i++)
	{
		printf("[Loop: %d] Inserted Position=%d, ID=%d\n", i, r = Insert_Data(&test[i]), test[i].id);
		Print_All_Data();
	}
}

#endif

/***********************************************************/
// [2-2.3] Search
/***********************************************************/

#if 0

SCORE* Search_Data(int id)
{






}

#endif

#if 0

void main(void)
{
	int i;
	int r;
	SCORE* p;

	Init_Hash_Table();

	for (i = 0; i < 15; i++)
	{
		printf("[Loop: %d] Inserted Position=%d, ID=%d\n", i, r = Insert_Data(&test[i]), test[i].id);
	}

	Print_All_Data();
	printf("Serch Result=0x%.8X\n", p = Search_Data(3));
	if (p) printf("ID=%d, NAME=%s\n", p->id, p->name);
	printf("Serch Result=0x%.8X\n", p = Search_Data(12));
	if (p) printf("ID=%d, NAME=%s\n", p->id, p->name);
	printf("Serch Result=0x%.8X\n", p = Search_Data(25));
	if (p) printf("ID=%d, NAME=%s\n", p->id, p->name);
}

#endif

/***********************************************************/
// [2-2.4] Delete �Լ��� ��
/***********************************************************/

#if 0

int Delete_Data(int id)
{
	SCORE* p;

	p = Search_Data(id);
	if (p == (SCORE*)0) return -1;
	p->id = -1;
	return 1;
}

#endif

/***********************************************************/
// [2-2.5] ���� ��� ID�� -2�� �ϵ��� delete �Լ� ���踦 �ٽ� �����Ѵ�
// ���� ������ �޶����鼭 Insert ������ �����Ǿ�� �Ѵ�. 
// ������ Insert �Լ��� ����Ǹ� [3-3.2]���� ����� Insert_Data �Լ��� �����Ѵ�
/***********************************************************/

#if 0

int Delete_Data(int id)
{





}

int Insert_Data(SCORE* d)
{
	int pos;
	int key;

	pos = key = Get_Hash_Key(d->id);

	for (;;)
	{
		if ((Hash_table[pos].id == -1) || (Hash_table[pos].id == -2))
		{
			Hash_table[pos] = *d;
			return pos;
		}

		pos += STEP;
		if (pos == key) return -1;
		if (pos >= MAX_ST) pos = 0;
	}
}

void Print_All_Data(void)
{
	int i;

	for (i = 0; i < MAX_ST; i++)
	{
		if ((Hash_table[i].id != -1) && (Hash_table[i].id != -2)) printf("[%d] ID: %d, NAME: %s\n", i, Hash_table[i].id, Hash_table[i].name);
	}
}

#endif

#if 0

void main(void)
{
	int i;
	int r;

	Init_Hash_Table();

	for (i = 0; i < 15; i++)
	{
		printf("[Loop: %d] Inserted Position=%d, ID=%d\n", i, r = Insert_Data(&test[i]), test[i].id);
	}

	Print_All_Data();
	printf("[3] Delete Result=%d\n", r = Delete_Data(3));
	printf("[12] Delete Result=%d\n", r = Delete_Data(12));
	printf("[25] Delete Result=%d\n", r = Delete_Data(25));
	printf("[3] Delete Result=%d\n", r = Delete_Data(3));
	printf("[12] Delete Result=%d\n", r = Delete_Data(12));
	Print_All_Data();

	printf("Inserted Position=%d, ID=%d\n", r = Insert_Data(&test[13]), test[13].id);
	printf("Inserted Position=%d, ID=%d\n", r = Insert_Data(&test[5]), test[5].id);
	Print_All_Data();
}

#endif

#endif

/***********************************************************/
// [2-2.6] Hash Table => �ؽ� Ű �߻� �Լ��� ����
/***********************************************************/

#if 0

/***********************************************************/
// [2-2.6] Hash Table�� ���� �⺻ �Լ���
/***********************************************************/

#if 0

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <malloc.h>

typedef struct _score
{
	int id;
	int jumsu;
	char name[10];
}SCORE;

#define MAX_ST		20

#if 0
#define HASH_KEY	10
#define STEP		1
#else
#define HASH_KEY	7  // ������ �Ҽ�
#define STEP		9  // ���̺��� ��Ҽ��� ���� �� ������ ��
#endif

SCORE Hash_table[MAX_ST];

// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�

int Create_Data(SCORE* p);
int Get_Hash_Key(int id);
void Init_Hash_Table(void);
void Print_All_Data(void);
int Insert_Data(SCORE* d);
SCORE* Search_Data(int id);
int Delete_Data(int id);

SCORE test[MAX_ST + 2] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"}, \
							   {15, 90, "ki"}, {11, 20, "kong"}, {14, 40, "shin"}, {12, 50, "son"}, {17, 48, "lee"}, \
							   {20, 100, "min"}, {19, 80, "you"}, {13, 45, "song"}, {16, 54, "no"}, {18, 100, "yang"}, \
							   {21, 58, "seo"}, {23, 88, "oh"} };

int Create_Data(SCORE* p)
{
	printf("\n����� �Է��Ͻÿ� => ");
	scanf("%d", &p->id);
	fflush(stdin);
	printf("�̸��� �Է��Ͻÿ� => ");
	scanf("%s", p->name);
	fflush(stdin);
	printf("������ �Է��Ͻÿ� => ");
	scanf("%d", &p->jumsu);
	fflush(stdin);

	return 1;
}

int Get_Hash_Key(int id)
{
	return id % HASH_KEY;
}

void Init_Hash_Table(void)
{
	int i;

	for (i = 0; i < MAX_ST; i++)
	{
		Hash_table[i].id = -1;
	}
}

void Print_All_Data(void)
{
	int i;

	for (i = 0; i < MAX_ST; i++)
	{
		if ((Hash_table[i].id != -1) && (Hash_table[i].id != -2)) printf("[%d] ID: %d, NAME: %s\n", i, Hash_table[i].id, Hash_table[i].name);
	}
}

int Delete_Data(int id)
{
	SCORE* p;

	p = Search_Data(id);
	if (p == (SCORE*)0) return -1;
	p->id = -2;
	return 1;
}

int Insert_Data(SCORE* d)
{
	int pos;
	int cnt = 0;
	static int insert_cnt;

	pos = Get_Hash_Key(d->id);

	for (;;)
	{
		if ((Hash_table[pos].id == -1) || (Hash_table[pos].id == -2))
		{
			Hash_table[pos] = *d;
			insert_cnt += cnt + 1;
			printf("cnt = %d, total insert count = %d\n", cnt + 1, insert_cnt);
			return pos;
		}

		pos += STEP;
		cnt++;
		if (cnt >= MAX_ST) return -1;
		if (pos >= MAX_ST) pos %= MAX_ST;
	}
}

SCORE* Search_Data(int id)
{
	int pos;
	int cnt = 0;
	static int search_cnt;

	pos = Get_Hash_Key(id);

	for (;;)
	{
		if (Hash_table[pos].id == id) return &Hash_table[pos];
		if (Hash_table[pos].id == -1) return (SCORE*)0;
		pos += STEP;
		cnt++;
		search_cnt += cnt + 1;
		printf("cnt = %d, total search count = %d\n", cnt + 1, search_cnt);
		if (cnt >= MAX_ST) return (SCORE*)0;
		if (pos >= MAX_ST) pos %= MAX_ST;
	}
}

#endif

/***********************************************************/
// [2-2.6] Insert ȿ��
/***********************************************************/

#if 0

void main(void)
{
	int i;
	int r;

	Init_Hash_Table();

	for (i = 0; i < MAX_ST; i++)
	{
		printf("[Loop: %d] Inserted Position=%d, ID=%d\n", i, r = Insert_Data(&test[i]), test[i].id);
		Print_All_Data();
	}
}

#endif

/***********************************************************/
// [2-2.7] Search ȿ��
/***********************************************************/

#if 0

void main(void)
{
	int i;
	int r;
	SCORE* p;

	Init_Hash_Table();

	for (i = 0; i < 15; i++)
	{
		printf("[Loop: %d] Inserted Position=%d, ID=%d\n", i, r = Insert_Data(&test[i]), test[i].id);
	}

	Print_All_Data();
	printf("Serch Result=0x%.8X\n", p = Search_Data(3));
	if (p) printf("ID=%d, NAME=%s\n", p->id, p->name);
	printf("Serch Result=0x%.8X\n", p = Search_Data(12));
	if (p) printf("ID=%d, NAME=%s\n", p->id, p->name);
	printf("Serch Result=0x%.8X\n", p = Search_Data(25));
	if (p) printf("ID=%d, NAME=%s\n", p->id, p->name);
}

#endif

/***********************************************************/
// [2-2.8] Insert, Search, Delete
/***********************************************************/

#if 0

void main(void)
{
	int i;
	int r;

	Init_Hash_Table();

	for (i = 0; i < 15; i++)
	{
		printf("[Loop: %d] Inserted Position=%d, ID=%d\n", i, r = Insert_Data(&test[i]), test[i].id);
	}

	Print_All_Data();
	printf("[3] Delete Result=%d\n", r = Delete_Data(3));
	printf("[12] Delete Result=%d\n", r = Delete_Data(12));
	printf("[25] Delete Result=%d\n", r = Delete_Data(25));
	printf("[3] Delete Result=%d\n", r = Delete_Data(3));
	printf("[12] Delete Result=%d\n", r = Delete_Data(12));
	Print_All_Data();

	printf("Inserted Position=%d, ID=%d\n", r = Insert_Data(&test[13]), test[13].id);
	printf("Inserted Position=%d, ID=%d\n", r = Insert_Data(&test[5]), test[5].id);
	Print_All_Data();
}

#endif

#endif

/***********************************************************/
// [2-2.9] Hash Table => Chainning ����� ����
/***********************************************************/

#if 0

/***********************************************************/
// [2-2.9] Hash Table�� ���� �⺻ �Լ���
/***********************************************************/

#if 0

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <malloc.h>

typedef struct _score
{
	int id;
	int jumsu;
	char name[10];
	struct _score* next;
}SCORE;

#define MAX_ST		20
#define HASH_KEY	5

SCORE Hash_table[HASH_KEY];



int Create_Data(SCORE* p);
int Get_Hash_Key(int id);
void Init_Hash_Table(void);
void Print_All_Data(void);
int Insert_Data(SCORE* d);
SCORE* Search_Data(int id);
int Delete_Data(int id);

SCORE test[MAX_ST + 2] = { {10, 50, "kim"}, {2, 80, "lew"}, {8, 50, "lew"}, {4, 45, "lee"}, {1, 90, "song"},\
							   {3, 45, "kim"}, {5, 50, "song"}, {9, 100, "lee"}, {7, 75, "moon"}, {6, 90, "park"}, \
							   {15, 90, "ki"}, {11, 20, "kong"}, {14, 40, "shin"}, {12, 50, "son"}, {17, 48, "lee"}, \
							   {20, 100, "min"}, {19, 80, "you"}, {13, 45, "song"}, {16, 54, "no"}, {18, 100, "yang"}, \
							   {21, 58, "seo"}, {23, 88, "oh"} };

int Create_Data(SCORE* p)
{
	printf("\n����� �Է��Ͻÿ� => ");
	scanf("%d", &p->id);
	fflush(stdin);
	printf("�̸��� �Է��Ͻÿ� => ");
	scanf("%s", p->name);
	fflush(stdin);
	printf("������ �Է��Ͻÿ� => ");
	scanf("%d", &p->jumsu);
	fflush(stdin);

	return 1;
}

int Get_Hash_Key(int id)
{
	return id % HASH_KEY;
}

void Init_Hash_Table(void)
{
	int i;

	for (i = 0; i < MAX_ST; i++)
	{
		Hash_table[i].next = (SCORE*)0;
	}
}

void Print_All_Data(void)
{
	int i;
	SCORE* p;

	for (i = 0; i < MAX_ST; i++)
	{
		p = Hash_table[i].next;

		for (;;)
		{
			if (p == (SCORE*)0) break;
			printf("[%d] address:0x%.8X, ID: %d, NAME: %s, next: 0x%.8X\n", i, p, p->id, p->name, p->next);
			p = p->next;
		}
	}
}

#endif

/***********************************************************/
// [2-2.10] Insert
/***********************************************************/

#if 0

int Insert_Data(SCORE* d)
{






}

#endif

#if 0

void main(void)
{
	int i;
	int r;

	Init_Hash_Table();

	for (i = 0; i < MAX_ST; i++)
	{
		printf("[Loop: %d] Insert Result=%d, ID=%d\n", i, r = Insert_Data(&test[i]), test[i].id);
		Print_All_Data();
	}
}

#endif

/***********************************************************/
// [2-2.11] Delete
/***********************************************************/

#if 0

int Delete_Data(int id)
{






}

#endif

#if 0

void main(void)
{
	int i;
	int r;

	Init_Hash_Table();

	for (i = 0; i < MAX_ST; i++) printf("[Loop: %d] Insert Result=%d, ID=%d\n", i, r = Insert_Data(&test[i]), test[i].id);
	Print_All_Data();

	printf("[1] Delete Result=%d\n", r = Delete_Data(1));
	printf("[11] Delete Result=%d\n", r = Delete_Data(11));
	printf("[16] Delete Result=%d\n", r = Delete_Data(16));
	printf("[9] Delete Result=%d\n", r = Delete_Data(9));
	printf("[10] Delete Result=%d\n", r = Delete_Data(10));
	Print_All_Data();

	printf("Inserted Position=%d, ID=%d\n", r = Insert_Data(&test[1]), test[1].id);
	printf("Inserted Position=%d, ID=%d\n", r = Insert_Data(&test[11]), test[11].id);
	Print_All_Data();
}

#endif

/***********************************************************/
// [2-2.12] Search
/***********************************************************/

#if 0

SCORE* Search_Data(int id)
{





}

#endif

#if 0

void main(void)
{
	int i;
	int r;
	SCORE* p;

	Init_Hash_Table();

	for (i = 0; i < MAX_ST; i++) printf("[Loop: %d] Insert Result=%d, ID=%d\n", i, r = Insert_Data(&test[i]), test[i].id);
	Print_All_Data();

	printf("Serch Result=0x%.8X\n", p = Search_Data(3));
	if (p) printf("[%d] address:0x%.8X, ID: %d, NAME: %s, next: 0x%.8X\n", i, p, p->id, p->name, p->next);
	printf("Serch Result=0x%.8X\n", p = Search_Data(12));
	if (p) printf("[%d] address:0x%.8X, ID: %d, NAME: %s, next: 0x%.8X\n", i, p, p->id, p->name, p->next);
	printf("Serch Result=0x%.8X\n", p = Search_Data(25));
	if (p) printf("[%d] address:0x%.8X, ID: %d, NAME: %s, next: 0x%.8X\n", i, p, p->id, p->name, p->next);
}

#endif

#endif

/***********************************************************/
// [2-3] Tree
/***********************************************************/

/***********************************************************/
// [2-3-1] Heap 
/***********************************************************/
#if 0

/***********************************************************/
// [2-3-1.1] Heap �ڷ�
/***********************************************************/

#if 01
#include <stdio.h>
#define NUM_DATA	(8)
#define MAX_DATA	(NUM_DATA)
#define MAX_HEAP	(MAX_DATA+1)
#define LAST_NODE	(MAX_DATA+1)
int heap[MAX_HEAP];
int lastnode = 1;
int exam[NUM_DATA + 1] = { 0,4,8,2,7,1,3,6,5 }; // 0�� index ���� ����
#define PRINT_TREE {int j;printf("( ");	for(j=1;j<LAST_NODE;j++){printf("%3d ",heap[j]);}printf(")\n");}
// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�
int Heap_Push_Minheap(int d);
int Heap_Pop_Minheap(int* d);
int Heap_Push_Maxheap(int d);
int Heap_Pop_Maxheap(int* d);
void Heap_Sort(int* data, int cnt, int order);
#endif
/***********************************************************/
// [2-3-1.2] Heap Push (Min Heap)
/***********************************************************/
#if 01
//�������� heap Ȱ��
//lastnode ���� Ȱ��(lastnode == LAST_NODE)�̸� full
int Heap_Push_Minheap(int d) 
{
	if (lastnode == LAST_NODE) return 0;

	heap[lastnode] = d;
	int idx = lastnode;
	lastnode++;

	while (1)
	{
		if ((idx / 2) > 0 && heap[idx] < heap[idx / 2])
		{
			int temp = heap[idx/2];
			heap[idx / 2] = heap[idx];
			heap[idx] = temp;
			idx /= 2;
		}
		else break;
	}

	return 1;
}
#endif

#if 0
int main(void)
{
	int i;
	printf("Heap Push Test (Minheap)\n");

	for (i = 1; i <= NUM_DATA; i++)
	{
		printf("[%d] Heap_Push_Minheap(%d) => %d", i, exam[i], Heap_Push_Minheap(exam[i]));
		PRINT_TREE;
	}
	printf("[9] Heap_Push_Minheap(9) => %d\n", Heap_Push_Minheap(9));

	return 0;
}
#endif

/***********************************************************/
// [2-3-1.3] Heap Pop (Min Heap)
/***********************************************************/
#if 01
//lastnode == 1 empty
int Heap_Pop_Minheap(int *d)
{
	int P, C;

	if (lastnode == 1) return 0;
	
	*d = heap[1];
	lastnode--; //lastnode �ڸ��� �߰��ϹǷ� ������ ����ִ� ����. Ŀ����� ���� ��. ���� ���� ���� 
	heap[1] = heap[lastnode];
	heap[lastnode] = 0;

	P = 1;

	while (1)
	{
		if (P * 2 < lastnode)
		{
			if (P*2 +1 >= lastnode) C = P * 2;
			else
			{
				if (heap[2 * P] > heap[2 * P + 1]) C = 2 * P + 1;
				else C = 2 * P;
			}

			if (heap[P] < heap[C]) break;
			else
			{
				int temp = heap[P];
				heap[P] = heap[C];
				heap[C] = temp;
				P = C;
			}
		}

		else break;
	}

	return 1;
}
#endif

#if 0
int main(void)
{
	int i, ret;
	printf("Heap Pop Test (Minheap)\n");

	for (i = 1; i <= NUM_DATA; i++)
	{
		printf("[%d] Heap_Push_Minheap(%d) => %d", i, exam[i], Heap_Push_Minheap(exam[i]));
		PRINT_TREE;
	}

	for (i = 1; i <= NUM_DATA; i++)
	{
		printf("[%d] Heap_Pop_Minheap() => %d - ", i, Heap_Pop_Minheap(&ret));
		printf("%d\n", ret);
	}
	printf("[9] Heap_Pop_Minheap() => %d\n", Heap_Pop_Minheap(&ret));

	return 0;
}

#endif


/***********************************************************/
// [2-3-1.4] Heap Push (Max Heap)
/***********************************************************/
#if 01
int Heap_Push_Maxheap(int d)
{
	if (lastnode == LAST_NODE) return 0;

	heap[lastnode] = d;
	int idx = lastnode;
	lastnode++;

	while (1)
	{
		if ((idx / 2) > 0 && heap[idx] > heap[idx / 2])
		{
			int temp = heap[idx / 2];
			heap[idx / 2] = heap[idx];
			heap[idx] = temp;
			idx /= 2;
		}
		else break;
	}

	return 1;
}

#endif

#if 0
int main(void)
{
	int i;
	printf("Heap Push Test (Maxheap)\n");

	for (i = 1; i <= NUM_DATA; i++)
	{
		printf("[%d] Heap_Push_Maxheap(%d) => %d", i, exam[i], Heap_Push_Maxheap(exam[i]));
		PRINT_TREE;
	}
	printf("[9] Heap_Push_Maxheap(9) => %d\n", Heap_Push_Maxheap(9));

	return 0;
}
#endif

/***********************************************************/
// [2-3-1.5] Heap Pop (Max Heap)
/***********************************************************/
#if 01
int Heap_Pop_Maxheap(int* d)
{
	int P, C;

	if (lastnode == 1) return 0;

	*d = heap[1];
	lastnode--; //lastnode �ڸ��� �߰��ϹǷ� ������ ����ִ� ����. Ŀ����� ���� ��. ���� ���� ���� 
	heap[1] = heap[lastnode];
	heap[lastnode] = 0;

	P = 1;

	while (1)
	{
		if (P * 2 < lastnode)
		{
			if (P * 2 + 1 >= lastnode) C = P * 2;
			else
			{
				if (heap[2 * P] < heap[2 * P + 1]) C = 2 * P + 1;
				else C = 2 * P;
			}

			if (heap[P] > heap[C]) break;
			else
			{
				int temp = heap[P];
				heap[P] = heap[C];
				heap[C] = temp;
				P = C;
			}
		}

		else break;
	}

	return 1;
}

#endif

#if 0
int main(void)
{
	int i, ret;
	printf("Heap Pop Test (Maxheap)\n");

	for (i = 1; i <= NUM_DATA; i++)
	{
		printf("[%d] Heap_Push_Maxheap(%d) => %d", i, exam[i], Heap_Push_Maxheap(exam[i]));
		PRINT_TREE;
	}

	for (i = 1; i <= NUM_DATA; i++)
	{
		printf("[%d] Heap_Pop_Maxheap() => %d - ", i, Heap_Pop_Maxheap(&ret));
		printf("%d\n", ret);
	}
	printf("[9] Heap_Pop_Maxheap() => %d\n", Heap_Pop_Maxheap(&ret));

	return 0;
}

#endif

/***********************************************************/
// [2-3-1.6] Heap Sort 
/***********************************************************/
#if 01
typedef int (*HEAP_PUSH)(int*, int, int*, int);
typedef int (*HEAP_POP)(int*, int*, int*);

void Heap_Sort(int* data, int cnt, int order)
{
	int temp[NUM_DATA + 1];

	int i;
	for (i = 0; i < NUM_DATA; i++)
		Heap_Push_Minheap(data[i]);

	for (i = 0; i < NUM_DATA; i++)
	{
		int res = Heap_Pop_Minheap(&temp[i]);
		if (res > 0) data[i] = temp[i];
	}
	
}

#endif

#if 01
int main(void)
{
	int i, data[NUM_DATA + 1];
	printf("Heap Sort Test\n\n");

	printf("Original data : ");
	for (i = 0; i < NUM_DATA; i++)
	{
		data[i] = exam[i + 1];
		printf("%d ", data[i]);
	}
	printf("\n");

	Heap_Sort(data, NUM_DATA, 0);
	printf("Sorted data : ");
	for (i = 0; i < NUM_DATA; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");

	return 0;
}

#endif


#endif


/***********************************************************/
// [2-3-2.1~4] Segment Tree
/***********************************************************/

#if 0

/***********************************************************/
// [2-3-2.1] Segment Tree �ڷ� Ȯ��
/***********************************************************/
#if 0
#include <stdio.h>

#define NUM_DATA	(5)
#define MAX_DATA	(NUM_DATA)
#define MAX_TREE	(MAX_DATA*2)
#define LAST_NODE	(MAX_DATA*2-1)

int tree[MAX_TREE];

int exam[NUM_DATA + 1] = { 0,1,2,3,4,5 }; // 0�� index ���� ����

#define PRINT_TREE {int j;printf("( ");	for(j=1;j<=LAST_NODE;j++){printf("%3d ",tree[j]);}printf(")\n");}


// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�
void Update_New_Data(int node, int s, int e, int idx, int data);
void Update_Add(int node, int s, int e, int us, int ue, int add);
int Query(int node, int s, int e, int qs, int qe);
#endif
/***********************************************************/
// [2-3-2.2] ���ο� �������� �߰� �� ������ ������Ʈ �Լ�
/***********************************************************/
#if 0
void Update_New_Data(int node, int s, int e, int idx, int data)
{






}
#endif

#if 0
void main(void)
{
	int i;

	printf("Update_New_Data() Test\n");

	for (i = 1; i <= NUM_DATA; i++)
	{
		Update_New_Data(1, 1, NUM_DATA, i, exam[i]);
		printf("[%d] data : %d ", i, exam[i]);
		PRINT_TREE;
	}
}
#endif


/***********************************************************/
// [2-3-2.3] ���� ���� ��û
/***********************************************************/
#if 0
int Query(int node, int s, int e, int qs, int qe)
{







}
#endif

#if 0
void main(void)
{
	int i;

	printf("Query() Test\n");

	for (i = 1; i <= NUM_DATA; i++)
	{
		Update_New_Data(1, 1, NUM_DATA, i, exam[i]);
	}

	printf("Query[1~5] : result = %d\n", Query(1, 1, NUM_DATA, 1, 5));
	printf("Query[1~3] : result = %d\n", Query(1, 1, NUM_DATA, 1, 3));
	printf("Query[4~5] : result = %d\n", Query(1, 1, NUM_DATA, 4, 5));
	printf("Query[2~4] : result = %d\n", Query(1, 1, NUM_DATA, 2, 4));
	printf("Query[3~5] : result = %d\n", Query(1, 1, NUM_DATA, 3, 5));
}
#endif


/*************************************************************/
// [2-3-2.4] Ư�� ���� ������ ���� �Լ� - ������ ����/����
/*************************************************************/
#if 0
void Update_Add(int node, int s, int e, int us, int ue, int add)
{









}
#endif

#if 0
void main(void)
{
	int i;

	printf("Update_Add() Test\n");

	for (i = 1; i <= NUM_DATA; i++)
	{
		Update_New_Data(1, 1, NUM_DATA, i, exam[i]);
	}

	printf("[Before Range Update] ");
	PRINT_TREE;
	printf("Query[1~5] : result = %d\n", Query(1, 1, NUM_DATA, 1, 5));
	printf("Query[1~3] : result = %d\n", Query(1, 1, NUM_DATA, 1, 3));
	printf("Query[4~5] : result = %d\n", Query(1, 1, NUM_DATA, 4, 5));
	printf("Query[2~4] : result = %d\n", Query(1, 1, NUM_DATA, 2, 4));
	printf("Query[3~5] : result = %d\n", Query(1, 1, NUM_DATA, 3, 5));

	Update_Add(1, 1, NUM_DATA, 2, 4, 2);

	printf("\n[After Range Update] ");
	PRINT_TREE;
	printf("Query[1~5] : result = %d\n", Query(1, 1, NUM_DATA, 1, 5));
	printf("Query[1~3] : result = %d\n", Query(1, 1, NUM_DATA, 1, 3));
	printf("Query[4~5] : result = %d\n", Query(1, 1, NUM_DATA, 4, 5));
	printf("Query[2~4] : result = %d\n", Query(1, 1, NUM_DATA, 2, 4));
	printf("Query[3~5] : result = %d\n", Query(1, 1, NUM_DATA, 3, 5));
}
#endif
#endif


/***********************************************************/
// [2-3-2.5~9] Segment Tree with Lazy Propagation
/***********************************************************/

#if 0

/***********************************************************/
// [2-3-2.5] Segment Tree with Lazy Propagation �ڷ� Ȯ��
/***********************************************************/
#if 0
#include <stdio.h>

#define NUM_DATA	(5)
#define MAX_DATA	(NUM_DATA)
#define MAX_TREE	(MAX_DATA*2)
#define LAST_NODE	(MAX_DATA*2-1)

int tree[MAX_TREE];
int lazy[MAX_TREE];

int exam[NUM_DATA + 1] = { 0,1,2,3,4,5 }; // 0�� index ���� ����

#define PRINT_TREE {int j;printf("( ");	for(j=1;j<=LAST_NODE;j++){printf("%3d ",tree[j]);}printf(")\n");}


// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�
void Propagate(int n, int s, int e);
void Update_New_Data_Lazy(int node, int s, int e, int idx, int data);
void Update_Add_Lazy(int node, int s, int e, int us, int ue, int add);
int Query_Lazy(int node, int s, int e, int qs, int qe);
#endif


/***********************************************************/
// [2-3-2.6] Propagate �Լ�
/***********************************************************/
#if 0

void Propagate(int node, int s, int e)
{







}
#endif

/***********************************************************/
// [2-3-2.7] ���ο� data �߰�/Update
/***********************************************************/

#if 0
void Update_New_Data_Lazy(int node, int s, int e, int idx, int data)
{









}
#endif

#if 0
void main(void)
{
	int i;

	printf("Update_New_Data() Test\n");

	for (i = 1; i <= NUM_DATA; i++)
	{
		Update_New_Data_Lazy(1, 1, NUM_DATA, i, exam[i]);
		printf("[%d] data : %d ", i, exam[i]);
		PRINT_TREE;
	}
}
#endif


/***********************************************************/
// [2-3-2.8] ���� ���� ��û
/***********************************************************/
#if 0
int Query_Lazy(int node, int s, int e, int qs, int qe)
{







}
#endif

#if 0
void main(void)
{
	int i;

	printf("Query() Test\n");

	for (i = 1; i <= NUM_DATA; i++)
	{
		Update_New_Data_Lazy(1, 1, NUM_DATA, i, exam[i]);
	}

	printf("Query[1~5] : result = %d\n", Query_Lazy(1, 1, NUM_DATA, 1, 5));
	printf("Query[1~3] : result = %d\n", Query_Lazy(1, 1, NUM_DATA, 1, 3));
	printf("Query[4~5] : result = %d\n", Query_Lazy(1, 1, NUM_DATA, 4, 5));
	printf("Query[2~4] : result = %d\n", Query_Lazy(1, 1, NUM_DATA, 2, 4));
	printf("Query[3~5] : result = %d\n", Query_Lazy(1, 1, NUM_DATA, 3, 5));
}
#endif


/*************************************************************/
// [2-3-2.9] Ư�� ���� ������ ���� �Լ� - ������ ����/����
/*************************************************************/
#if 0
void Update_Add_Lazy(int node, int s, int e, int us, int ue, int add)
{








}
#endif

#if 0
void main(void)
{
	int i;

	printf("Update_Add() Test\n");

	for (i = 1; i <= NUM_DATA; i++)
	{
		Update_New_Data_Lazy(1, 1, NUM_DATA, i, exam[i]);
	}

	printf("[Before Range Update] ");
	PRINT_TREE;
	printf("Query[1~5] : result = %d\n", Query_Lazy(1, 1, NUM_DATA, 1, 5));
	printf("Query[1~3] : result = %d\n", Query_Lazy(1, 1, NUM_DATA, 1, 3));
	printf("Query[4~5] : result = %d\n", Query_Lazy(1, 1, NUM_DATA, 4, 5));
	printf("Query[2~4] : result = %d\n", Query_Lazy(1, 1, NUM_DATA, 2, 4));
	printf("Query[3~5] : result = %d\n", Query_Lazy(1, 1, NUM_DATA, 3, 5));

	Update_Add_Lazy(1, 1, NUM_DATA, 2, 4, 2);

	printf("\n[After Range Update] ");
	PRINT_TREE;
	printf("Query[1~5] : result = %d\n", Query_Lazy(1, 1, NUM_DATA, 1, 5));
	printf("Query[1~3] : result = %d\n", Query_Lazy(1, 1, NUM_DATA, 1, 3));
	printf("Query[4~5] : result = %d\n", Query_Lazy(1, 1, NUM_DATA, 4, 5));
	printf("Query[2~4] : result = %d\n", Query_Lazy(1, 1, NUM_DATA, 2, 4));
	printf("Query[3~5] : result = %d\n", Query_Lazy(1, 1, NUM_DATA, 3, 5));
}
#endif
#endif


/***********************************************************/
// [2-3-3] Fenwick Tree
/***********************************************************/

#if 0

/***********************************************************/
// [2-3-3.1] Fenwick Tree �ڷ� Ȯ��
/***********************************************************/
#if 0
#include <stdio.h>

#define NUM_DATA	(16)
#define MAX_DATA	(NUM_DATA)
#define MAX_TREE	(MAX_DATA+1)
#define LAST_NODE	(MAX_DATA)

#define LSB(X) ((X)&(-(X)))

int fenwick_tree[MAX_TREE];
int exam[NUM_DATA + 1] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 }; // 0�� index ���� ����

#define PRINT_TREE {int j;printf("( ");	for(j=1;j<=LAST_NODE;j++){printf("%3d ",fenwick_tree[j]);}printf(")\n");}


// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�
void Init_Fenwick_Tree(void);
int Get_Psum(int idx);
void Update_Add(int idx, int val);
#endif

/***********************************************************/
// [2-3-3.2] Fenwick Tree �ʱ�ȭ
/***********************************************************/
#if 0
void Init_Fenwick_Tree(void)
{






}
#endif

#if 0
int main(void)
{
	int i;
	for (i = 1; i <= MAX_DATA; i++)
	{
		fenwick_tree[i] = exam[i];
	}

	printf("Fenwick Tree Initialization Test\n\n");

	Init_Fenwick_Tree();

	PRINT_TREE;

	return 0;
}
#endif

/***********************************************************/
// [2-3-3.3] Fenwick Tree Prefix Sum ���
/***********************************************************/
#if 0
int Get_Psum(int idx)
{






}
#endif

#if 0
int main(void)
{
	int i;
	for (i = 1; i <= MAX_DATA; i++)
	{
		fenwick_tree[i] = exam[i];
	}

	printf("Fenwick Tree prefix sum Test\n");
	Init_Fenwick_Tree();

	PRINT_TREE;

	printf("\n[Prefix Sum]\n");
	printf("Prefix sum[3] = %d\n", Get_Psum(3));
	printf("Prefix sum[5] = %d\n", Get_Psum(5));
	printf("Prefix sum[8] = %d\n", Get_Psum(8));
	printf("Prefix sum[10] = %d\n", Get_Psum(10));
	printf("Prefix sum[13] = %d\n", Get_Psum(13));

	printf("\n[Interval Sum]\n");
	printf("Sum [3~5] = %d\n", Get_Psum(5) - Get_Psum(3 - 1));
	printf("Sum [2~7] = %d\n", Get_Psum(7) - Get_Psum(2 - 1));
	printf("Sum [6~13] = %d\n", Get_Psum(13) - Get_Psum(6 - 1));

	return 0;
}
#endif

/***********************************************************/
// [2-3-3.4] ���� �� ����
/***********************************************************/
#if 0
void Update_Add(int idx, int val)
{





}
#endif

#if 0
int main(void)
{
	int i;
	for (i = 1; i <= MAX_DATA; i++)
	{
		fenwick_tree[i] = exam[i];
	}

	printf("Fenwick Tree Uadate Test\n");
	Init_Fenwick_Tree();

	PRINT_TREE;

	printf("[Prefix Sum]\n");
	printf("Prefix sum[3] = %d\n", Get_Psum(3));
	printf("Prefix sum[5] = %d\n", Get_Psum(5));
	printf("Prefix sum[8] = %d\n", Get_Psum(8));

	Update_Add(4, 2);

	printf("\n[Prefix Sum after Update]\n");
	printf("Prefix sum[3] = %d\n", Get_Psum(3));
	printf("Prefix sum[5] = %d\n", Get_Psum(5));
	printf("Prefix sum[8] = %d\n", Get_Psum(8));

	return 0;
}
#endif
#endif

/***********************************************************/
// [2-3-4] Binary Search Tree
/***********************************************************/

#if 0

/***********************************************************/
// [2-3-4.1] ���� Tree�� �μ�
/***********************************************************/

#if 0

#include <stdio.h>

struct node
{
	char* name;
	struct node* left;
	struct node* right;
};

void Print_All_Node1(struct node* p);
void Print_All_Node2(struct node* p);
void Print_All_Node3(struct node* p);

void main(void)
{
	struct node root, node1, node2, node3, node4;

	root.left = &node1;
	root.right = &node2;
	root.name = "root";
	node1.left = &node3;
	node1.right = &node4;
	node1.name = "node1";
	node2.left = NULL;
	node2.right = NULL;
	node2.name = "node2";
	node3.left = NULL;
	node3.right = NULL;
	node3.name = "node3";
	node4.left = NULL;
	node4.right = NULL;
	node4.name = "node4";

	printf("In-order Traverse===============\n");
	Print_All_Node1(&root);
	printf("Pre-order Traverse===============\n");
	Print_All_Node2(&root);
	printf("Post-order Traverse===============\n");
	Print_All_Node3(&root);
}

void Print_All_Node1(struct node* p)
{
	if (p->left) Print_All_Node1(p->left);
	printf("Name = %s\n", p->name);
	if (p->right) Print_All_Node1(p->right);
}

void Print_All_Node2(struct node* p)
{
	printf("Name = %s\n", p->name);
	if (p->left) Print_All_Node2(p->left);
	if (p->right) Print_All_Node2(p->right);
}

void Print_All_Node3(struct node* p)
{
	if (p->left) Print_All_Node3(p->left);
	if (p->right) Print_All_Node3(p->right);
	printf("Name = %s\n", p->name);
}

#endif

/***********************************************************/
// [2-3-4.2] ���� Ʈ���� ���� �⺻ �Լ���
/***********************************************************/

#if 0

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <malloc.h>

typedef struct _score
{
	int id;
	int jumsu;
	char name[10];
	struct _score* left;
	struct _score* right;
	struct _score* parent;
}SCORE;

SCORE* Root;

#define MAX_ST		20

// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�

void Print_All_Node(SCORE* p);
void Delete_All_Node(SCORE* p);
int Insert_Node(SCORE* head, SCORE* d);
SCORE* Search_Node(SCORE* head, int id);
int Delete_Node(SCORE* head, int id);
SCORE* Creat_Node(SCORE* d);
int Create_Data(SCORE* p);

SCORE test[MAX_ST] = { { 10, 50, "kim" }, { 2, 80, "lew" }, { 8, 50, "lew" }, { 4, 45, "lee" }, { 1, 90, "song" }, \
{3, 45, "kim"}, { 5, 50, "song" }, { 9, 100, "lee" }, { 7, 75, "moon" }, { 6, 90, "park" }, \
{15, 90, "ki"}, { 11, 20, "kong" }, { 14, 40, "shin" }, { 12, 50, "son" }, { 17, 48, "lee" }, \
{20, 100, "min"}, { 19, 80, "you" }, { 13, 45, "song" }, { 16, 54, "no" }, { 18, 100, "yang" } };

int Create_Data(SCORE* p)
{
	printf("\n����� �Է��Ͻÿ� => ");
	scanf("%d", &p->id);
	fflush(stdin);
	printf("�̸��� �Է��Ͻÿ� => ");
	scanf("%s", p->name);
	fflush(stdin);
	printf("������ �Է��Ͻÿ� => ");
	scanf("%d", &p->jumsu);
	fflush(stdin);
	p->left = (SCORE*)0x0;
	p->right = (SCORE*)0x0;

	return 1;
}

void Print_All_Node(SCORE* p)
{

	if (p == (SCORE*)0)
	{
		printf("No Data\n");
		return;
	}

	if (p->left) Print_All_Node(p->left);
	printf("addr=0x%.8X, ID=%d, left=0x%.8X, right=0x%.8X, parent=0x%.8X\n", p, p->id, p->left, p->right, p->parent);
	if (p->right) Print_All_Node(p->right);
}

#endif

/***********************************************************/
// [2-3-4.3] ������ �ϳ��� �����Ͽ� Linked List�� �߰��ϴ� �Լ� (calloc ���)
/***********************************************************/

#if 0

SCORE* Creat_Node(SCORE* d)
{
	SCORE* p;

	p = calloc(1, sizeof(SCORE));
	if (p == (void*)0x0) return p;
	*p = *d;
	return p;
}

int Insert_Node(SCORE* head, SCORE* d)
{








}

#endif

#if 0

void main(void)
{
	int i;
	int r;

	for (i = 0; i < MAX_ST; i++)
	{
		printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
		Print_All_Node(Root);
	}
}

#endif

/***********************************************************/
// [2-3-4.4] �־��� ����� node�� ã�Ƽ� ����� �ּҸ� �����ϴ� �Լ�
/***********************************************************/

#if 0

SCORE* Search_Node(SCORE* head, int id)
{







}

#endif

#if 0

void main(void)
{
	int i;
	int r;
	SCORE* p;

	for (i = 0; i < 8; i++)
	{
		printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
	}

	Print_All_Node(Root);

	printf("Search Result = 0x%.8X\n", p = Search_Node(Root, 1));
	if (p) 	printf("addr=0x%.8X, ID=%d, left=0x%.8X, right=0x%.8X, parent=0x%.8X\n", p, p->id, p->left, p->right, p->parent);

	printf("Search Result = 0x%.8X\n", p = Search_Node(Root, 10));
	if (p)  printf("addr=0x%.8X, ID=%d, left=0x%.8X, right=0x%.8X, parent=0x%.8X\n", p, p->id, p->left, p->right, p->parent);

	printf("Search Result = 0x%.8X\n", p = Search_Node(Root, 9));
	if (p) 	printf("addr=0x%.8X, ID=%d, left=0x%.8X, right=0x%.8X, parent=0x%.8X\n", p, p->id, p->left, p->right, p->parent);

	printf("Search Result = 0x%.8X\n", p = Search_Node(Root, 4));
	if (p) 	printf("addr=0x%.8X, ID=%d, left=0x%.8X, right=0x%.8X, parent=0x%.8X\n", p, p->id, p->left, p->right, p->parent);

	printf("Search Result = 0x%.8X\n", p = Search_Node(Root, 7));
	if (p) 	printf("addr=0x%.8X, ID=%d, left=0x%.8X, right=0x%.8X, parent=0x%.8X\n", p, p->id, p->left, p->right, p->parent);
}


#endif

/***********************************************************/
// [2-3-4.5] �־��� ����� node�� ã�Ƽ� �����ϴ� �Լ�
/***********************************************************/

#if 0

void Delete_All_Node(SCORE* p)
{
	if (p->left) Delete_All_Node(p->left);
	if (p->right) Delete_All_Node(p->right);
	if (p == Root) Root = (SCORE*)0;
	free(p);
}

#endif

#if 0

// ������ ��� ��尡 leaf�� ��� ���� �Լ�
// main �Լ����� "�ڽ� ���� ����� ����" �κи� ����

int Delete_Node(SCORE* head, int id)
{
	SCORE* r;

	r = Search_Node(head, id);

	// Ž�� ���� 
	if (r == NULL) return -1;

	// ������ ��尡 leaf ��� ������ Root�� ��� Root�� NULL ����
	// Root�� �ƴϸ� ���� ��带 �����ϰ� �ִ� �θ��� left �Ǵ� right�� NULL ����







	free(r);
	return 1;
}

#endif

#if 0

// ������ ��� ��尡 leaf �Ǵ� �ڽ��� �ϳ��� ��� ���� �Լ�
// main �Լ����� "�ڽ� ���� ����� ����" �κа� "�ڽ��� 1�� ����� ����" ���� ����

int Delete_Node(SCORE* head, int id)
{
	SCORE* r;
	SCORE* next;

	r = Search_Node(head, id);

	// Ž�� ���� 
	if (r == NULL) return -1;

	// [1] �İ��� ����
	// leaf�̸� next�� NULL
	// �ڽ��� �ϳ��� ������ ����� left �Ǵ� right�� �����ϴ� �İ��� �ּҸ� next�� ����
	// �ڽ��� �ϳ��� NULL�� �ƴ� r->left �Ǵ� r->right�� �����Ѵ�





	// [2] �ڽ��� �ϳ� �ִ� ����� �İ��� parent�� ������ ����� �θ�� ����
	// �İ����� parent ��(next->parent)�� ������ ����� parent ��(r->parent)�� ����





	// [3] ������ ����� �θ��� left �Ǵ� right�� �İ��� ����
	// ������ ��尡 leaf ��� ������ Root�� ��� Root�� �İ��� �ּ�(next) ����
	// Root�� �ƴϸ� ���� ��带 �����ϰ� �ִ� �θ��� left �Ǵ� right�� �İ��� �ּ�(next) ����
	// leaf�� ���� �İ��ڿ� NULL�� �����Ͽ� �ξ����Ƿ� ������ �����Ͽ� �ۼ��� �ʿ䰡 ����






	free(r);
	return 1;
}

#endif

#if 0

// ������ ��� ��尡 �ڽ� �� �� ������ �����ϴ� ���� ���� �Լ�
// main �Լ����� ��� �ܰ踦 ���� �ǽ�

int Delete_Node(SCORE* head, int id)
{
	// �İ��� ���� ����
	SCORE* next;
	SCORE* r;

	r = Search_Node(head, id);
	if (r == NULL) return -1;

	// �ڽ��� ���̸� �İ��� Ž�� �� �İ��ڸ� ������ ����� �����Ϳ� �����ϰ� ���������� r�� �İ��� �ּ� ����
	if ((r->left != NULL) && (r->right != NULL))
	{
		// �ʿ�� �������� �����Ӱ� �����Ͽ� ���
		// �İ��� ������ ������ ��忡 ������ �� parent, left, right�� ���� ���� ����� ���� �����ؾ� �Ѵ�
		// �� ��ũ���� �״�� �����ϰ� ������ ������ �����Ͽ��� �Ѵ�







	}

	// �ڽ��� ���̸� r�� ������ ��� �ּҰ� ����Ǿ� �ְ� �ϳ��ų� leaf�̸� ó������ ���� ����� ��� ����
	// ���� �Ʒ� �ڵ�� �ڽ� ���� �����ϰ� ������

	// �İ��� ���� 
	// �ڽ��� �ϳ��� ��� ��� ���� �ڽ��� �ִ����� ã�Ƽ� �ڽ��� next�� �����Ѵ�
	// leaf�̸� �İ��ڴ� NULL�� ����(��, ������ leaf�̸� r-> left�� r->right�� NULL�̴�)
	if (r->left) next = r->left;
	else next = r->right;

	// �İ��ڰ� ���� ��� �İ�����parent = ���� ����� parent ����
	if (next) next->parent = r->parent;

	// ���� ����� Root�� �ƴ� ��� ���� ��� ����� parent�� �İ��ڸ� �����Ѵ�(leaf�̸� NULL�� ���Եȴ�)
	if (r != Root)
	{
		// ���� ��� ��尡 �θ��� left���� right������ ���� �θ��� left�� rght�� �İ��ڸ� �����Ѵ�
		if (r == r->parent->left) r->parent->left = next;
		else  r->parent->right = next;
	}

	// ������ ��尡 Root�� ��� �İ��ڸ� Root�� ����(leaf�̸� NULL�� ���Եȴ�)
	else
	{
		Root = next;
	}

	free(r);
	return 1;
}

#endif

#if 0

int Delete_Node(SCORE* head, int id)
{
	SCORE* p = head;
	SCORE* prev = Root;
	SCORE* next;
	SCORE* temp;

	while (p != (SCORE*)0)
	{
		if (id == p->id) break;
		prev = p;
		if (id > p->id) p = p->right;
		else p = p->left;
	}

	// Ž�� ���� 

	if (p == (SCORE*)0) return -1;

	// Leaf Node ����

	if ((p->left == (SCORE*)0) && (p->right == (SCORE*)0))
	{






	}

	// Single Child Node ����

	else if ((p->left == (SCORE*)0) || (p->right == (SCORE*)0))
	{






	}

	// �ڽ��� ���� Node ����

	else
	{






	}

	free(p);
	return 1;
}

#endif

#if 0

void main(void)
{
	int i;
	int r;

	/* �ڽ� ���� ����� ���� */

#if 0

	// 1. Root Only ����	

	printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", 0, r = Insert_Node(Root, &test[0]), test[0].id);
	Print_All_Node(Root);
	printf("Delete Node #10 Result = %d, Root = %d\n", Delete_Node(Root, 10), Root->id);
	printf("Root=%#.8x\n", Root);
	Print_All_Node(Root);

#endif

#if 0

	// 2. Left Leaf ��� ���� 

	for (i = 0; i < 7; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
	Print_All_Node(Root);
	printf("Delete Node #3 Result = %d, Root = %d\n", Delete_Node(Root, 3), Root->id);
	printf("Delete Node #1 Result = %d, Root = %d\n", Delete_Node(Root, 1), Root->id);
	Print_All_Node(Root);
	Delete_All_Node(Root);

#endif

#if 0

	// 3. Right Leaf ��� ���� 

	for (i = 0; i < 20; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
	Print_All_Node(Root);
	printf("Delete Node #13 Result = %d, Root = %d\n", Delete_Node(Root, 13), Root->id);
	printf("Delete Node #9 Result = %d, Root = %d\n", Delete_Node(Root, 9), Root->id);
	Print_All_Node(Root);
	Delete_All_Node(Root);

#endif

	/* �ڽ��� 1�� ����� ���� */

#if 0

	// 1. Left�� �ִ� Root ���� 

	for (i = 0; i < 10; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
	Print_All_Node(Root);
	printf("Delete Node #10 Result = %d, Root = %d\n", Delete_Node(Root, 10), Root->id);
	Print_All_Node(Root);
	Delete_All_Node(Root);

#endif

#if 0

	// 2. Right�� �ִ� Root ���� 

	printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", 0, r = Insert_Node(Root, &test[0]), test[0].id);
	for (i = 10; i < 20; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
	Print_All_Node(Root);
	printf("Delete Node #10 Result = %d, Root = %d\n", Delete_Node(Root, 10), Root->id);
	printf("Delete Node #8 Result = %d, Root = %d\n", Delete_Node(Root, 8), Root->id);
	Print_All_Node(Root);
	Delete_All_Node(Root);

#endif

#if 0

	// 3. Left�� �ִ� ��� ���� 

	for (i = 0; i < 20; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
	Print_All_Node(Root);
	printf("Delete Node #7 Result = %d, Root = %d\n", Delete_Node(Root, 7), Root->id);
	printf("Delete Node #19 Result = %d, Root = %d\n", Delete_Node(Root, 19), Root->id);
	printf("Delete Node #14 Result = %d, Root = %d\n", Delete_Node(Root, 14), Root->id);
	Print_All_Node(Root);
	Delete_All_Node(Root);

#endif

#if 0

	// 4. Right�� �ִ� ��� ���� 

	for (i = 0; i < 20; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
	Print_All_Node(Root);
	printf("Delete Node #5 Result = %d, Root = %d\n", Delete_Node(Root, 5), Root->id);
	printf("Delete Node #12 Result = %d, Root = %d\n", Delete_Node(Root, 12), Root->id);
	printf("Delete Node #11 Result = %d, Root = %d\n", Delete_Node(Root, 11), Root->id);
	Print_All_Node(Root);
	Delete_All_Node(Root);

#endif

	/* �ڽ��� 2�� ����� ����  */

#if 0

	// 1. Root ���� 

	for (i = 0; i < 20; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
	Print_All_Node(Root);
	printf("Delete Node #10 Result = %d, Root = %d\n", Delete_Node(Root, 10), Root->id);
	Print_All_Node(Root);
	Delete_All_Node(Root);

#endif

#if 0

	// 2. �߰� ��� ���� 

	for (i = 0; i < 20; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
	Print_All_Node(Root);
	printf("Delete Node #2 Result = %d, Root = %d\n", Delete_Node(Root, 2), Root->id);
	Print_All_Node(Root);
	printf("Delete Node #15 Result = %d, Root = %d\n", Delete_Node(Root, 15), Root->id);
	Print_All_Node(Root);
	printf("Delete Node #3 Result = %d, Root = %d\n", Delete_Node(Root, 3), Root->id);
	Print_All_Node(Root);
	printf("Delete Node #4 Result = %d, Root = %d\n", Delete_Node(Root, 4), Root->id);
	Print_All_Node(Root);
	Delete_All_Node(Root);

#endif
}

#endif

#endif


/***********************************************************/
// [2-3-5] ����� Ʈ��
/***********************************************************/

#if 0

/***********************************************************/
// [2-3-5.1] ����� Ʈ���� ���� �⺻ �Լ���
/***********************************************************/

#if 0

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <malloc.h>
#define RED 1
#define BLACK 0

typedef struct _score
{
	int id;
	int jumsu;
	char name[10];
	struct _score* left;
	struct _score* right;
	struct _score* parent;
	int color;
}SCORE;

SCORE* Root;
SCORE Null_Leap;

#define MAX_ST		20

// �������� ����Ǵ� ��� �Լ��� �� �κп� ������ �߰��Ѵ�

void Print_All_Node(SCORE* p);
void Delete_All_Node(SCORE* p);
int Insert_Node(SCORE* head, SCORE* d);
SCORE* Search_Node(SCORE* head, int id);
int Delete_Node(SCORE* head, int id);
SCORE* Creat_Node(SCORE* d);
int Create_Data(SCORE* p);
void Rotate_Left(SCORE** head, SCORE* d);
void Rotate_Right(SCORE** head, SCORE* d);
void Rebuild_Insert(SCORE** head, SCORE* d);
void Rebuild_Delete(SCORE** head, SCORE* d);

SCORE test[MAX_ST] = { { 10, 50, "kim" }, { 2, 80, "lew" }, { 8, 50, "lew" }, { 4, 45, "lee" }, { 1, 90, "song" }, \
{3, 45, "kim"}, { 5, 50, "song" }, { 9, 100, "lee" }, { 7, 75, "moon" }, { 6, 90, "park" }, \
{15, 90, "ki"}, { 11, 20, "kong" }, { 14, 40, "shin" }, { 12, 50, "son" }, { 17, 48, "lee" }, \
{20, 100, "min"}, { 19, 80, "you" }, { 13, 45, "song" }, { 16, 54, "no" }, { 18, 100, "yang" } };

void Print_All_Node(SCORE* p)
{

	if (p == (SCORE*)0)
	{
		printf("No Data\n");
		return;
	}
	if (p == &Null_Leap)return;
	if (p->left) Print_All_Node(p->left);
	printf("[%c] ", p->color ? 'R' : 'B');
	printf("addr=0x%.8X, ID=%d, left=0x%.8X, right=0x%.8X, parent=0x%.8X\n", p, p->id, p->left, p->right, p->parent);
	if (p->right) Print_All_Node(p->right);
}

SCORE* Search_Node(SCORE* head, int id)
{
	if (head == (SCORE*)0) return (SCORE*)0;

	for (;;)
	{
		if (head == NULL) return NULL;

		if (head->id > id)
		{
			head = head->left;
		}
		else if (head->id < id)
		{
			head = head->right;
		}
		else return head;

	}
}

SCORE* Creat_Node(SCORE* d)
{
	SCORE* p;

	p = calloc(1, sizeof(SCORE));
	if (p == (void*)0x0) return p;
	*p = *d;

	p->left = &Null_Leap;
	p->right = &Null_Leap;
	p->color = RED;
	return p;
}
int Create_Data(SCORE* p)
{
	printf("\n����� �Է��Ͻÿ� => ");
	scanf("%d", &p->id);
	fflush(stdin);
	printf("�̸��� �Է��Ͻÿ� => ");
	scanf("%s", p->name);
	fflush(stdin);
	printf("������ �Է��Ͻÿ� => ");
	scanf("%d", &p->jumsu);
	fflush(stdin);

	p->left = &Null_Leap;
	p->right = &Null_Leap;
	p->color = RED;

	return 1;
}

#endif

/***********************************************************/
// [2-3-5.2] ������ �ϳ��� �����Ͽ� Linked List�� �߰��ϴ� �Լ� (calloc ���)
/***********************************************************/

#if 0

int Insert_Node(SCORE* head, SCORE* d)
{





}

#endif

#if 0

void main(void)
{
	int i;
	int r;

	for (i = 0; i < MAX_ST; i++)
	{
		printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
		Print_All_Node(Root);
	}
}

#endif

/***********************************************************/
// [2-3-5.3] Ư�� ��带 �������� ȸ�� �ϴ� �Լ�
/***********************************************************/

#if 0

void Rotate_Left(SCORE** head, SCORE* d)
{





}

void Rotate_Right(SCORE** head, SCORE* d)
{






}

#endif

#if 0

void main(void)
{
	int i;
	int r;

	for (i = 0; i < 5; i++)
	{
		printf("[Loop: %d] Insert Node Result=%d, ID=%d, Root = %#08x\n", i, r = Insert_Node(Root, &test[i]), test[i].id, Root);
		Print_All_Node(Root);
	}

	Rotate_Left(&Root, Search_Node(Root, 2));
	printf("Rotate Left  Root = %#08x\n", Root);
	Print_All_Node(Root);

	Rotate_Right(&Root, Search_Node(Root, 8));
	printf("Rotate Right Root = %#08x\n", Root);
	Print_All_Node(Root);
}

#endif

/***********************************************************/
// [2-3-5.4] ������ ��Ģ�� �µ��� ������ �ϴ� �Լ�
/***********************************************************/

#if 0

void Rebuild_Insert(SCORE** head, SCORE* d)
{




}
#endif

#if 0

void main(void)
{
	int i;
	int r;

	for (i = 0; i < MAX_ST; i++)
	{
		printf("[Loop: %d] Insert Node Result=%d, ID=%d, Root = %#08x\n", i, r = Insert_Node(Root, &test[i]), test[i].id, Root);
		Print_All_Node(Root);
	}
}

#endif

#endif

/***********************************************************/
// [2-3-5.5] �־��� ����� node�� ã�Ƽ� �����ϴ� �Լ�
/***********************************************************/

#if 0

void Delete_All_Node(SCORE* p)
{
	if (p->left != &Null_Leap) Delete_All_Node(p->left);
	if (p->right != &Null_Leap) Delete_All_Node(p->right);
	if (Root == p) Root = (SCORE*)0;
	free(p);
}

int Delete_Node(SCORE* head, int id)
{





}

#endif

#if 0

void main(void)
{
	int i;
	int r;

	/* Root Only����� ���� */
	printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", 0, r = Insert_Node(Root, &test[0]), test[0].id);
	Print_All_Node(Root);
	printf("Delete Node #10 Result = %d\n", Delete_Node(Root, 10));
	printf("Root=%#.8x\n", Root);
	Print_All_Node(Root);


	// 2. Non ���� ����� ����1 
	for (i = 0; i < 5; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
	Print_All_Node(Root);
	printf("Delete Node #10 Result = %d\n", Delete_Node(Root, 10));
	printf("Root=%#.8x, Root = %d\n", Root, Root->id);
	printf("Delete Node #1  Result = %d\n", Delete_Node(Root, 1));
	printf("Root=%#.8x, Root = %d\n", Root, Root->id);
	Print_All_Node(Root);
	Delete_All_Node(Root);

	// 3. Non ���� ����� ����2
	for (i = 0; i < 8; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
	Print_All_Node(Root);
	printf("Delete Node #2 Result = %d\n", Delete_Node(Root, 2));
	printf("Root=%#.8x, Root = %d\n", Root, Root->id);
	printf("Delete Node #8 Result = %d\n", Delete_Node(Root, 8));
	printf("Root=%#.8x, Root = %d\n", Root, Root->id);
	Print_All_Node(Root);
	Delete_All_Node(Root);

}

#endif

/***********************************************************/
// [2-3-5.6] ������ ��Ģ�� �µ��� ������ �ϴ� �Լ�
/***********************************************************/

#if 0

void Rebuild_Delete(SCORE** head, SCORE* d)
{
	SCORE* sibling = NULL;

	while ((d->parent != NULL) && (d->color == BLACK))
	{





	}
	d->color = BLACK;
}
#endif

#if 0

void main(void)
{
	int i;
	int r;

#if 0

	/* Case 1 */
	for (i = 0; i < 10; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
	Print_All_Node(Root);
	printf("Delete Node #8 Result = %d\n", Delete_Node(Root, 8));
	printf("Root=%#.8x\n", Root);
	Print_All_Node(Root);
	printf("Delete Node #4 Result = %d\n", Delete_Node(Root, 4));
	printf("Root=%#.8x\n", Root);
	Print_All_Node(Root);

	/*	Case 2	*/
	printf("Delete Node #6 Result = %d\n", Delete_Node(Root, 6));
	printf("Root=%#.8x\n", Root);
	Print_All_Node(Root);

#endif

#if 0

	/* Case 3 : ��Ȳ 3-2 */
	for (i = 0; i < 9; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
	Print_All_Node(Root);
	printf("Delete Node #3 Result = %d\n", Delete_Node(Root, 3));
	printf("Root=%#.8x\n", Root);
	Print_All_Node(Root);
	Delete_All_Node(Root);
	for (i = 0; i < 9; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
	Print_All_Node(Root);
	printf("Delete Node #1 Result = %d\n", Delete_Node(Root, 1));
	printf("Root=%#.8x\n", Root);
	Print_All_Node(Root);
	Delete_All_Node(Root);

#endif

#if 0

	/* Case 4 : ��Ȳ 3-3 -> 3-4*/
	for (i = 0; i < 5; i++) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
	Print_All_Node(Root);
	printf("Delete Node #8 Result = %d\n", Delete_Node(Root, 8));
	printf("Root=%#.8x\n", Root);
	Print_All_Node(Root);

#endif

#if 0

	/*	Case 5 : ��Ȳ 3-1 -> ��Ȳ 3-3 -> ��Ȳ 3-4	*/
	for (i = 19; i >= 14; i--) printf("[Loop: %d] Insert Node Result=%d, ID=%d\n", i, r = Insert_Node(Root, &test[i]), test[i].id);
	Print_All_Node(Root);
	printf("Delete Node #3 Result = %d\n", Delete_Node(Root, 13));
	printf("Root=%#.8x\n", Root);
	Print_All_Node(Root);

#endif

}

#endif