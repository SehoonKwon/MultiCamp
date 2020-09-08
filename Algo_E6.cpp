//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int N;
//int Array[13][13];
//int visit[13];
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
//int check()
//{
//	for (int i = 2; i < N + 1; i++)
//		if (visit[i] == false) return 0;
//
//	return 1;
//}
//
//void DFS(int idx, int sum, int cnt)
//{
//	if (sum > MIN) return;
//	if (cnt == N - 1)
//	{
//		if (check() && Array[idx][1] != 0)	
//			MIN = min(MIN, sum + Array[idx][1]);
//		
//		return;
//	}
//
//	for (int i = 2; i < N + 1; i++)
//	{
//		if (i == idx) continue;
//		if (visit[i] == true) continue;
//		if (Array[idx][i] == 0) continue;
//
//		visit[i] = true;
//		DFS(i, sum + Array[idx][i], cnt + 1);
//		visit[i] = false;
//	}
//
//	return;
//}
//
//void solve()
//{
//	DFS(1, 0, 0);
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