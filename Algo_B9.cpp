//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//#include <vector>
//using namespace std;
//
//int N, M;
//char Array[51][51], Array2[51][51];
//int visit[51][51];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//
//struct point
//{
//	int x;
//	int y;
//	int step;
//};
//
//vector<point> v;
//
//void input()
//{
//	cin >> N >> M;
//	for(int i=0; i<N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			cin >> Array[i][j];
//			if (Array[i][j] == 'L')
//				v.push_back({ j, i });
//		}
//}
//
//int BFS(int x, int y)
//{
//	visit[y][x] = true;
//	queue<point> q;
//	q.push({ x, y, 0 });
//
//	int time = 0;
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		int step = q.front().step;
//		time = max(time, step);
//		q.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx > -1 && nx < M && ny > -1 && ny < N)
//			{
//				if (Array[ny][nx] == 'L' && visit[ny][nx] == false)
//				{
//					visit[ny][nx] = true;
//					q.push({ nx, ny, step + 1 });
//				}
//			}
//		}
//	}
//
//	return time;
//}
//
//void solve()
//{
//	memcpy(Array2, Array, sizeof(Array)); //원본 복사
//
//	int len = v.size();
//	int MAX = 0;
//
//	for (int i = 0; i < len; i++)
//	{
//		memcpy(Array, Array2, sizeof(Array2)); //원본으로 돌려놓기
//		memset(visit, 0, sizeof(visit)); //방문 배열 초기화
//
//		int X = v[i].x, Y = v[i].y;
//		int C = BFS(X, Y);
//		MAX = max(MAX, C);
//	}
//
//	cout << MAX << endl;
//}
//
//int main()
//{
//	input();
//	solve();
//
//	return 0;
//}