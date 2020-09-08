//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//int N;
//long long int A[100001], B[100001], B2[100001];
//int MAX = 0;
//
//void input()
//{
//    cin >> N;
//    for (int i = 0; i < N; i++)
//    {
//        cin >> A[i] >> B[i];
//        if (MAX < B[i]) MAX = B[i];
//    }
//
//    memcpy(B2, B, sizeof(B));
//}
//
//int check(int n)
//{
//    for (int i = 0; i < N - 1; i++)
//    {
//        long long int tax = A[i + 1] - A[i];
//        long long int fish = B[i] - n;
//
//        //물고기는 있으나 세금때문에 전달을 못하면 꿔주지 않음
//        if (fish >= 0 && fish <= tax)
//            fish = 0;
//        //꿔줄 수 있거나 꿔야하면 다음 마을에 넘겨버리기 
//        else if (fish > tax || fish < 0)
//            fish -= tax;
//
//        B[i + 1] += fish;
//    }
//
//    //마지막 마을에서 입양자 빼주고
//    B[N - 1] -= n;
//
//    //마지막 마을에서 판단. 마지막에 0이 되어야 공평하게 나눌 수 있음
//    if (B[N - 1] >= 0) return 1;
//    else return 0;
//}
//
//void solve()
//{
//    int start = 0, end = MAX, ans = 0;
//    while (start <= end)
//    {
//        int sol = (start + end) / 2;
//
//        int c = check(sol);
//        //가능하면 더 높여보기
//        if (c == 1)
//        {
//            ans = sol;
//            start = sol + 1;
//        }
//        //입양 수가 많음
//        else
//            end = sol - 1;
//
//        memcpy(B, B2, sizeof(B2));
//    }
//
//    cout << ans;
//}
//
//int main()
//{
//    input();
//    solve();
//    return 0;
//}