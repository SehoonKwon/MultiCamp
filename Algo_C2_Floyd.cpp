//#include <iostream>
//using namespace std;
//
////Floyd 알고리즘
//
//#define MAX 987654321
//
//int N, M;
//int Array[101][101];
//int cost[101][101];
//int Path[101][101];
//
//void input()
//{
//	cin >> N >> M;
//	for (int i = 1; i < N + 1; i++)
//		for (int j = 1; j < N + 1; j++)
//		{
//			cin >> Array[i][j];
//			cost[i][j] = Array[i][j];
//			if (i == j) continue;
//			if (cost[i][j] == 0) cost[i][j] = MAX;
//		}
//}
//
//void Floyd()
//{
//	for (int k = 1; k < N + 1; k++)
//		for (int i = 1; i < N + 1; i++)
//			for (int j = 1; j < N + 1; j++)
//			{
//				if (cost[i][j] > cost[i][k] + cost[k][j])
//				{
//					cost[i][j] = cost[i][k] + cost[k][j];
//					Path[i][j] = k;
//				}
//			}
//}
//
//void PRT_Path(int start, int end)
//{
//	if (Path[start][end] != 0)
//	{
//		PRT_Path(start, Path[start][end]);
//		cout << Path[start][end] << " ";
//		PRT_Path(Path[start][end], end);
//	}
//}
//
//void solve()
//{
//	Floyd();
//
//	cout << cost[1][M] <<endl;
//	cout << '1' <<" ";
//	PRT_Path(1, M);
//	cout << M;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}