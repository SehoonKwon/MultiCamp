//#include <iostream>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int N, M;
//int Array[101][101];
//int visit[101][101];
//int dx[] = {-1, -1, 1, 1, -2, -2, 2, 2};
//int dy[] = { -2, 2, -2, 2, -1, 1, -1, 1 };
//int Sx, Sy, Dx, Dy;
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
//	cin >> N >> M;
//	  
//	cin >> Sy >> Sx >> Dy >> Dx;
//	q.push({ Sx, Sy, 0 });
//}
//
//int BFS()
//{
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		int step = q.front().step;
//		q.pop();
//
//		for (int i = 0; i < 8; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx > 0 && nx <= M && ny > 0 && ny <= N)
//			{
//				if (nx == Dx && ny == Dy)
//					return step + 1;
//
//				if (visit[ny][nx] == false)
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