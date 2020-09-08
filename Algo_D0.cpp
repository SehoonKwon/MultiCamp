//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int N;
//char Array[101][101], Array2[101][101];
//int visit[101][101], visit2[101][101];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			cin >> Array[i][j];
//}
//
//void DFS(int X, int Y, char C)
//{
//	if (visit[Y][X] == true) return;
//	visit[Y][X] = true;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = X + dx[i];
//		int ny = Y + dy[i];
//
//		if (nx > -1 && nx < N && ny > -1 && ny < N)
//		{
//			if (visit[ny][nx] == false && Array[ny][nx] == C)
//				DFS(nx, ny, C);
//		}
//	}
//}
//
//void DFS2(int X, int Y, char C)
//{
//	if (visit2[Y][X] == true) return;
//	visit2[Y][X] = true;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = X + dx[i];
//		int ny = Y + dy[i];
//
//		if (nx > -1 && nx < N && ny > -1 && ny < N)
//		{
//			if (visit2[ny][nx] == false && Array2[ny][nx] == C)
//				DFS2(nx, ny, C);
//		}
//	}
//}
//
//void change()
//{
//	for(int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			if (Array2[i][j] == 'G') Array2[i][j] = 'R';
//}
//
//void solve()
//{
//	memcpy(Array2, Array, sizeof(Array));
//
//	change();
//
//	int cnt1 = 0, cnt2 = 0;
//	for(int i=0; i<N; i++)
//		for (int j = 0; j < N; j++)
//		{
//			if (Array[i][j] != 0)
//			{
//				if (visit[i][j] == false)
//				{
//					DFS(j, i, Array[i][j]);
//					cnt1++;
//				}
//			}
//
//			if (Array2[i][j] != 0)
//			{
//				if (visit2[i][j] == false)
//				{
//					DFS2(j, i, Array2[i][j]);
//					cnt2++;
//				}
//			}
//		}
//
//	cout << cnt1 << " " << cnt2;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}