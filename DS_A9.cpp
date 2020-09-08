//#include <stdio.h>
//
////Segment Tree
//
//#define MAXN ((int)5e4)
//#define MAXQ ((int)2e5)
//#define MAXTREE (1 << 17) //2�� 17�� ǥ��. 1�� �������� 17�� ����Ʈ. (5���� ����� 2�� ������ = 2��16�� 65536 �� �ι����
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
////Ʈ�� ��ü�� �ʱ�ȭ
//void InitTree(int node, int s, int e)
//{
//	if (s == e) // Leaf node
//	{
//		tree[node] = D[s]; //���� ������ ����
//		IDX[s] = node; //���° �����Ͱ� ��� ������� ����
//		return;
//	}
//
//	//�ڽ��� ������ ���� �θ��忡 ������ �����Ƿ� postorder���
//	int  m = (s + e) / 2, L = node * 2, R = L + 1; //FUll BT�̹Ƿ� �׻� �ڽ� 2��
//
//	InitTree(L, s, m);
//	InitTree(R, m + 1, e);
//	tree[node] = tree[L] + tree[R];
//}
//
////���� Ǭ��
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
////����Ǯ��
//void update(int node, int s, int e, int idx)
//{
//	int  m = (s + e) / 2, L = node * 2, R = L + 1;
//	if (s == e) //������ idx�� ã�ƿ´�. idx�� ���ؼ� ���⶧����
//	{
//		tree[node] = D[s];
//		return;
//	}
//	
//	//m���� ũ�� ������
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
//	if (qe < s || e < qs) return 0; // ���� ���. �׻� 0�� �ƴ϶� ���� ������ ������ �ȹ�ġ�� �ǹ� ���� �� ����
//	if (qs <= s && e <= qe) return tree[node]; //���� �� �̹Ƿ� ���簪 ����
//	return Query(L, s, m, qs, qe) + Query(R, m + 1, e, qs, qe); //������
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
