//#include <stdio.h>
//
////우선순위 큐 문제, 뭐가 우선순위 ?
////찾는게 아니라 만들어가야 풀 수 있음. 시간때문에
////1부터 시작해서 각각 2, 3, 5를 곱해가면서 수를 만들어 가야함. 이 때 겹치는 수는 앞으로도 겹칠 것이므로 하나빼고 제거
////힙에 1을 넣어놓고 만들기 시작. 만들면서 최솟값을 pop하면서 순서대로 정렬
//
//#define MAXN 1500
//
//int N;
//long long int agly[MAXN + 10]; //int범위를 벗어날 수도 있음, 실제로 벗어남. temp 변수들도 다 long long으로 해야 가능
//long long int heap[MAXN + 10];
//int lastnode = 1;
//
//void input()
//{
//	scanf("%d", &N);
//}
//
//void push(long long int X)
//{
//	int P, C, idx;
//	heap[lastnode] = X;
//	idx = lastnode;
//	lastnode++;
//
//	while (1)
//	{
//		if ((idx / 2) > 0 && heap[idx] < heap[idx / 2])
//		{
//			long long int temp = heap[idx / 2];
//			heap[idx / 2] = heap[idx];
//			heap[idx] = temp;
//			idx /= 2;
//		}
//		else break;
//	}
//}
//
//long long int pop()
//{
//	int P, C;
//	long long ret = heap[1];
//	heap[1] = heap[--lastnode]; // 먼저 감소시킨 뒤에 담기
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
//				long long int temp = heap[P];
//				heap[P] = heap[C];
//				heap[C] = temp;
//				P = C;
//			}
//		}
//
//		else break;
//	}
//
//	return ret;
//}
//
//void Make()
//{
//	int n = 0;
//	long long int val;
//	push(1);
//	while (n < MAXN)
//	{
//		val = pop();
//		if (agly[n] == val) continue; //이전에 꺼낸 값이랑 동일하면 넘어감
//		else
//		{
//			n++;
//			agly[n] = val;
//			push(val * 2);
//			push(val * 3);
//			push(val * 5);
//		}
//	}
//}
//
//void solve()
//{
//	printf("%lld\n", agly[N]);
//}
//
//int main()
//{
//	Make();
//	while (1)
//	{
//		input();
//		if (N == 0) break;
//
//		solve();
//	}
//
//	return 0;
//}