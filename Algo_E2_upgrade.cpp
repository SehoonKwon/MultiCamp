//#include <iostream>
//using namespace std;
//
//// N�� 12�̻��� �� -> for������ üũ�ϸ� �ȉ� O(1)�������� üũ�� �� �ְ� -> �׷� �迭
//
//int N;
//int Array[14][14];
//int visit[14][14];
//int check[14];
//int cnt = 0;
//
//int isP(int Y, int X)
//{
//	//���� �˻�
//	if (check[X] == 1) return -1;
//
//	//�밢��
//
//
//	return 1;
//}
//
//void DFS(int idx)
//{
//	if (idx == N)
//	{
//		cnt++;
//		return;
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		int P = isP(idx, i);
//		if (P == -1) continue;
//
//		visit[idx][i] = true;
//		check[i]++;
//		DFS(idx + 1);
//		check[i]--;
//		visit[idx][i] = false;
//	}
//}
//
//void solve()
//{
//	DFS(0);
//
//	cout << cnt;
//}
//
//int main()
//{
//	cin >> N;
//	solve();
//	return 0;
//}