//#include <stdio.h>
//int a[13] = { 1, 7, 8, 9, 12, 15, 23, 27, 35, 55, 61,64,71 };
//int N = 13;
//
////d ������ ũ�ų� ���� ��� �� ���� ���� ����� �ε���
//int Binary_Search_Lower(int s, int e, int d)
//{
//	// ���⿡ �Լ��� �ϼ��Ͻÿ�.
//	int m, idx = -1;
//	while (s <= e)
//	{
//		m = (s + e) / 2;
//		if (a[m] >= d) //ã���� end�� ���δ�
//		{
//			idx = m;
//			e = m - 1;
//		}
//		else s = m + 1; //��ã���� �߰����� ���� �ٽ� ã�´�
//	}
//
//	return idx;
//}
//
////d ������ �۰ų� ���� ��� �� ���� ū ����� �ε���
//int Binary_Search_Upper(int s, int e, int d)
//{
//	// ���⿡ �Լ��� �ϼ��Ͻÿ�.
//	int m, idx = -1;
//	while (s <= e)
//	{
//		m = (s + e) / 2;
//		if (a[m] <= d) //ã���� �� ������������ ã�´�
//		{
//			idx = m;
//			s = m + 1;
//		}
//		else e = m - 1; //��ã���� �߰����� ���� �ٽ� ã�´�
//	}
//
//	return idx;
//}
//
//int main(void) {
//	int i;
//	int lower, upper;
//	lower = Binary_Search_Lower(0, N - 1, 10);
//	upper = Binary_Search_Upper(0, N - 1, 60);
//	if (lower != -1 && upper != -1)
//	{
//		for (i = lower; i <= upper; i++)
//		{
//			printf("%d ", a[i]);
//		}
//	}
//}