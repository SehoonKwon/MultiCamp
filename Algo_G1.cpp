//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//#define MAX (int)1e6
//
//int N;
//int Array[MAX];
//int list[MAX];
//int len = 0;
//
//void input()
//{
//    cin >> N;
//    for (int i = 0; i < N; i++)
//        cin >> Array[i];
//}
//
//void solve()
//{
//    int idx = 0;
//    for (int i = 0; i < N; i++)
//    {
//        idx = lower_bound(list, list + len, Array[i]) - list;
//
//        if (idx == len)
//            list[len++] = Array[i];
//        else
//            list[idx] = Array[i];
//    }
//    cout << len;
//}
//
//int main()
//{
//    input();
//    solve();
//    return 0;
//}

////upper bound로 구하기. 이때 upperbound는 초과 값을 구하므로 같은 수가 이미 나왔는지 체크해야 함
//// 15 27 15 순서면 우리가 원하는건 두번째 15는 15자리를 가리켜야 하는데 upperbound로 구하면 27을 가리키므로
//// 그 바로 전 값이 나와 같은 값인지 확인하는 작업 필요
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//#define MAX (int)1e6
//
//int N;
//int Array[MAX];
//int list[MAX];
//int len = 1;
//
//void input()
//{
//    cin >> N;
//    for (int i = 0; i < N; i++)
//        cin >> Array[i];
//}
//
//void solve()
//{
//    int idx = 0;
//    list[len++] = Array[0];
//    for (int i = 1; i < N; i++)
//    {
//        idx = upper_bound(list, list + len, Array[i]) - list;
//
//        if (list[idx - 1] == Array[i]) continue;
//
//        if (idx == len)
//            list[len++] = Array[i];
//        else
//            list[idx] = Array[i];
//    }
//    cout << len - 1;
//}
//
//int main()
//{
//    input();
//    solve();
//    return 0;
//}