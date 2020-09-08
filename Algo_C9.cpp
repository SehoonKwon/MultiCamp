//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int N, M, K;
//int Array[101][101];
//int visit[101][101];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//int D_cnt;
//
//vector<int> v;
//
//void input()
//{
//	cin >> N >> M >> K;
//
//	int Sx, Sy, Dx, Dy;
//	for (int i = 0; i < K; i++)
//	{
//		cin >> Sx >> Sy >> Dx >> Dy;
//
//		for (int r = Sy; r < Dy; r++)
//			for (int c = Sx; c < Dx; c++)
//				Array[r][c] = -1;
//	}
//}
//
//void DFS(int X, int Y, int c)
//{
//	if (visit[Y][X] == true) return;
//	visit[Y][X] = true;
//	Array[Y][X] = c;
//	D_cnt++;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = X + dx[i];
//		int ny = Y + dy[i];
//
//		if (nx > -1 && nx < M && ny > -1 && ny < N)
//			if (visit[ny][nx] == false && Array[ny][nx] == 0)
//				DFS(nx, ny, c);
//	}
//}
//
//void PRT()
//{
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//			cout << Array[i][j] << " ";
//		cout << endl;
//	}
//}
//
//void solve()
//{
////	PRT();
//
//	int cnt = 1;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			if (Array[i][j] == 0)
//			{
//				D_cnt = 0;
//				DFS(j, i, cnt++);
//				v.push_back(D_cnt);
//			}
//		}
//
//	sort(v.begin(), v.end());
//
//	cout << v.size() << endl;
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}