//#include <iostream>
//#include <vector>
//#include <string>
//#include <stack>
//using namespace std;
//
//string s;
//
//struct point
//{
//	int x1, x2;
//};
//
//vector<int> v;
//vector<point> m;
//stack<int> stk;
//
//void solve()
//{
//	int X1 = 0, cnt1 = 0, cnt2 = 0;
//	for (int i = 0; i < s.size(); i++)
//	{
//		//레이저 갯수 세기
//		if (i < s.size() - 1)
//		{
//			if (s[i] == '(' && s[i + 1] == ')')
//			{
//				v.push_back(i);
//				i++;
//				continue;
//			}
//		}
//
//		//막대 갯수 세기
//		if (s[i] == '(')
//		{
//			stk.push(i);
//			cnt1++;
//		}
//
//		else if (s[i] == ')')
//		{
//			if (stk.empty()) continue;
//			X1 = stk.top();
//			stk.pop();
//
//			m.push_back({ X1, i });
//			cnt2++;
//		}
//
//	}
//
//	int cnt = 0, L_cnt = 0;
//	for (int i = 0; i < m.size(); i++)
//	{
//		L_cnt = 0;
//		for (int j = 0; j < v.size(); j++)
//		{
//			if (m[i].x1 < v[j] && v[j] < m[i].x2) L_cnt++;
//		}
//
//		cnt += (L_cnt + 1);
//	}
//	
//	cout << cnt;
//}
//
//int main()
//{
//	cin >> s;
//	solve();
//
//	return 0;
//}