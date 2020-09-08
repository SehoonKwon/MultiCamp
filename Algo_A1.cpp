//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//#define endl "\n"
//#define MAXN 1010
//
//int N;
//
//struct point
//{
//	int sum;
//	int cnt3;
//	int cnt2;
//	int cnt1;
//	int idx;
//};
//
//vector<point> v;
//
//void score(int idx, int X)
//{
//	switch (X)
//	{
//	case 1:
//		v[idx].sum += X;
//		v[idx].cnt1++;
//		break;
//	case 2:
//		v[idx].sum += X;
//		v[idx].cnt2++;
//		break;
//	case 3:
//		v[idx].sum += X;
//		v[idx].cnt3++;
//		break;
//	default:
//		break;
//	}
//}
//
//void input()
//{
//	v.push_back({ 0, 0, 0, 0, 1 });
//	v.push_back({ 0, 0, 0, 0, 2 });
//	v.push_back({ 0, 0, 0, 0, 3 });
//
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		int A, B, C;
//		cin >> A >> B >> C;
//		score(0, A);
//		score(1, B);
//		score(2, C);
//	}
//}
//
//bool cmp(const point& u, const point& v)
//{
//	if (u.sum == v.sum)
//	{
//		if (u.cnt3 == v.cnt3)
//		{
//			if (u.cnt2 > v.cnt2)
//				return true;
//			else return false;
//		}
//		else if (u.cnt3 > v.cnt3)
//			return true;
//		else return false;
//	}
//	else if (u.sum > v.sum)
//		return true;
//	else return false;
//}
//
//void solve()
//{
//	sort(v.begin(), v.end(), cmp);
//	if (v[0].sum == v[1].sum && v[0].cnt3 == v[1].cnt3 && v[0].cnt2 == v[1].cnt2)
//		cout << "0" << " " << v[0].sum << endl;
//	else
//		cout << v[0].idx << " " << v[0].sum << endl;
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