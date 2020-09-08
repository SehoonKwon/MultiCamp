//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//using namespace std;
//
//#define MAX 987654321
//
//char Array[5][9];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//int MIN_P = MAX, MIN = MAX;
//
//struct point
//{
//	int x;
//	int y;
//};
//
//vector<point> v;
//
//void input()
//{
//	for (int i = 0; i < 5; i++)
//		for (int j = 0; j < 9; j++)
//			cin >> Array[i][j];
//
//}
//
//int check_pin()
//{
//	int cnt = 0;
//	for (int i = 0; i < 5; i++)
//		for (int j = 0; j < 9; j++)
//			if (Array[i][j] == 'o') cnt++;
//
//	return cnt;
//}
//
//int isP(int X, int Y, int k)
//{
//	int nx = X + dx[k];
//	int ny = Y + dy[k];
//	int nnx = X + 2 * dx[k];
//	int nny = Y + 2 * dy[k];
//
//	if(nx > -1 && nx < 9 && ny > -1 && ny < 5 && nnx > -1 && nnx < 9 && nny > -1 && nny < 5)
//		if (Array[ny][nx] == 'o' && Array[nny][nnx] == '.') return 1;
//
//	return 0;
//}
//
//void DFS(int cnt)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			if (Array[i][j] == 'o')
//			{
//				for (int k = 0; k < 4; k++)
//				{
//					if (isP(j, i, k))
//					{
//						Array[i][j] = '.';
//						Array[i + dy[k]][j + dx[k]] = '.';
//						Array[i + 2 * dy[k]][j + 2 * dx[k]] = 'o';
//						DFS(cnt + 1);
//
//						Array[i][j] = 'o';
//						Array[i + dy[k]][j + dx[k]] = 'o';
//						Array[i + 2 * dy[k]][j + 2 * dx[k]] = '.';
//					}
//				}
//			}
//		}
//	}
//
//	if (MIN_P > check_pin())
//	{
//		MIN_P = check_pin();
//		MIN = cnt;
//	}
//
//	return;
//}
//
//void solve()
//{
//	DFS(0);
//
//	cout << MIN_P << " " << MIN << endl;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		v.clear();
//		MIN = MAX;
//		MIN_P = MAX;
//
//		input();
//		solve();
//	}
//
//	return 0;
//}