//#include <iostream>
//using namespace std;
//
//int N;
//int Array[101][101];
//int visit[101][101];
//int dx[] = { 1, 0, -1, 0 };
//int dy[] = { 0, 1, 0, -1 };
//
//// 우선순위큐(힙)으로 푸는 법
//
//struct point
//{
//	int x;
//	int y;
//	int sum;
//};
//
//point q[10001];
//int q_idx = 1;
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			scanf("%1d", &Array[i][j]);
//}
//
//void push(point u)
//{
//	if (q_idx == 10000) return;
//	q[q_idx] = u;
//	int C = q_idx, P = q_idx / 2;
//	q_idx++;
//
//	while (1)
//	{
//		if (P < 1 || q[C].sum > q[P].sum)
//			break;
//
//		point temp = q[C];
//		q[C] = q[P];
//		q[P] = temp;
//		C = P;
//		P = C / 2;
//	}
//
//}
//
//point pop()
//{
//	point res;
//
//	res = q[1];
//	q[1] = q[--q_idx];
//
//	int P = 1, C;
//
//	while (1)
//	{
//		if (P * 2 < q_idx)
//		{
//			if (P * 2 + 1 >= q_idx) C = P * 2;
//			else
//			{
//				if (q[2 * P].sum > q[2 * P + 1].sum) C = 2 * P + 1;
//				else C = 2 * P;
//			}
//
//			if (q[P].sum < q[C].sum) break;
//			else
//			{
//				point temp = q[P];
//				q[P] = q[C];
//				q[C] = temp;
//				P = C;
//			}
//		}
//
//		else break;
//	}
//
//	return res;
//}
//
//void BFS(int x, int y)
//{
//	visit[y][x] = Array[y][x];
//	push({ x, y, Array[y][x] });
//
//	while (q_idx > 1)
//	{
//		point p = pop();
//
//		if (visit[N - 1][N - 1] != 0) return;
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = p.x + dx[i];
//			int ny = p.y + dy[i];
//
//			if (nx > -1 && nx < N && ny > -1 && ny < N)
//			{
//				if (visit[ny][nx] == 0)
//				{
//					visit[ny][nx] = visit[p.y][p.x] + Array[ny][nx];
//					push({ nx, ny, visit[p.y][p.x] + Array[ny][nx] });
//				}
//			}
//		}
//	}
//}
//
//void solve()
//{
//	BFS(0, 0);
//
//	cout << visit[N - 1][N - 1];
//}
//
//int main()
//{
//	input();
//	solve();
//
//	return 0;
//}