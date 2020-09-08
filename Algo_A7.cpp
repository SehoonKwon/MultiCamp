//#include <iostream>
//#include <queue>
//using namespace std;
//
//#define endl "\n"
//
//int N;
//
//queue<int> q;
//
//void solve()
//{
//	for (int i = 1; i < N + 1; i++)
//		q.push(i);
//
//	while (q.size() > 0)
//	{
//		int cnt = N / 2;
//
//		for (int i = 0; i < cnt; i++)
//		{
//			int temp = q.front();
//			q.pop();
//			if (i == cnt - 1) N = temp;
//			q.push(temp);
//		}
//
//		int X = q.front();
//		q.pop();
//		cout << X << " ";
//	}
//}
//
//int main()
//{
//	cin >> N;
//	solve();
//	return 0;
//}