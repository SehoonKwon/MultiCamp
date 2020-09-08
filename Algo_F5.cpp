//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//int N, M, C;
//int M_vil = 0;
//int cur_W = 0;
//int cnt = 0, idx = 0;
//int vil[2001];
//
//struct point
//{
//    int s;
//    int d;
//    int num;
//};
//
//vector<point> v;
//queue<int> q;
//
//bool cmp(const point& u, const point& v)
//{
//    if (u.d == v.d)
//    {
//        if (u.s < v.s) return true;
//        else return false;
//    }
//    else if (u.d < v.d) return true;
//    else return false;
//
//}
//
//void input()
//{
//    cin >> N >> C;
//    cin >> M;
//
//    int S, D, NUM;
//    for (int i = 0; i < M; i++)
//    {
//        cin >> S >> D >> NUM;
//        v.push_back({ S,D,NUM });
//        if (M_vil < D) M_vil = D; //마지막 마을이 어디까진지
//    }
//}
//
//void pack()
//{
//    for (int i = 0; i < v.size(); i++)
//    {      
//     /*   if (v[i].d <= n) continue;
//        if (v[i].s > n) continue;*/
//
//        int w = v[i].num;
//        if (cur_W + w <= C)
//        {
//            vil[v[i].d] += w;
//            cur_W += w;
//            v[i].num -= w;
//        }
//        else
//        {
//            vil[v[i].d] += C - cur_W;
//            cur_W = C;
//            v[i].num -= w;
//            break;
//        }
//    }
//}
//
//void unpack(int n)
//{
//    cur_W -= vil[n];
//    cnt += vil[n];
//    vil[n] = 0;
//}
//
//void solve()
//{
//    //도착시간 순으로 정렬
//    sort(v.begin(), v.end(), cmp);
//
//
//    for (int i = 1; i < N + 1; i++)
//    {
//        unpack(i);
//
//        pack();
//    }
//
//    cout << cnt;
//}
//
//int main()
//{
//    input();
//    solve();
//    return 0;
//}