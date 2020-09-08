//#include <stdio.h>
//
//#define MAXN ((int)1e5 + 10)
//#define MAXM MAXN
//#define MAXTREE ( 1 << 18)
//
//int N, M;
//int O[MAXN], S[MAXN], T[MAXN];
//int tree[MAXTREE];
//int lazy[MAXTREE]; //lazy propagation��
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
//	if (lazy[n] % 2) {//�� ��쿡�� �����̹Ƿ� Ȧ���϶��� �����ϸ� ��
//		tree[n] = e - s + 1 - tree[n];
//		if (s != e) {//�ڽ� ��尡 �ִ� ��� ǥ��
//			lazy[L] += lazy[n]; //������ �۾��ϴ°� �ƴϹǷ� �ش� ��� �� �ڽĵ��� lazy�� �����ǰ� �����Ƿ� ++�ƴ�
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
//	LazyPropagation(node, s, e);//������Ʈ�ؾ� �Ұ��� ������ ������Ʈ ���� ó��
//	if ((ue < s) || (e < us)) return;//���� ���
//	if ((us <= s) && (e <= ue)) {//���� ������ ���� �ʰ� ���� ���̸� ���⼭ ����
//		tree[node] = e - s + 1 - tree[node]; // ������ ������ �� ���ұ������� ���� ���� ����
//		if (s != e) {//�ڽ� ��尡 �ִ� ��� ǥ��
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
//	if (qe < s || e < qs) return 0; // ���� ���. �׻� 0�� �ƴ϶� ���� ������ ������ �ȹ�ġ�� �ǹ� ���� �� ����
//	if (qs <= s && e <= qe) return tree[node]; //���� �� �̹Ƿ� ���簪 ����
//	return Query(L, s, m, qs, qe) + Query(R, m + 1, e, qs, qe );  
//}
//
//void solve()
//{
//	//ó���� ��� �������Ƿ� Init�� ���ʿ�
//
//	int i;
//	for (i = 1; i < M + 1; i++)
//	{
//		//���� ������ ���� ���, S[i]���� T[i]������ ���� �� ���
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