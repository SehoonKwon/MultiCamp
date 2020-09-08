//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int N;
//int Array[11][11];
//int visit[11];
//int MIN = 987654321;
//
//void input()
//{
//	cin >> N;
//	for (int i = 1; i < N + 1; i++)
//		for (int j = 1; j < N + 1; j++)
//			cin >> Array[i][j];
//}
//
//void DFS(int idx, int sum)
//{
//	if (idx > N)
//	{
//		MIN = min(MIN, sum);
//		return;
//	}
//
//	for (int i = 1; i < N + 1; i++)
//	{
//		if (visit[i] == true) continue;
//		visit[i] = true;
//		DFS(idx + 1, sum + Array[idx][i]);
//		visit[i] = false;
//	}
//}
//
//void solve()
//{
//	DFS(1, 0);
//
//	cout << MIN;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}