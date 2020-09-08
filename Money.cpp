//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int N, M;
//int Array[10001];
//int s = 987654321, e = 0;
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> Array[i];
//		s = min(s, Array[i]);
//		e = max(e, Array[i]);
//	}
//
//	cin >> M;
//}
//
//int check(int val)
//{
//	int cnt = 0;
//	for (int i = 0; i < N; i++)
//	{
//		if (Array[i] <= val) cnt += Array[i];
//		else cnt += val;
//
//		if (cnt > M) return -1;
//	}
//
//	return cnt;
//}
//
//void solve()
//{
//	int sol = 0;
//
//	while (s <= e)
//	{
//		int m = (s + e) / 2;
//		
//		int c = check(m);
//		if (c == -1)
//			e = m - 1;
//		else
//		{
//			sol = m;
//			s = m + 1;
//		}
//	}
//
//	cout << sol;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}