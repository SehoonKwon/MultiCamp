//#include <stdio.h>
//
////�׷��� �켱���� ť�� �ֱ�
////���� ��ȣ�� ���� ���� �켱���� ����
////�� Ǯ����
//
//#define MAXM ((int)3e5 + 10)
//#define MAXN ((int)1e5 + 10)
//#define MAXQ ((int)1e5 + 10)
//
//int M, N, Q;
//int A[MAXM];
//int B[MAXQ];
//
//typedef struct point
//{
//	int s;
//	int cnt;
//} QUE;
//
//QUE heap[MAXM];
//int lastnode;
//
//void input()
//{
//	scanf("%d %d %d", &M, &N, &Q);
//
//	int i;
//	for (i = 1; i < N + 1; i++)
//		scanf("%d", &A[i]);
//
//	for (i = 1; i < Q + 1; i++)
//		scanf("%d", &B[i]);
//}
//
//int comp(int a, int b) {
//	if (heap[a].cnt == heap[b].cnt) return heap[a].s < heap[b].s;
//	return heap[a].cnt > heap[b].cnt;
//}
//void push(int s, int cnt) {
//	int C, P;
//	heap[++lastnode].s = s; heap[lastnode].cnt = cnt;
//	for (C = lastnode, P = C / 2; P && !comp(P, C); C = P, P = C / 2) {
//		QUE tmp = heap[P]; heap[P] = heap[C]; heap[C] = tmp;
//	}
//}
//QUE pop() {
//	int P = 1, L = 2, R = 3, C;
//	QUE ret = heap[1], tmp;
//	heap[1] = heap[lastnode--];
//	for (; L <= lastnode; P = C, L = P * 2, R = L + 1) {
//		if (R > lastnode) C = L;
//		else C = comp(L, R) ? L : R;
//		if (comp(P, C)) break;
//		tmp = heap[P]; heap[P] = heap[C]; heap[C] = tmp;
//	}
//	return ret;
//}
//void setting()
//{
//	int s = 1, i, e;
//
//	//�ʱ� �׷� ����
//	for (i = 1; i < N + 1; i++)
//	{
//		if (A[i] - s > 0) push(s, A[i] - s); //�׷� ������ ť�� ����
//		s = A[i] + 1; //���ο� �׷��� ���۹�ȣ (�� ����)
//	}
//
//	if (M - s + 1 > 0) push(s, M - s + 1);
//
//	//���� ������ ģ���鿡 ���� �׷� ���� + �ڸ� ���ϱ�
//	for (i = N + 1; i < B[Q] + 1; i++) // M���� �� �ʿ� ���� ������ ģ�������� �¼���ȣ ���ϸ� ��
//	{
//		QUE cur = pop(); //�׷� �� ��ǻ�� ���� ���� ���� �׷�
//		e = cur.s + cur.cnt - 1;
//		A[i] = (cur.s + e) / 2;
//		if (A[i] - cur.s > 0) push(cur.s, A[i] - cur.s); //���ʿ� �׷� ����
//		if (e - A[i] > 0) push(A[i] + 1, e - A[i]);
//	}
//}
//
//void solve()
//{
//	setting();
//	
//	int i;
//	for (i = 1; i < Q + 1; i++)
//		printf("%d\n", A[B[i]]);
//}
//
//int main()
//{
//	input();
//	solve();
//
//	return 0;
//}
