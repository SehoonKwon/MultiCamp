//#include <iostream>
//#include <stack>
//#include <vector>
//using namespace std;
//
//#define endl "\n"
//
//int N, T;
//
//struct point
//{
//	long long int idx;
//	long long int speed;
//};
//
//stack<point> s;
//vector<point> v;
//
//void input()
//{
//	long long int Idx, Speed;
//
//	cin >> N >> T;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> Idx >> Speed;
//		s.push({ Idx, Speed });
//	}
//}
//void solve()
//{
//	long long int idx = s.top().idx;
//	long long int speed = s.top().speed;
//	s.pop();
//
//	v.push_back({ idx, speed });
//
//	while (!s.empty())
//	{
//		long long int idx = s.top().idx;
//		long long int speed = s.top().speed;
//		s.pop();
//
//		long long int temp = idx + (speed * T);
//		long long int temp2 = v[v.size() - 1].idx + (v[v.size() - 1].speed * T);
//
//		if (temp < temp2)
//			v.push_back({ idx, speed });
//	}
//
//	cout << v.size();
//}
//
//int main()
//{
//	input();
//	solve();
//
//	return 0;
//}