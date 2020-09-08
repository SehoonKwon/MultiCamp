//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int N, L, M;
//
//struct point
//{
//	int x;
//	int y;
//};
//
//vector<point> Fish;
//
//void input()
//{
//	cin >> N >> L >> M; 
//
//	int X, Y;
//	for (int i = 0; i < M; i++)
//	{
//		cin >> Y >> X;
//		Fish.push_back({ X, Y });
//	}
//}
//
//bool cmp(const point& u, const point &v)
//{
//	if (u.y == v.y)
//	{
//		if (u.x < v.x)
//			return true;
//		else return false;
//	}
//	else if (u.y < v.y)
//		return true;
//	else return false;
//}
//
//int isNet(int x)
//{
//	int h = L / 2 - x;
//
//	if (h > 0) return h;
//	else return 0;
//}
//
//int cast(int W, int H, int idx)
//{
//	int cnt, MAX = 0, Sx, Sy, Dx, Dy;
//	for (int k = -W; k < 0; k++) //�ش� ����Ʈ�� ������ �������� ��� �������� ����Ʈ�� ���� ����Ʈ�� �Ǵ� ��������
//	{
//		Sx = Fish[idx].x + k;
//		Dx = Fish[idx].x + W + k;
//
//		for (int r = -H; r < 0; r++)
//		{
//			Sy = Fish[idx].y + r;
//			Dy = Fish[idx].y + H + r;
//
//			if (Sx < 0 || Sy < 0) continue; // ��⿵���� 1���� ����
//
//			if (Dx >= N) Dx = N; //����� ���� �׹� �߶��ֱ�
//			if (Dy >= N) Dy = N;
//
//
//			cnt = 0;
//			for (int i = 0; i < Fish.size(); i++)
//			{
//				int X = Fish[i].x, Y = Fish[i].y;
//				if (Sx <= X && X <= Dx && Sy <= Y && Y <= Dy)
//					cnt++;
//
//				if (Y > Dy) break; //y�� ���� ����� �� �̻� Ž���ʿ� ����
//			}
//
//			MAX = max(MAX, cnt);
//		}
//	}
//
//	return MAX;
//}
//
//void solve()
//{
//	// y��ǥ -> x��ǥ �������� ����
//	sort(Fish.begin(), Fish.end(), cmp);
//
//	int MAX = 0, cnt = 0;
//
//	//�׹��� ����� �� ������
//	for (int i = 1; i < L / 2; i++)
//	{
//		int H = isNet(i);
//		if (H == 0) break; //�� �̻� �׹��� ����� ��� ����
//
//		//������� ��ǥ���� �׹� �������� => �������� �ƴ� ��쵵 ����. ����⸦ �����ϴ� ��ǥ���� ��� ��������
//		for (int j = 0; j < Fish.size(); j++)
//		{
//			int cnt = cast(i, H, j);
//			MAX = max(cnt, MAX);
//		}
//	}
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