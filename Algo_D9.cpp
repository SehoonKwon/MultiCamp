//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//#define MAX 987654321
//#define endl "\n"
//
//int N;
//int visit[11];
//int MIN;
//
//struct point
//{
//	int x;
//	int y;
//};
//
//vector<point> Robot, Snack;
//vector<int> v;
//
//void input()
//{
//	cin >> N;
//
//	int x, y;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> y >> x;
//		Snack.push_back({ x, y });
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> y >> x;
//		Robot.push_back({ x, y });
//	}
//}
//
//int calcul()
//{
//	int Rx, Ry, Sx, Sy, sum = 0;
//	for (int i = 0; i < N; i++)
//	{
//		Rx = Robot[i].x, Ry = Robot[i].y, Sx = Snack[v[i]].x, Sy = Snack[v[i]].y;
//		int dist = abs(Rx - Sx) + abs(Ry - Sy);
//		sum += dist;
//	}
//
//	return sum;
//}
//
//void DFS(int idx)
//{
//	if (idx >= N)
//	{
//		int c = calcul();
//		MIN = min(c, MIN);
//		return;
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		if (visit[i] == true) continue;
//		visit[i] = true;
//		v.push_back(i);
//		DFS(idx + 1);
//		visit[i] = false;
//		v.pop_back();
//	}
//}
//
//void solve()
//{
//	DFS(0);
//
//	cout << MIN << endl;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(visit, 0, sizeof(visit));
//		Robot.clear();
//		Snack.clear();
//		MIN = MAX;
//
//		input();
//		solve();
//	}
//}