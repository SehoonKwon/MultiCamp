//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//// for 1���� �ذᰡ��, ���̵�� ��¼�µ�(���� ���� ���ĺ��� ������ ���ʿ��� �ٰ����� ����� �����ʿ��� �ٰ�����)
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