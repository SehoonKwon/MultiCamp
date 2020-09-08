//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//#define endl "\n"
//#define MAXN 110
//
//int N;
//int X[MAXN], Y[MAXN];
//int Array[101][101];
//int MAX = 0;
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> X[i] >> Y[i];
//}
//
////배열에 높이정보까지 담기. 높이는 내 위에 있는 연속된 1의 개수
//void paper()
//{
//	for (int i = 0; i < N; i++)
//	{
//		int x = X[i], y = Y[i];
//
//		for (int j = 0; j < 10; j++)
//			for (int k = 0; k < 10; k++)
//				if (y + j < 100 && x + k < 100) Array[y + j][x + k] = 1;
//	}
//}
//
//void PRT()
//{
//	for (int i = 0; i < 25; i++)
//	{
//		for (int j = 0; j < 25; j++)
//			cout << Array[i][j] << " ";
//		cout << endl;
//	}
//}
//
//void cal_H(int x, int y)
//{
//	int cnt = 0;
//	for (int i = 1; i < 100; i++)
//	{
//		if (y + i > 99 || Array[y + i][x] == 0)
//		{
//			cnt = i;
//			break;
//		}
//	}
//
//	Array[y][x] = cnt;
//}
//
//
////int calcul(int x, int y)
////{
////	int W = 1, H = 999, temp = 0;
////
////	for (int i = x; i < 100; i++)
////	{
////		H = min(H, Array[y][i]);
////		temp = max(temp, (i - x + 1) * H);
////
////		if (i > 99 || Array[y][i] == 0) break;
////	}
////
////	return temp;
////}
//
////어디가 틀렸는지??
//int calcul(int x, int y)
//{
//	int W = 1, H = 999, temp = 0;
//
//	for (int i = x; i < 100; i++)
//	{
//		if (i > 99 || Array[y][i] == 0) break;
//
//		if (Array[y][i] != Array[y][i + 1])
//		{
//			if (H != 999)
//				temp = max(temp, W * H);
//			else
//				temp = max(temp, W * 1);
//		}
//		else
//		{
//			H = min(H, Array[y][i]);
//		}
//
//		W++;
//	}
//
//	return temp;
//}
//
//void solve()
//{
//	int W;
//	paper();
//
//	for (int i = 0; i < 100; i++)
//		for (int j = 0; j < 100; j++)
//			if (Array[i][j] == 1)
//					cal_H(j, i);
//
//	for (int i = 0; i < 100; i++)
//		for (int j = 0; j < 100; j++)
//			if (Array[i][j] > 0)
//			{
//				W = calcul(j, i);
//				MAX = max(MAX, W);
//			}
//
//	cout << MAX << endl;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	input();
//	solve();
//
//	return 0;
//}