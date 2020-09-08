//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//int N, IDX;
//int Array[10];
//
//struct point
//{
//	int X;
//	int idx;
//};
//
//queue<point> q;
//
//void input()
//{
//	int X;
//	cin >> N >> IDX;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> X;
//		q.push({X, i});
//		Array[X]++;
//	}
//}
//
//int check(int x)
//{
//	for (int i = 1; i < 10; i++)
//		if (Array[i] > 0 && i > x) return 0;
//	return 1;
//}
//
//void solve()
//{
//	int cnt = 1;
//	while (1)
//	{
//		point temp;
//		temp.X = q.front().X;
//		temp.idx = q.front().idx;
//		q.pop();
//
//		int c = check(temp.X);
//
//		// c==1이면 프린트
//		if (c == 1)
//		{
//			//만약 프린트하는게 원하는거면 출력하고 종료
//			if (temp.idx == IDX)
//			{
//				cout << cnt << endl;
//				return;
//			}
//
//			//아니면 프린트
//			else
//			{
//				Array[temp.X]--;
//				cnt++;
//			}
//		}
//
//		else
//		{
//			q.push(temp);
//		}
//	}
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(Array, 0, sizeof(Array));
//		while (!q.empty()) q.pop();
//
//		input();
//		solve();
//	}
//	return 0;
//}