//#include <iostream>
//#include <algorithm>
//using namespace std;
//
////ī��Ʈ�� int ������ �Ѿ�� ��� ����. Ÿ�� ����
////M�� �ִ밪 20���� ���ϴ� ���, N = 5, M = 20��, 5���� Array�� 9�﾿ �ϸ� 5���� ���̷� 4���ڸ��� ���������� 5��° �� �� cnt�� int�� �����÷ο�
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