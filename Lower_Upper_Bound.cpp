//#include <stdio.h>
//int a[13] = { 1, 7, 8, 9, 12, 15, 23, 27, 35, 55, 61,64,71 };
//int N = 13;
//
////d 값보다 크거나 같은 요소 중 제일 작은 요소의 인덱스
//int Binary_Search_Lower(int s, int e, int d)
//{
//	// 여기에 함수를 완성하시오.
//	int m, idx = -1;
//	while (s <= e)
//	{
//		m = (s + e) / 2;
//		if (a[m] >= d) //찾으면 end를 줄인다
//		{
//			idx = m;
//			e = m - 1;
//		}
//		else s = m + 1; //못찾으면 중간이후 부터 다시 찾는다
//	}
//
//	return idx;
//}
//
////d 값보다 작거나 같은 요소 중 제일 큰 요소의 인덱스
//int Binary_Search_Upper(int s, int e, int d)
//{
//	// 여기에 함수를 완성하시오.
//	int m, idx = -1;
//	while (s <= e)
//	{
//		m = (s + e) / 2;
//		if (a[m] <= d) //찾으면 더 작은범위에서 찾는다
//		{
//			idx = m;
//			s = m + 1;
//		}
//		else e = m - 1; //못찾으면 중간이후 부터 다시 찾는다
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