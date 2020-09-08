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

////upper bound�� ���ϱ�. �̶� upperbound�� �ʰ� ���� ���ϹǷ� ���� ���� �̹� ���Դ��� üũ�ؾ� ��
//// 15 27 15 ������ �츮�� ���ϴ°� �ι�° 15�� 15�ڸ��� �����Ѿ� �ϴµ� upperbound�� ���ϸ� 27�� ����Ű�Ƿ�
//// �� �ٷ� �� ���� ���� ���� ������ Ȯ���ϴ� �۾� �ʿ�
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