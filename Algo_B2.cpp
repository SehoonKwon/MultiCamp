//#include <iostream>
//#include <algorithm>
//using namespace std;
//
////카운트가 int 범위를 넘어가는 경우 있음. 타입 조심
////M의 최대값 20억을 구하는 경우, N = 5, M = 20억, 5개의 Array들 9억씩 하면 5억의 높이로 4번자르면 충족하지만 5번째 갈 때 cnt가 int면 오버플로우
//
//int N, M;
//int Array[1000001];
//
//long long MAX = 0;
//
//void input()
//{
//	cin >> N >> M;
//
//	int X;
//	for (int i = 0; i < N; i++)
//		cin >> Array[i];
//}
//
//void Mycut(int s, int e)
//{
//	if (s > e) return;
//
//	long long int mid = (s + e) / 2;
//
//	long long int cnt = 0;
//	for (int i = 0; i < N; i++)
//	{
//		if (Array[i] - mid > 0) cnt += Array[i] - mid;
//		if (cnt >= M)
//		{
//			MAX = mid;
//			Mycut(mid + 1, e);
//			return;
//		}
//	}
//
//	if (cnt < M) Mycut(s, mid - 1);
//	return;
//}
//
//void solve()
//{
//	sort(Array, Array + N);
//
//	Mycut(0, Array[N-1]);
//
//	cout << MAX << endl;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	input();
//	solve();
//	return 0;
//}