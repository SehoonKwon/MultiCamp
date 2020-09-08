//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int N;
//int list[501];
//int len = 1;
//int idx;
//
//struct point
//{
//    int A;
//    int B;
//};
//
//vector<point> v;
//
//void input()
//{
//	cin >> N;
//
//    int A, B;
//    for (int i = 0; i < N; i++)
//    {
//        cin >> A >> B;
//        v.push_back({ A, B });
//    }
//}
//
//bool cmp(point& u, point& v)
//{
//    return u.A < v.A;
//}
//
//void solve()
//{
//    sort(v.begin(), v.end(), cmp);
//
//    int idx = 0;
//    list[len++] = v[0].B;
//    for (int i = 1; i < N; i++)
//    {
//        idx = upper_bound(list, list + len, v[i].B) - list;
//
//        if (idx == len)
//            list[len++] = v[i].B;
//        else
//            list[idx] = v[i].B;
//    }
//
//    cout << N - (len-1);
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}