//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int N, M;
//int Array[31][8];
//int visit[8];
//int MAX = 0;
//
//void input()
//{
//	cin >> N >> M;
//
//	int X;
//	for (int i = 1; i < N + 1; i++)
//	{
//		cin >> X; //�ǹ̾��� �ε��� ���¿뵵
//		for (int j = 1; j < M + 1; j++)
//			cin >> Array[i][j];
//	}
//}
//
//void DFS(int r, int sum)
//{
//	if (MAX < sum) MAX = sum;
//
//	for (int i = 1; i < N + 1; i++)
//	{
//		//���� ���� i������ ���� �����ϸ�
//		if (r >= i)
//		{
//			//�� ����� ����
//			for (int j = 1; j < M + 1; j++)
//			{
//				if (visit[j] == true) continue;
//
//				visit[j] = true;
//				DFS(r - i, sum + Array[i][j]);
//				visit[j] = false;
//			}
//		}
//	}
//}
//
//void solve()
//{
//	DFS(N, 0);
//
//	cout << MAX << endl;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}