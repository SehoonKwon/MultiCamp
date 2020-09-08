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
//int I[MAXQ + 10];
//int C[MAXQ + 10];
//int tree[MAXTREE];
//int IDX[MAXN + 10];
//
////트리 전체를 초기화
//void InitTree(int node, int s, int e)
//{
//	if (s == e) // Leaf node
//	{
//		tree[node] = D[s]; //실제 데이터 저장
//		IDX[s] = node; //몇번째 데이터가 몇번 노드인지 저장
//		return;
//	}
//
//	//자식의 정보를 통해 부모노드에 구간을 적으므로 postorder방식
//	int  m = (s + e) / 2, L = node * 2, R = L + 1; //FUll BT이므로 항상 자식 2명
//
//	InitTree(L, s, m);
//	InitTree(R, m + 1, e);
//	tree[node] = tree[L] + tree[R];
//}
//
////내가 푼거
//#if 0
//void update(int idx, int add)
//{
//	int target = IDX[idx];
//
//	tree[target] += add;
//	int P = target / 2;
//
//	while (P > 0)
//	{
//		tree[P] += add;
//		P /= 2;
//	}
//
//}
//#else
////정석풀이
//void update(int node, int s, int e, int idx)
//{
//	int  m = (s + e) / 2, L = node * 2, R = L + 1;
//	if (s == e) //어차피 idx를 찾아온다. idx를 비교해서 오기때문에
//	{
//		tree[node] = D[s];
//		return;
//	}
//	
//	//m보다 크면 오른쪽
//	if (idx > m) update(R, m + 1, e, idx);
//	else update(L, s, m, idx);
//
//	tree[node] = tree[L] + tree[R];
//}
//
//#endif
//
//int Query(int node, int s, int e, int qs, int qe)
//{
//	int  m = (s + e) / 2, L = node * 2, R = L + 1;
//	if (qe < s || e < qs) return 0; // 범위 벗어남. 항상 0이 아니라 구간 정보에 영향을 안미치는 의미 없는 수 리턴
//	if (qs <= s && e <= qe) return tree[node]; //범위 내 이므로 현재값 리턴
//	return Query(L, s, m, qs, qe) + Query(R, m + 1, e, qs, qe); //구간합
//}
//
//void input()
//{
//	int i;
//	scanf("%d %d", &N, &Q);
//
//	for (i = 1; i < N + 1; i++) scanf("%d", &D[i]);
//	for (i = 1; i < Q + 1; i++) scanf("%d %d %d %d", &A[i], &B[i], &I[i], &C[i]);
//}
//
//void solve()
//{
//	int i;
//	InitTree(1, 1, N);
//
//	for (i = 1; i < Q + 1; i++)
//	{
//		printf("%d\n", Query(1, 1, N, A[i], B[i]));
//		//sol1
//		//update(I[i], C[i]);
//		
//		//sol2
//		D[I[i]] += C[i];
//		update(1, 1, N, I[i]);
//	}
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}
