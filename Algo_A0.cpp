//#include <iostream>
//using namespace std;
//
//#define endl "\n"
//#define MAXN ((int)5e4 + 10)
//#define MAXQ ((int)2e5 + 10)
//#define MAXTREE (1 << 17)
//
//int N, Q;
//
//int D[MAXN];
//int Rs[MAXQ];
//int Re[MAXQ];
//int tree[MAXTREE];
//
//void input()
//{
//	cin >> N >> Q;
//
//	for (int i = 1; i < N+1; i++)
//		cin >> D[i];
//
//	for (int i = 1; i < Q + 1; i++)
//		cin >> Rs[i] >> Re[i];
//}
//
//void Init(int node, int s, int e)
//{
//	if (s == e)
//	{
//		tree[node] = D[s];
//		return;
//	}
//
//	int m = (s + e) / 2, L = node * 2, R = L + 1;
//
//	Init(L, s, m);
//	Init(R, m + 1, e);
//
//	tree[node] = tree[L] + tree[R];
//}
//
//int Query(int node, int s, int e, int qs, int qe)
//{
//	int m = (s + e) / 2, L = node * 2, R = L + 1;
//	if (qe < s || e < qs) return 0;
//	if (qs <= s && e <= qe) return tree[node];
//	return Query(L, s, m, qs, qe) + Query(R, m + 1, e, qs, qe);
//}
//
//void solve()
//{
//	for (int i = 1; i < Q + 1; i++)
//		cout << Query(1, 1, N, Rs[i], Re[i]) << endl;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	input();
//	Init(1, 1, N);
//	solve();
//
//	return 0;
//}