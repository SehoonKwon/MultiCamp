//#include <iostream>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//#define endl "\n"
//
//
//int N, M;
//int Array[101][101];
//int visit[101][101];
//int life_cnt;
//int Sx, Sy;
//int dx[] = { 0,0,-1,1, 0 };
//int dy[] = { 1,-1, 0, 0, 0 };
//
//struct point
//{
//	int x;
//	int y;
//	int time;
//	int p_time;
//};
//
//void input()
//{
//	cin >> M >> N;
//	for (int i = 1; i < N + 1; i++)
//		for (int j = 1; j < M + 1; j++)
//		{
//			scanf("%1d", &Array[i][j]);
//			if (Array[i][j] == 1)
//			{
//				life_cnt++;
//				Array[i][j] = -1;
//			}
//		}
//
//	cin >> Sx >> Sy;
//}
//
//int BFS()
//{
//	visit[Sy][Sx] = true;
//	queue<point> q;
//	q.push({ Sx, Sy, 3});
//	life_cnt--;
//
//	int time = 0;
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		int T = q.front().time;
//		Array[Y][X] = T;
//		time = max(time, T);
//
//		q.pop();
//
//		for (int i = 0; i < 5; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx > 0 && nx <= M && ny > 0 && ny <= N)
//			{
//				//¿À¿°µÇÁö ¾ÊÀº Àú±Û¸µ ¿À¿°
//				if (Array[ny][nx] == -1 && visit[ny][nx] == false)
//				{
//					visit[ny][nx] = true;
//					life_cnt--;
//					q.push({ nx, ny, T+1});
//				}
//			}
//		}
//	}
//
//	return time;
//}
//
//int CNT()
//{
//	int cnt = 0;
//	for (int i = 1; i < N + 1; i++)
//	{
//		for (int j = 1; j < M + 1; j++)
//			if (Array[i][j] == -1) cnt++;
//	}
//	return cnt;
//}
//
//void solve()
//{
//	int ans = BFS();
//
//	//¸Ê countÇÏ´Â ¹æ¹ý
////	int C = CNT();
//
////	cout << ans << endl << C << endl;
//	cout << ans << endl << life_cnt << endl;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}