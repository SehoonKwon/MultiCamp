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
//		//���� �����°� ���� ������ ��� ����(�� ���� ������ �ǹǷ�) + ������� ���� �߰� + �־��� ��� 8��! ���. (�����÷ο�)
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