//#include <iostream>
//#include <queue>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
////BFS�� Ǭ �����ֱ�
//
//int N, M;
//char Array[16][16];
//int visit[16][16][16][16];
//int ans;
//int rx, ry, bx, by, hx, hy;
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//
//struct point
//{
//	int rx, ry;
//	int bx, by;
//	int step;
//};
//
//queue<point> q;
//
//void input()
//{
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			cin >> Array[i][j];
//			if (Array[i][j] == 'H')
//			{
//				hx = j;
//				hy = i;
//			}
//			else if (Array[i][j] == 'R')
//			{
//				rx = j;
//				ry = i;
//			}
//			else if (Array[i][j] == 'B')
//			{
//				bx = j;
//				by = i;
//			}
//		}
//}
//
//int BFS()
//{
//	visit[ry][rx][by][bx] = true;
//	q.push({ rx, ry, bx, by, 0 });
//
//	while (!q.empty())
//	{
//		int RX = q.front().rx;
//		int RY = q.front().ry;
//		int BX = q.front().bx;
//		int BY = q.front().by;
//		int step = q.front().step;
//
//		q.pop();
//
//		if (step > 10) continue;
//
//		if (RX == hx && RY == hy)
//		{
//			while (!q.empty()) q.pop();
//			return step;
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nrx = RX + dx[i];
//			int nry = RY + dy[i];
//			int nbx = BX + dx[i];
//			int nby = BY + dy[i];
//
//			//���� ���� �湮�� �� ���� ���
//			if ((nrx < 0 || nrx >= M || nry < 0 || nry >= N) || visit[nry][nrx][nby][nbx] == true)
//				continue;
//
//			//�Ķ� ���� �湮�� �� ���� ���
//			if ((nbx < 0 || nbx >= M || nby < 0 || nby >= N) || visit[nry][nrx][nby][nbx] == true)
//				continue;
//
//			//�Ķ� ���� �湮�Ϸ��� ���� Ȧ�� ���
//			if (nbx == hx && nby == hy)
//				continue;
//
//			//�Ķ����� ���� ���� ���� ��ġ�� ���
//			if (nrx == nbx && nry == nby)
//				continue;
//
//			//�� ��� ����� ������ ������ ���� ���� �ƴ� ��쿡 Ž��. �� �� �� �ϳ��� ������ �� ������ �������̴� �� ��ġ����
//			if (Array[nry][nrx] != '#' || Array[nby][nbx] != '#')
//			{
//				if (Array[nry][nrx] == '#')
//				{
//					nry = RY;
//					nrx = RX;
//				}
//
//				if (Array[nby][nbx] == '#')
//				{
//					nby = BY;
//					nbx = BX;
//				}
//
//				visit[nry][nrx][nby][nbx] = true;
//				q.push({ nrx, nry, nbx, nby, step + 1 });
//			}
//		}
//	}
//
//	return -1;
//}
//
//void solve()
//{
//	ans = BFS();
//
//	cout << ans << endl;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(visit, 0, sizeof(visit));
//		memset(Array, 0, sizeof(Array));
//		while (!q.empty()) q.pop();
//
//		input();
//		solve();
//	}
//
//	return 0;
//}