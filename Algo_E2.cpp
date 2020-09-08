//#include <iostream>
//using namespace std;
//
//int N;
//int Array[14][14];
//int visit[14][14];
//int cnt = 0;
//
//int isP(int Y, int X)
//{
//	//세로 검사
//	for (int i = 0; i < N; i++)
//		if (visit[i][X] == true) return -1;
//
//	//대각선
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (abs(Y - i) == abs(X - j))
//				if (visit[i][j] == true) return -1;
//		}
//	}
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
//		DFS(idx + 1);
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