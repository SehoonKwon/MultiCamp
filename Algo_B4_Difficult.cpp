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
//        //������ ������ ���ݶ����� ������ ���ϸ� ������ ����
//        if (fish >= 0 && fish <= tax)
//            fish = 0;
//        //���� �� �ְų� ����ϸ� ���� ������ �Ѱܹ����� 
//        else if (fish > tax || fish < 0)
//            fish -= tax;
//
//        B[i + 1] += fish;
//    }
//
//    //������ �������� �Ծ��� ���ְ�
//    B[N - 1] -= n;
//
//    //������ �������� �Ǵ�. �������� 0�� �Ǿ�� �����ϰ� ���� �� ����
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
//        //�����ϸ� �� ��������
//        if (c == 1)
//        {
//            ans = sol;
//            start = sol + 1;
//        }
//        //�Ծ� ���� ����
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