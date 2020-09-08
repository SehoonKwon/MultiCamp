//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <vector>
//#include <stack>
//using namespace std;
//
//// 플로이드 워셜로 풀어보기
//
//#define MAX 987654321
//
//int N, M;
//int Array[101][101];
//int visit[101];
//int cost[101];
//
//queue<int> q;
//stack<int> s;
//
//void input()
//{
//	cin >> N >> M;
//	for (int i = 1; i < N + 1; i++)
//	{
//		for (int j = 1; j < N + 1; j++)
//			cin >> Array[i][j];
//
//		cost[i] = MAX;
//	}
//
//	cost[1] = 0;
//}
//
//void BFS()
//{
//	q.push(1);
//
//	while (!q.empty())
//	{
//		int start = q.front();
//		q.pop();
//
//		for (int i = 1; i < N + 1; i++)
//		{
//			if (Array[start][i] == 0) continue;
//
//			if (cost[start] + Array[start][i] < cost[i])
//			{
//				cost[i] = cost[start] + Array[start][i];
//				visit[i] = start;
//				q.push(i);
//			}
//		}
//	}
//}
//
//void path()
//{
//	int idx = M;
//	while (1)
//	{
//		s.push(idx);
//		if (idx == 1) break;
//		idx = visit[idx];
//
//	}
//}
//
//void solve()
//{
//	BFS();
//
//	cout << cost[M] << endl;
//
//	path();
//	while (!s.empty())
//	{
//		cout << s.top() << " ";
//		s.pop();
//	}
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}