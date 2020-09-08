//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int N, K;
//int Array[21];
//int isP = 0;
//
//void input()
//{
//	cin >> N >> K;
//	for (int i = 0; i < N; i++)
//		cin >> Array[i];
//}
//
//void DFS(int idx, int sum)
//{
//	if (sum > K || idx > N || isP == 1) return;
//
//	if (sum == K)
//	{
//		isP = 1;
//		return;
//	}
//
//	DFS(idx + 1, sum + Array[idx]);
//	DFS(idx + 1, sum);
//}
//
//void solve()
//{
//	DFS(0, 0);
//
//	if (isP == 1) cout << "YES" << endl;
//	else cout << "NO" << endl;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(Array, 0, sizeof(Array));
//		isP = 0;
//
//		input();
//		solve();
//	}
//
//	return 0;
//}