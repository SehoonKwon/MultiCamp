//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//// C++ upperbound�� �ʰ� ���� ã�� �ε����̹Ƿ� len�� ��ĭ �� �ڿ��α�
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
//        //upper_bound�� ��ã�� �� ���� ����Ʈ�� ���� �ִ� �ε������� ���� ���� ���´�.
//        //�̰� �̿��ϱ� ���� len�� ��ĭ �� �ڿ� �� ��
//        if (idx == len)
//            list[len++] = Array[i];
//        else
//            list[idx] = Array[i]; //������ �ٷ� �� ĭ�� �ٲٴ� ���ε� upper_bound�� �� �ش� �� ���� �ε����� ����Ŵ
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