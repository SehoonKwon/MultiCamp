//#include <stdio.h>
//
//int N;
//int Array[30000 + 10];
//int temp[30000 + 10];
//
//void input()
//{
//	int i;
//	scanf("%d", &N);
//
//	for (i = 0; i < N; i++)
//		scanf("%d", &Array[i]);
//}
//
//void MergeSort(int s, int e)
//{
//	if (s >= e) return; //종료조건, 요소가 1개인 경우	
//	
//	//항상 왼쪽부터 호출
//	int m = (s + e) / 2;
//	MergeSort(s, m);
//	MergeSort(m + 1, e);
//	
//	//병합
//	int i = s, j = m + 1, k = s; // k는 temp의 IDX
//	while ((i <= m) && (j <= e)) //둘다 범위 안쪽일경우에만 비교해서 담기
//	{
//		if (Array[i] <= Array[j])
//		{
//			//아래 3줄은 사실 temp[k++] = Array[i++] 한줄로 모두 처리가능
//			temp[k] = Array[i];
//			k++;
//			i++;
//		}
//
//		else
//		{
//			temp[k] = Array[j];
//			k++;
//			j++;
//		}
//	}
//
//	//남은쪽 모두 가져오기. 어느 쪽이 남을지 모르므로 둘다 써준다.
//	while (i <= m)
//	{
//		temp[k] = Array[i];
//		k++;
//		i++;
//	}
//	while (j <= e)
//	{
//		temp[k] = Array[j];
//		k++;
//		j++;
//	}
//	
//	//원래 배열에 옮겨담기
//	for (i = s; i < e + 1; i++) Array[i] = temp[i];
//}
//
//void PRT()
//{
//	int i;
//	for (i = 0; i < N; i++)
//		printf("%d ", Array[i]);
//}
//
//int main()
//{
//	input();
//	MergeSort(0, N - 1);
//	PRT();
//
//	return 0;
//}