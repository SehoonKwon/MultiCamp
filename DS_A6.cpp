//#include <stdio.h>
//
////�켱���� ť ����, ���� �켱���� ?
////ã�°� �ƴ϶� ������ Ǯ �� ����. �ð�������
////1���� �����ؼ� ���� 2, 3, 5�� ���ذ��鼭 ���� ����� ������. �� �� ��ġ�� ���� �����ε� ��ĥ ���̹Ƿ� �ϳ����� ����
////���� 1�� �־���� ����� ����. ����鼭 �ּڰ��� pop�ϸ鼭 ������� ����
//
//#define MAXN 1500
//
//int N;
//long long int agly[MAXN + 10]; //int������ ��� ���� ����, ������ ���. temp �����鵵 �� long long���� �ؾ� ����
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
//	heap[1] = heap[--lastnode]; // ���� ���ҽ�Ų �ڿ� ���
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
//		if (agly[n] == val) continue; //������ ���� ���̶� �����ϸ� �Ѿ
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