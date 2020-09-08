//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//#define endl "\n"
//
//int N;
//int Array[26][26];
//int visit[26][26];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//int D_cnt = 0;
//vector<int> v;
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//		{
//			scanf("%1d", &Array[i][j]);
//			if (Array[i][j] == 1) Array[i][j] = -1;
//		}
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
//		if (visit[ny][nx] == false && Array[ny][nx] == -1)
//		{
//			DFS(nx, ny, c);
//		}
//	}
//}
//
//void solve()
//{
//	int cnt = 1;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			if (Array[i][j] == -1)
//			{
//				D_cnt = 0;
//				DFS(j, i, cnt++);
//				v.push_back(D_cnt);
//			}
//
//	sort(v.begin(), v.end());
//
//	cout << v.size() << endl;
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << endl;
//
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}