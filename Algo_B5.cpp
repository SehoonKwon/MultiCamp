//#include <iostream>
//#include <queue>
//using namespace std;
//
//int N, M;
//int Sx, Sy, Dx, Dy;
//
//int Array[101][101];
//int visit[101][101];
//int dx[] = { 0, 0, -1, 1 };
//int dy[]{ 1, -1, 0 , 0 };
//
//struct point
//{
//	int x;
//	int y;
//	int step;
//};
//
//void input()
//{
//	cin >> M >> N;
//	cin >> Sx >> Sy >> Dx >> Dy;
//
//	for (int i = 1; i < N + 1; i++)
//		for (int j = 1; j < M + 1; j++)
//			scanf("%1d", &Array[i][j]);
//}
//
//int BFS()
//{
//	visit[Sy][Sx] = true;
//	queue<point> q;
//	q.push({ Sx, Sy, 0 });
//
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		int step = q.front().step;
//		q.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx == Dx && ny == Dy)
//				return step + 1;
//
//			if (nx > 0 && nx <= M && ny > 0 && ny <= N)
//			{
//				if (Array[ny][nx] == 0 && visit[ny][nx] == false)
//				{
//					visit[ny][nx] = true;
//					q.push({ nx, ny, step + 1 });
//				}
//			}
//		}
//	}
//
//	return -1;
//}
//
//void solve()
//{
//	int ans = BFS();
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