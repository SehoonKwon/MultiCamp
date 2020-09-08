//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int N, M;
//int Array[101][101], Array2[101][101];
//int visit[101][101];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//int Chz_cnt = 0;
//int pre_cnt = 0;
//
//void input()
//{
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			cin >> Array[i][j];
//			if(Array[i][j] == 1) Chz_cnt++;
//		}
//}
//
//void DFS(int X, int Y)
//{
//	if (visit[Y][X] == true) return;
//	visit[Y][X] = true;
//	Array[Y][X] = -1;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = X + dx[i];
//		int ny = Y + dy[i];
//
//		if (nx > -1 && nx < M && ny > -1 && ny < N)
//			if (visit[ny][nx] == false && Array[ny][nx] != 1)
//				DFS(nx, ny);
//	}
//}
//
//int check(int X, int Y)
//{
//	//�ܺο� ���˵ƴ��� Ȯ��
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = X + dx[i];
//		int ny = Y + dy[i];
//		if (nx > -1 && nx < M && ny > -1 && ny < N)
//			if (Array[ny][nx] == -1)
//				return 1;
//	}
//
//	return 0;
//}
//
//void DFS_C(int X, int Y)
//{
//	if (visit[Y][X] == true) return;
//
//	//�ܺο� ���˵� ġ������ �˻�
//	int P = check(X, Y);
//
//	if (P == 1)
//	{
//		visit[Y][X] = true;
//		Array2[Y][X] = -1; // Array2���� �ٲ��־�� �����ۿ� ����
//		Chz_cnt--;
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx > -1 && nx < M && ny > -1 && ny < N)
//				if (visit[ny][nx] == false && Array[ny][nx] == 1)
//					DFS_C(nx, ny);
//		}
//	}
//}
//
//void solve()
//{
//	DFS(0, 0); //�ٱ� ���� ĥ�ϱ�
//	memcpy(Array2, Array, sizeof(Array)); //�� �����س���
//
//	int time = 0;
//	while (1)
//	{
//		if (Chz_cnt <= 0) break;
//
//
//		pre_cnt = Chz_cnt; // ���� �� ġ�� ����
//		for (int i = 0; i < N; i++)
//			for (int j = 0; j < M; j++)
//			{
//				if (visit[i][j] == false && Array[i][j] == 1)
//					DFS_C(j, i);
//
//			}
//
//		time++;
//
//		memcpy(Array, Array2, sizeof(Array2)); //ġ�� ���ŵ� �� ����
//
//		//���� �ܺ� ���� �� �� �ִ��� �˻�
//		for (int i = 0; i < N; i++)
//			for (int j = 0; j < M; j++)
//				if (visit[i][j] == false && Array[i][j] == 0)
//				{
//					int P = check(j, i);
//					if (P == 1) DFS(j, i);
//				}
//
//		memcpy(Array2, Array, sizeof(Array)); //�� �����س���
//
//	}
//
//	cout << time << endl << pre_cnt;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}