//#include <stdio.h>
//
////그룹을 우선순위 큐에 넣기
////시작 번호가 작은 수가 우선순위 높음
////못 풀었음
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
//	//초기 그룹 생성
//	for (i = 1; i < N + 1; i++)
//	{
//		if (A[i] - s > 0) push(s, A[i] - s); //그룹 생성시 큐에 저장
//		s = A[i] + 1; //새로운 그룹의 시작번호 (맨 왼쪽)
//	}
//
//	if (M - s + 1 > 0) push(s, M - s + 1);
//
//	//새로 들어오는 친구들에 의한 그룹 생성 + 자리 구하기
//	for (i = N + 1; i < B[Q] + 1; i++) // M까지 갈 필요 없이 마지막 친구까지만 좌석번호 구하면 됌
//	{
//		QUE cur = pop(); //그룹 내 컴퓨터 수가 가장 많은 그룹
//		e = cur.s + cur.cnt - 1;
//		A[i] = (cur.s + e) / 2;
//		if (A[i] - cur.s > 0) push(cur.s, A[i] - cur.s); //왼쪽에 그룹 생성
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
