//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//
////DFS로 풀기(백트래킹)
//
//int N, M;
//char Array[16][16];
//int visit[16][16], visit2[16][16];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0, 0 };
//int Rx, Ry, Bx, By, Hx, Hy;
//int ans = 987654321;
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
//				Hx = j;
//				Hy = i;
//			}
//			else if (Array[i][j] == 'R')
//			{
//				Rx = j;
//				Ry = i;
//			}
//			else if (Array[i][j] == 'B')
//			{
//				Bx = j;
//				By = i;
//			}
//		}
//
//}
//
//void DFS(int Rx, int Ry, int Bx, int By, int step)
//{
//	if (step > 10) return;
//	if (Rx == Bx && Ry == By) return;
//	if (Bx == Hx && By == Hy) return;
//	if (visit[Ry][Rx] == true && visit2[By][Bx] == true) return;
//	if (Rx == Hx && Ry == Hy)
//	{
//		if (step < ans) ans = step;
//		return;
//	}
//
//	visit[Ry][Rx] = true;
//	visit2[By][Bx] = true;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int nrx = Rx + dx[i];
//		int nry = Ry + dy[i];
//		int nbx = Bx + dx[i];
//		int nby = By + dy[i];
//
//		//빨간 구슬이 맵안에서 갈 수 있으면
//		if ((nrx > -1 && nrx < M && nry > -1 && nry < N) && (visit[nry][nrx] == false && Array[nry][nrx] != '#'))
//		{
//			//파란구슬도 갈 수 있는지
//			if ((nbx > -1 && nbx < M && nby > -1 && nby < N) && (visit2[nby][nbx] == false && Array[nby][nbx] != '#'))
//			{
//				DFS(nrx, nry, nbx, nby, step + 1);
//				visit[nry][nrx] = false;
//				visit2[nby][nbx] = false;
//
//			}
//			//파란구슬이 못가면
//			else
//			{
//				DFS(nrx, nry, Bx, By, step + 1);
//				visit[nry][nrx] = false;
//
//			}
//		}
//		//빨간 구슬이 못갈때 파란구슬이 갈 수 있으면
//		else if ((nbx > -1 && nbx < M && nby > -1 && nby < N) && (visit2[nby][nbx] == false && Array[nby][nbx] != '#'))
//		{
//			DFS(Rx, Ry, nbx, nby, step + 1);
//			visit2[nby][nbx] = false;
//
//		}
//	}
//}
//
//void solve()
//{
//	DFS(Rx, Ry, Bx, By, 0);
//	if (ans == 987654321) ans = -1;
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
//		memset(visit2, 0, sizeof(visit2));
//		ans = 987654321;
//
//		input();
//		solve();
//	}
//
//	return 0;
//}