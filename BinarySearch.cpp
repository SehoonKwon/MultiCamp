//#include <stdio.h>
//int a[13] = { 1, 7, 8, 9, 12, 15, 23, 27, 35, 55, 61,64,71 };
//int N = 13;
//
////방법1) 재귀
//#if 01
//int Binary_Search(int s, int e, int d)
//{
//	// 여기에 함수를 완성하시오.
//	if (s > e) return -1;
//
//	int m = (s + e) / 2;
//
//	if (a[m] == d) return m;
//	if (a[m] < d) return Binary_Search(m + 1, e, d);	
//	if (a[m] > d) return Binary_Search(s, e - 1, d);
//}
//#endif
//
////방법2) 반복문
//#if 0
//int Binary_Search(int s, int e, int d)
//{
//	int m = 0;
//	while (s <= e)
//	{
//		m = (s + e) / 2;
//		if (a[m] == d) return m;
//		else
//		{
//			if (a[m] < d) s = m + 1;
//			if (a[m] > d) e = e - 1;
//		}
//	}
//
//	return -1;
//}
//#endif
//
//int main(void) {
//	printf("Binary Search (71) = %d\n", Binary_Search(0, N - 1, 71));
//	printf("Binary Search (27) = %d\n", Binary_Search(0, N - 1, 27));
//	printf("Binary Search (15) = %d\n", Binary_Search(0, N - 1, 15));
//	printf("Binary Search (20) = %d\n", Binary_Search(0, N - 1, 20));
//	return 0;
//}