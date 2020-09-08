//#include <stdio.h>
//
////Segment Tree
//
//#define MAXN ((int)5e4)
//#define MAXQ ((int)2e5)
//#define MAXTREE (1 << 17) //2의 17승 표현. 1을 왼쪽으로 17번 쉬프트. (5만에 가까운 2의 제곱수 = 2의16승 65536 의 두배공간
//
//int N, Q;
//int D[MAXN + 10];
//int A[MAXQ + 10];
//int B[MAXQ + 10];
//int tree[MAXTREE];
//
//int MAX(int a, int b)
//{
//	return (a > b) ? a : b;
//}
//
////트리 전체를 초기화
//void InitTree(int node, int s, int e)
//{
//	if (s == e) // Leaf node
//	{
//		tree[node] = D[s]; //실제 데이터 저장
//		return;
//	}
//	
//	//자식의 정보를 통해 부모노드에 구간을 적으므로 postorder방식
//	int  m = (s + e) / 2, L = node * 2, R = L + 1; //FUll BT이므로 항상 자식 2명
//	
//	InitTree(L, s, m);
//	InitTree(R, m + 1, e);
//	tree[node] = MAX(tree[L], tree[R]);
//}
//
//int Query(int node, int s, int e, int qs, int qe)
//{
//	int  m = (s + e) / 2, L = node * 2, R = L + 1;
//	if (qe < s || e < qs) return 0; // 범위 벗어남. 항상 0이 아니라 구간 정보에 영향을 안미치는 의미 없는 수 리턴
//	if (qs <= s && e <= qe) return tree[node]; //범위 내 이므로 현재값 리턴
//	return MAX(Query(L, s, m, qs, qe), Query(R, m + 1, e, qs, qe )); //구간합이 아닌 구간 중 가장 큰 원소를 묻는 문제이므로 
//}
//
//void input()
//{
//	int i;
//	scanf("%d %d", &N, &Q);
//
//	for (i = 1; i < N + 1; i++) scanf("%d", &D[i]);
//	for (i = 1; i < Q + 1; i++) scanf("%d %d", &A[i], &B[i]);
//}
//
//void solve()
//{
//	int i;
//	InitTree(1, 1, N);
//
//	for (i = 1; i < Q + 1; i++)
//		printf("%d\n", Query(1, 1, N, A[i], B[i]));
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}
