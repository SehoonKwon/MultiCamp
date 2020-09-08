//#include <iostream>
//#include <queue>
//#include <functional>
//using namespace std;
//
////우선순위 큐 STL로 사용
//
//int N;
//int Array[101][101];
//int visit[101][101];
//int dx[] = { 1, 0, -1, 0 };
//int dy[] = { 0, 1, 0, -1 };
//
//struct point
//{
//	int x;
//	int y;
//	int sum;
//};
//
////얘는 cmp만들때 struct로 cmp선언해주고 bool operator 오버로딩. 그리고 비교부분이 평소 아는 것과 반대로 해주어야 함
////ex) u.sum < v.sum 이면 오름차순이지만 PQ의 경우 u.sum > v.sum 으로 해주어야 Min Heap
//struct cmp
//{
//	bool operator()(point u, point& v)
//	{
//		if (u.sum > v.sum) return true;
//		else return false;
//	}
//};
//
//priority_queue<point, vector<point>, cmp> q;
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//		{
//			scanf("%1d", &Array[i][j]);
//		}
//}
//
//void BFS(int x, int y)
//{
//	visit[y][x] = Array[y][x];
//	q.push({ x, y, Array[y][x] });
//
//	while (!q.empty())
//	{
//		point p = q.top();
//		q.pop();
//
//		if (visit[N - 1][N - 1] != 0) return;
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = p.x + dx[i];
//			int ny = p.y + dy[i];
//
//			if (nx > -1 && nx < N && ny > -1 && ny < N)
//			{
//				if (visit[ny][nx] == 0)
//				{
//					visit[ny][nx] = visit[p.y][p.x] + Array[ny][nx];
//					q.push({ nx, ny, visit[p.y][p.x] + Array[ny][nx] });
//				}
//			}
//		}
//	}
//}
//
//void solve()
//{
//	BFS(0, 0);
//
//	cout << visit[N - 1][N - 1];
//}
//
//int main()
//{
//	input();
//	solve();
//
//	return 0;
//}