//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int N;
//
//struct point
//{
//	int idx;
//	int s;
//	int e;
//};
//
//vector<point> v;
//
//void input()
//{
//	cin >> N;
//
//	int A, S, E;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> A >> S >> E;
//		v.push_back({ A,S,E });
//	}
//}
//
//bool cmp(point& u, point& v)
//{
//	if (u.e < v.e) return true;
//	else return 0;
//}
//
//void solve()
//{
//	sort(v.begin(), v.end(), cmp);
//
//	vector<int> ans;
//	ans.push_back(v[0].idx); //첫 회의는 무조건 넣고
//	int end_time = v[0].e;
//	for (int i = 1; i < N; i++)
//	{
//		if (v[i].s >= end_time)
//		{
//			ans.push_back(v[i].idx);
//			end_time = v[i].e;
//		}
//	}
//
//	cout << ans.size() << endl;
//	for (int i = 0; i < ans.size(); i++)
//		cout << ans[i] << " ";
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}