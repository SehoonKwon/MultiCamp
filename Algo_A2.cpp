//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//#define endl "\n"
//
//long long int X, Y, K;
//int BK[64], Arr_cnt;
//vector<int> v, v2;
//
//void input()
//{
//	cin >> X >> K;
//}
//
//void check()
//{
//	for (int i = 0; i < 64; i++)
//	{
//		if (((X >> i) & 1) == 0) v.push_back(i);
//	}
//
//	int cnt = 0;
//	while (K > 0)
//	{
//		BK[cnt++] = K % 2;
//		K /= 2;
//	}
//	Arr_cnt = cnt;
//}
//
//void solve()
//{
//	check();
//
//	int vc = 0;
//	for (int i = 0; i < Arr_cnt; i++)
//	{
//		Y += ((long long)BK[i] << v[vc++]); // �׳� �ع����� ��Ʈ �迭�̱⶧���� long long ����� ������ �ʴ´�.
//	}
//
//	cout << Y << endl;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}