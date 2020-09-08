//#include <stdio.h>
//
//#define MAX (5000 + 10)
//
//int N;
//int Array[MAX];
//int MIN = 9999;
//int heap[MAX];
//int lastnode = 1;
//
//void input()
//{
//	scanf("%d", &N);
//
//	int i;
//	for (i = 1; i < N + 1; i++)
//		scanf("%d", &Array[i]);
//}
//
//void Heap_Push_Minheap(int d)
//{
//	if (lastnode == N + 1) return;
//
//	heap[lastnode] = d;
//	int idx = lastnode;
//	lastnode++;
//
//	while (1)
//	{
//		if ((idx / 2) > 0 && heap[idx] < heap[idx / 2])
//		{
//			int temp = heap[idx / 2];
//			heap[idx / 2] = heap[idx];
//			heap[idx] = temp;
//			idx /= 2;
//		}
//		else break;
//	}
//}
//
//int Heap_Pop_Minheap()
//{
//	int P, C, res;
//
//	if (lastnode == 1) return 0;
//
//	res = heap[1];
//	lastnode--; //lastnode 자리에 추가하므로 지금은 비어있는 상태. 커서라고 보면 됌. 따라서 먼저 감소 
//	heap[1] = heap[lastnode];
//	heap[lastnode] = 0;
//
//	P = 1;
//
//	while (1)
//	{
//		if (P * 2 < lastnode)
//		{
//			if (P * 2 + 1 >= lastnode) C = P * 2;
//			else
//			{
//				if (heap[2 * P] > heap[2 * P + 1]) C = 2 * P + 1;
//				else C = 2 * P;
//			}
//
//			if (heap[P] < heap[C]) break;
//			else
//			{
//				int temp = heap[P];
//				heap[P] = heap[C];
//				heap[C] = temp;
//				P = C;
//			}
//		}
//
//		else break;
//	}
//
//	return res;
//}
//
//void solve()
//{
//	int i, sum = 0, A = 0, B = 0;
//	// 처음에 모두 힙에넣어 민힙 상태 구성
//	for (i = 1; i < N + 1; i++)
//		Heap_Push_Minheap(Array[i]);
//
//	while (lastnode > 2) // 1개만 있는상태
//	{
//		A = Heap_Pop_Minheap();
//		B = Heap_Pop_Minheap();
//		sum += (A + B);
//		Heap_Push_Minheap(A + B);
//	}
//
//	printf("%d", sum);
//}
//
//int main()
//{
//	input();
//	solve();
//
//	return 0;
//}