//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//#define endl "\n"
//
//int N, M, L;
//int cnt = 0;
//
//struct point
//{
//	int x;
//	int y;
//};
//
//vector<point> v1; //v1 ����, v2 ���
//vector<int> v2;
//
//void input()
//{
//	cin >> M >> N >> L;
//
//	int X;
//	for (int i = 0; i < M; i++)
//	{
//		cin >> X;
//		v2.push_back(X);
//	}
//
//	int Y;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> X >> Y;
//		v1.push_back({ X, Y });
//	}
//}
//
//int cmp(const point& u, const point& v)
//{
//	if (u.x < v.x)	return true;
//	else return false;
//}
//
////for��
////void check()
////{
////	int len1 = v1.size(), len2 = v2.size();
////	int idx = 0, d = 0;
////	for (int i = 0; i < len1; i++)
////	{
////		if (v1[i].y > L) continue; //y��ǥ�� �̹� �Ÿ��� ��� ���
////
////		for (int j = idx; j < len2; j++)
////		{
////			d = abs(v1[i].x - v2[j]) + v1[i].y;
////			if (d <= L) //�����Ÿ��� ��� ���� ���
////			{
////				cnt++;
////				idx = j;
////				break;
////			}
////
////			if (v1[i].x < v2[j] && d > L) //�������� x��ǥ�� ū�� ������ ���
////			{
////				idx = j-1; // ���� ������ x��ǥ�� ũ���� y�� ���� ��� ��Ÿ��� ���� ���� �����Ƿ� ���� ��뿡�� ���� 
////				if (idx < 0) idx = 0;
////				break;
////			}
////		}
////	}
////}
//
////����Ž��
//void check()
//{
//	int len1 = v1.size(), len2 = v2.size();
//	int idx = 0, d = 0;
//	for (int i = 0; i < len1; i++)
//	{
//		if (v1[i].y > L) continue; //y��ǥ�� �̹� �Ÿ��� ��� ���
//
//		d = L - v1[i].y;
//		d = abs(d);
//
//		int lb = lower_bound(v2.begin(), v2.end(), v1[i].x - d) - v2.begin();
//
//		if (v2[lb] < v1[i].x - d || v2[lb] > v1[i].x + d) continue;
//		
//		cnt++;
//		continue;
//	
//	}
//}
//
//void solve()
//{
//	sort(v1.begin(), v1.end(), cmp);
//	sort(v2.begin(), v2.end());
//
//	check();
//
//	cout << cnt << endl;
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