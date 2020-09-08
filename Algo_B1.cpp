//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int N;
//int Array[1001];
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> Array[i];
//}
//
//void solve()
//{
//	sort(Array, Array + N);
//
//	int start, d, lb, ub, cnt = 0;
//	for (int i = 0; i < N - 2; i++)
//	{
//		start = Array[i];
//		for (int j = i + 1; j < N - 1; j++)
//		{
//			d = Array[j] - Array[i];
//
//			lb = lower_bound(Array+j, Array + N, Array[j] + d) - Array;
//			ub = upper_bound(Array+j, Array + N, Array[j] + (2 * d)) - Array;
//
//			for (int k = lb; k < ub; k++)
//			{
//				if (Array[k]) cnt++;
//			}
//		}
//	}
//
//	cout << cnt << endl;
//}
//
//int main()
//{
//	input();
//	solve();
//
//	return 0;
//}