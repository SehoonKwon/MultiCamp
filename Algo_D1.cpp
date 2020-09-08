//#include <iostream>
//using namespace std;
//
//int N;
//int Array[11][11];
//int visit[11][11];
//int Sx, Sy;
//int P_cnt = 0;
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//int P[12][4] = { {0, 0, 0, 0}, {0, 0, 1, 1}, {1, 1, 0, 0 }, {1, 0, 0, 1}, {1, 0, 1, 0}, {0, 1, 1, 0},
//				{0, 1, 0, 1}, {1, 1, 0, 1}, {1, 0, 1, 1}, {1, 1, 1, 0}, {0, 1, 1, 1}, {1, 1, 1, 1 } };
//
//struct point
//{
//	int num;
//	int up;
//	int down;
//	int left;
//	int right;
//};
//
//point Arr[11][11];
//
//void setting(int X, int Y, int n)
//{
//	int up = 0, down = 0, left = 0, right = 0;
//	switch (n)
//	{
//	case 1:
//		up = 0, down = 0, left = 1, right = 1;
//		break;
//	case 2:
//		up = 1, down = 1, left = 1, right = 1;
//		break;
//	case 3:
//		up = 0, down = 1, left = 0, right = 1;
//		break;
//	case 4:
//		up = 0, down = 1, left = 1, right = 0;
//		break;
//	case 5:
//		up = 1, down = 0, left = 1, right = 0;
//		break;
//	case 6:
//		up = 1, down =0, left = 0, right = 1;
//		break;
//	case 7:
//		up = 1, down = 1, left = 0, right = 0;
//		break;
//	case 8:
//		up = 0, down = 1, left = 1, right = 1;
//		break;
//	case 9:
//		up = 1, down = 1, left = 1, right = 0;
//		break;
//	case 10:
//		up = 1, down = 0, left = 1, right = 1;
//		break;
//	case 11:
//		up = 1, down = 1, left = 1, right = 1;
//		break;
//	default:
//		break;
//	}
//
//	Arr[Y][X].num = n, Arr[Y][X].up = up, Arr[Y][X].down = down, Arr[Y][X].left = left, Arr[Y][X].right = right;
//}
//
//void input()
//{
//	cin >> N;
//	cin >> Sx >> Sy;
//	for(int i=0; i<N; i++)
//		for (int j = 0; j < N; j++)
//		{
//			scanf("%1x", &Array[i][j]);
//			if (Array[i][j] > 0)
//			{
//				P_cnt++;
//				setting(j, i, Array[i][j]);
//			}
//		}
//}
//
//int Pos(int num, int i)
//{
//	return P[num][i];
//}
//
//int check(int i, int nx, int ny)
//{
//	switch (i)
//	{
//	case 0:
//		return Arr[ny][nx].up;
//	case 1:
//		return Arr[ny][nx].down;
//	case 2:
//		return Arr[ny][nx].right;
//	case 3:
//		return Arr[ny][nx].left;
//	default:
//		break;
//	}
//}
//
//void DFS(int X, int Y)
//{
//	if (visit[Y][X] == true) return;
//	visit[Y][X] = true;
//	P_cnt--;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int p = Pos(Array[Y][X], i);
//		if (p == 0) continue;
//
//		int nx = X + dx[i];
//		int ny = Y + dy[i];
//
//		if (nx > -1 && nx < N && ny > -1 && ny < N)
//		{
//			if (visit[ny][nx] == false)
//			{
//				int c = check(i, nx, ny);
//				if (c == 1)
//					DFS(nx, ny);
//			}
//		}
//	}
//}
//
//void solve()
//{
//	DFS(Sx, Sy);
//
//	cout << P_cnt;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}