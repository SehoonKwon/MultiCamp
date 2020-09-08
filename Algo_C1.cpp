//#include <iostream>
//#include <queue>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//#define MAX 987654321
//
//int N;
//int Array[101][101];
//int visit[101][101];
//int MIN = 987654321;
//int dx[] = { 1, 0, -1, 0 };
//int dy[] = { 0, 1, 0, -1 };
//
//struct point
//{
//	int x;
//	int y;
//};
//
//queue<point> q;
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			scanf("%1d", &Array[i][j]);
//}
//
//void BFS(int x, int y)
//{
//	visit[y][x] = 0;
//	q.push({ x, y });
//
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		q.pop();
//
//		if (X == N - 1 && Y == N - 1)
//			continue;
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx > -1 && nx < N && ny > -1 && ny < N)
//			{
//				if ((visit[Y][X] + Array[ny][nx]) < visit[ny][nx])
//					visit[ny][nx] = visit[Y][X] + Array[ny][nx];
//				else continue;
//
//				q.push({ nx, ny });
//			}
//		}
//	}
//}
//
//void setting()
//{
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			visit[i][j] = MAX;
//}
//
//void solve()
//{
//	setting();
//	BFS(0, 0);
//
//	cout << visit[N - 1][N - 1] << endl;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}