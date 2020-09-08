//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int N, W;
//int D[10001];
//
//struct point
//{
//	int w;
//	int p;
//};
//
//vector<point> v;
//
//void input()
//{
//	cin >> N >> W;
//
//	int w, p;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> w >> p;
//		v.push_back({ w, p });
//	}
//}
//
//bool cmp(point& u, point& v)
//{
//	if (u.w < v.w) return true;
//	else return false;
//}
//
//void solve()
//{
//	sort(v.begin(), v.end(), cmp);
//	int v_cnt = 0;
//	for (int i = 0; i < v.size(); i++)
//	{
//		for (int j = v[i].w; j < W + 1; j++)
//		{
//			int w = v[v_cnt].w;
//			int p = v[v_cnt].p;
//
//			if (w <= j)
//				D[j] = max(D[j], p + D[j - w]);
//		}
//		v_cnt++;
//	}
//
//	cout <<D[W];
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}