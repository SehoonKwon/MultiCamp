//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
////���̵� �ſ� �߿��� ����
////������ �ִ��� ���� DFS���� ����Ž�����θ� �����ѵ� �ð��ʰ��� ��ǻ� �Ұ���
////������ �����ϱ�
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
//    //�ϴ� ������ �� ����
//    M -= W;
//
//    //���� ���� ���� �ּ� ���������� ����� ������ �� �ִ��� ������ �� ��
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