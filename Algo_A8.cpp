//#include <iostream>
//#include <stack>
//using namespace std;
//
//#define endl "\n"
//
//int N;
//
//stack<int> STK;
//
//void input()
//{
//	cin >> N;
//}
//
//void solve()
//{
//	int X;
//	long long int cnt = 0;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> X;
//		
//		//새로 들어오는거 보다 작은건 모두 삭제(이 앞을 못보게 되므로) + 같은경우 조건 추가 + 최악의 경우 8만! 고려. (오버플로우)
//		while (!STK.empty() && X >= STK.top())
//			STK.pop();				
//
//		cnt += STK.size();
//		STK.push(X);
//	}
//
//	cout << cnt << endl;
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