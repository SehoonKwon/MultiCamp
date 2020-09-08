//#include <iostream>
//using namespace std;
//
//int N, M;
//int Array[13][13];
//int visit[13];
//int cnt = 1;
//int isP = 0;
//
//void input()
//{
//	cin >> N >> M;
//	
//	int X;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			cin >> X;
//			Array[i][j] = X;
//			Array[j][i] = X;
//		}
//	}
//}
//
//int check(int idx, int c)
//{
//	for (int i = 0; i < N; i++)
//	{
//		if (i == idx) continue;
//
//		if (Array[idx][i] == 1 && visit[i] == c)
//			return 0;
//	}
//
//	return 1;
//}
//
//void DFS(int idx)
//{
//	if (idx == N)
//	{
//		isP = 1;
//		return;
//	}
//
//	for (int i = 1; i < M + 1; i++)
//	{
//		if (check(idx, i))
//		{
//			visit[idx] = i;
//			DFS(idx + 1);
//			if (isP == 1) return;
//			visit[idx] = 0;
//		}
//	}
//}
//
//void solve()
//{
//	DFS(0);
//
//	if (isP == 0) cout << "-1";
//	else
//	{
//		for (int i = 0; i < N; i++)
//			cout << visit[i] << " ";
//	}
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}