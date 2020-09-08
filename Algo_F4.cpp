//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int N, S;
//long long int C[100001], Y[100001], table[10001];
//
//void input()
//{
//	cin >> N >> S;
//	for (int i = 0; i < N; i++)
//		cin >> C[i] >> Y[i];
//}
//
//void solve()
//{
//	int idx = 0;
//	long long int sum = C[0] * Y[0];
//	for (int i = 1; i < N; i++)
//	{
//		if (((S * (i-idx)) + C[idx]) * Y[i] < C[i] * Y[i])
//			sum += ((S * (i-idx)) + C[idx]) * Y[i];
//		else
//		{
//			idx = i;
//			sum += C[i] * Y[i];
//		}
//	}
//
//	cout << sum;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}