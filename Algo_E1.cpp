//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <functional>
//using namespace std;
//
//// 자리올림 함수 만드는게 90%인듯
//
//int N;
//int MAX = 0;
//int Array[21];
//int visit[21];
//
//vector<int> v;
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> Array[i];
//}
//
//int check(int pre, int X)
//{
//	while (pre && X)
//	{
//		if (pre % 10 + X % 10 >= 10) return 0;
//		pre /= 10;
//		X /= 10;
//	}
//
//	return 1;
//}
//
//void DFS(int idx, int cnt, int sum)
//{
//	if (idx > N) return;
//	MAX = max(MAX, cnt);
//
//	
//	if(check(sum, Array[idx]))	DFS(idx + 1, cnt + 1, sum + Array[idx]);
//	DFS(idx + 1, cnt, sum);
//
//}
//
//void solve()
//{
//	DFS(0, 0, 0);
//	cout << MAX << endl;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}