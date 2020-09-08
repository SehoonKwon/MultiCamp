//#include <stdio.h>
//
//#define MAXN ((int)1e5 + 10)
//#define MAXM MAXN
//#define MAXTREE ( 1 << 18)
//
//int N, M;
//int O[MAXN], S[MAXN], T[MAXN];
//int tree[MAXTREE];
//int lazy[MAXTREE]; //lazy propagation용
//
//void input()
//{
//	int i;
//	scanf("%d %d", &N, &M);
//
//	for (i = 1; i < M + 1; i++)
//		scanf("%d %d %d", &O[i], &S[i], &T[i]);
//}
//
//void LazyPropagation(int n, int s, int e) {
//	int m = (s + e) / 2, L = n * 2, R = L + 1;
//	if (lazy[n] % 2) {//이 경우에는 반전이므로 홀수일때만 반전하면 됨
//		tree[n] = e - s + 1 - tree[n];
//		if (s != e) {//자식 노드가 있는 경우 표시
//			lazy[L] += lazy[n]; //일일히 작업하는게 아니므로 해당 노드 밑 자식들은 lazy가 누적되고 있으므로 ++아님
//			lazy[R] += lazy[n];
//		}
//	}
//
//	lazy[n] = 0;
//}
//
//void update(int node, int s, int e, int us, int ue)
//{
//	int  m = (s + e) / 2, L = node * 2, R = L + 1;
//	
//	LazyPropagation(node, s, e);//업데이트해야 할것이 있으면 업데이트 먼저 처리
//	if ((ue < s) || (e < us)) return;//범위 벗어남
//	if ((us <= s) && (e <= ue)) {//종단 노드까지 가지 않고 범위 내이면 여기서 끝냄
//		tree[node] = e - s + 1 - tree[node]; // 반전의 개수는 내 관할구역에서 현재 개수 빼기
//		if (s != e) {//자식 노드가 있는 경우 표시
//			lazy[L]++;
//			lazy[R]++;
//		}
//		return;
//	}
//
//	update(L, s, m, us, ue);
//	update(R, m + 1, e, us, ue);
//	tree[node] = tree[L] + tree[R];
//}
//
//int Query(int node, int s, int e, int qs, int qe)
//{
//	int  m = (s + e) / 2, L = node * 2, R = L + 1;
//	if (qe < s || e < qs) return 0; // 범위 벗어남. 항상 0이 아니라 구간 정보에 영향을 안미치는 의미 없는 수 리턴
//	if (qs <= s && e <= qe) return tree[node]; //범위 내 이므로 현재값 리턴
//	return Query(L, s, m, qs, qe) + Query(R, m + 1, e, qs, qe );  
//}
//
//void solve()
//{
//	//처음에 모두 꺼있으므로 Init은 불필요
//
//	int i;
//	for (i = 1; i < M + 1; i++)
//	{
//		//켜진 개수를 묻는 경우, S[i]부터 T[i]까지의 구간 합 출력
//		if (O[i])
//		{
//			printf("%d\n", Query(1, 1, N, S[i], T[i]));
//		}
//		else
//		{
//			update(1, 1, N, S[i], T[i]);
//		}
//	}
//}
//
//int main()
//{
//	input();
//	solve();
//
//	return 0;
//}