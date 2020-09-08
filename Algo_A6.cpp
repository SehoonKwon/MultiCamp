//#include <iostream>
//#include <stack>
//#include <vector>
//using namespace std;
//
//#define endl "\n"
//
//int N;
//
//struct point
//{
//	int idx;
//	int speed;
//};
//
//stack<point> s;
//vector<int> v;
//
//void input()
//{
//	int Idx, Speed;
//
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> Idx >> Speed;
//		s.push({ Idx, Speed });
//	}
//}
//void solve()
//{
//	int speed = s.top().speed;
//	s.pop();
//
//	v.push_back(speed);
//
//	while (!s.empty())
//	{
//		int speed = s.top().speed;
//		s.pop();
//
//		if(speed <= v[v.size()-1]) v.push_back(speed);
//	}
//
//	cout << v.size() << endl;
//}
//
//int main()
//{
//	input();
//	solve();
//
//	return 0;
//}