//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//// C++ upperbound는 초과 값을 찾은 인덱스이므로 len을 한칸 더 뒤에두기
//
//int N;
//int Array[201];
//int list[201];
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
//        //upper_bound로 못찾을 시 현재 리스트에 값이 있는 인덱스보다 뒤의 값이 나온다.
//        //이걸 이용하기 위해 len을 한칸 더 뒤에 둔 것
//        if (idx == len)
//            list[len++] = Array[i];
//        else
//            list[idx] = Array[i]; //작은거 바로 뒷 칸을 바꾸는 것인데 upper_bound가 딱 해당 값 뒤의 인덱스를 가르킴
//    }
//
//    cout << N - (len - 1);
//}
//
//int main()
//{
//    input();
//    solve();
//    return 0;
//}