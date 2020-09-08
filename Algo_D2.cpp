//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int N, M;
//char Array[51][51];
//int visit[51][51];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//
//struct point
//{
//	int x;
//	int y;
//};
//
//vector<point> A, B;
//
//void input()
//{
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			cin >> Array[i][j];
//}
//
//void DFS(int X, int Y, int cnt)
//{
//	if (visit[Y][X] == true) return;
//	visit[Y][X] = true;
//	if (cnt == 1) A.push_back({ X, Y });
//	else B.push_back({ X, Y });
//
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = X + dx[i];
//		int ny = Y + dy[i];
//
//		if (nx > -1 && nx < M && ny > -1 && ny < N)
//		{
//			if (visit[ny][nx] == false && Array[ny][nx] == 'X')
//				DFS(nx, ny, cnt);
//		}
//	}
//}
//
//void solve()
//{
//	int cnt = 1;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			if (Array[i][j] == 'X')
//				DFS(j, i, cnt++);
//		}
//
//	int lenA = A.size();
//	int lenB = B.size();
//
//	int MIN = 987654321;
//	for (int i = 0; i < lenA; i++)
//	{
//		for (int j = 0; j < lenB; j++)
//			MIN = min(MIN, abs(A[i].x - B[j].x) + abs(A[i].y - B[j].y));
//	}
//
//	cout << MIN -1; //개수에서 시작점 빼기
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}