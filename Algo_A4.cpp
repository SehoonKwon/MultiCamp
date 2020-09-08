//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//// for 1개로 해결가능, 아이디어 개쩌는듯(양쪽 끝을 합쳐봐서 음수면 왼쪽에서 다가오고 양수면 오른쪽에서 다가오기)
//
//#define endl "\n"
//#define SIZE 1e9
//
//int N;
//int Array[100001];
//int IDXL, IDXR;
//
//void input()
//{
//	int X;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> Array[i];
//	}
//}
//
//void solve()
//{
//	int ans1 = 0, ans2 = 0;
//	IDXR = N - 1;
//
//	int temp, L, R, S, MIN = SIZE;
//	while (1)
//	{
//		if (IDXL >= IDXR) break;
//
//		L = Array[IDXL];
//		R = Array[IDXR];
//		S = L + R;
//
//		if (S < 0) IDXL++;
//		else if (S > 0) IDXR--;
//		else
//		{
//			cout << L << " " << R << endl;
//			return;
//		}
//
//		S = abs(S);
//		if (MIN > S)
//		{
//			MIN = S;
//			ans1 = L;
//			ans2 = R;
//		}
//
//	}
//
//	cout << ans1 << " " << ans2 << endl;
//
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	input();
//	solve();
//
//	return 0;
//}