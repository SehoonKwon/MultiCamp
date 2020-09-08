//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
////아이디어가 매우 중요한 문제
////개수가 최대인 것은 DFS같이 완전탐색으로만 가능한데 시간초과라 사실상 불가능
////역으로 생각하기
//
//int W;
//int Array[6], use[6], temp[6];
//int money[6] = { 500, 100, 50, 10, 5, 1 };
//int cnt = 0;
//int flag = 0;
//
//void input()
//{
//    cin >> W;
//    for (int i = 0; i < 6; i++)
//        cin >> Array[i];
//
//    memcpy(temp, Array, sizeof(Array));
//}
//
//void cal_min(int M)
//{
//	while (M > 0)
//	{
//		if (M >= 500 && Array[0] > 0)
//		{
//			M -= 500;
//			Array[0]--;
//		}
//		else if (M >= 100 && Array[1] > 0)
//		{
//			M -= 100;
//			Array[1]--;
//		}
//		else if (M >= 50 && Array[2] > 0)
//		{
//			M -= 50;
//			Array[2]--;
//		}
//		else if(M >= 10 && Array[3] > 0)
//		{
//			M -= 10;
//			Array[3]--;
//		}
//		else if (M >= 5 && Array[4] > 0)
//		{
//			M -= 5;
//			Array[4]--;
//		}
//		else
//		{
//			M -= 1;
//			Array[5]--;
//		}
//
//	}
//}
//
//void solve()
//{
//    int M = 0;
//    for (int i = 0; i < 6; i++)
//        M += money[i] * Array[i];
//
//    //일단 지불할 돈 빼기
//    M -= W;
//
//    //이제 남은 돈을 최소 동전개수로 만들면 지불할 때 최대의 동전을 낸 셈
//	cal_min(M);
//
//	int cnt = 0;
//	for (int i = 0; i < 6; i++)
//		cnt += Array[i];
//
//	cout << cnt << endl;
//	for (int i = 0; i < 6; i++)
//		cout << Array[i] << " ";
//}
//
//int main()
//{
//    input();
//    solve();
//    return 0;
//}