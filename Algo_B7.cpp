//#include <iostream>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int N, M;
//int Array[1001][1001];
//int visit[1001][1001];
//int dx[] = { 0, 0, -1, 1 };
//int dy[]{ 1, -1, 0 , 0 };
//int T_cnt;
//
//struct point
//{
//	int x;
//	int y;
//	int step;
//};
//
//queue<point> q;
//
//void input()
//{
//	cin >> M >> N;
//
//	for (int i = 1; i < N + 1; i++)
//		for (int j = 1; j < M + 1; j++)
//		{
//			cin >> Array[i][j];
//			if (Array[i][j] == 1)
//				q.push({ j, i, 0 });
//			else if (Array[i][j] == 0)
//				T_cnt++;
//		}
//}
//
//int BFS()
//{
//	int time = 0;
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		int step = q.front().step;
//		q.pop();
//
//		time = max(time, step);
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx > 0 && nx <= M && ny > 0 && ny <= N)
//			{
//				if (Array[ny][nx] == 0 && visit[ny][nx] == false)
//				{
//					visit[ny][nx] = true;
//					Array[ny][nx] = 1;
//					q.push({ nx, ny, step + 1 });
//				}
//			}
//		}
//	}
//
//	return time;
//}
//
//int check()
//{
//	for (int i = 1; i < N + 1; i++)
//		for (int j = 1; j < M + 1; j++)
//			if (Array[i][j] == 0) return -1;
//
//	return 1;
//}
//
//void solve()
//{
//	int ans = BFS();
//	int C = check();
//	if (C == -1) ans = -1;
//
//	cout << ans << endl;
//}
//
//int main()
//{
//	input();
//	solve();
//
//	return 0;
//}