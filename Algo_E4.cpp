//#include <iostream>
//using namespace std;
//
//int N, M;
//int Array[101][101];
//int visit[101];
//int cnt = 0;
//
//void input()
//{
//	cin >> N;
//	cin >> M;
//	
//	int S, D;
//	for (int i = 0; i < M; i++)
//	{
//		cin >> S >> D;
//		Array[S][D] = 1;
//		Array[D][S] = 1;
//	}
//}
//
//void DFS(int Y)
//{
//	if (visit[Y] == true) return;
//	visit[Y] = true;
//	if (Y != 1) cnt++;
//
//	for (int i = 1; i < N + 1; i++)
//		if (visit[i] == false && Array[Y][i] == 1)
//			DFS(i);
//}
//
//void solve()
//{
//	DFS(1);
//
//	cout << cnt;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}