//#include <iostream>
//using namespace std;
//
//int N, M;
//int Array[13];
//int W[8];
//int isP;
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> Array[i];
//
//	cin >> M;
//	for (int i = 0; i < M; i++)
//		cin >> W[i];
//}
//
//void DFS(int idx, int w, int sum)
//{
//	if (isP == 1 || idx > N) return;
//	if (w == sum)
//	{
//		isP = 1;
//		return;
//	}
//
//	DFS(idx + 1, w + Array[idx], sum); // ������ �߸� �ø��� ���
//	DFS(idx + 1, w, sum + Array[idx]); //�� ���Ը� �ø��� ���
//	DFS(idx + 1, w, sum); //�߸� �Ⱦ��� ���
//}
//
//void solve()
//{
//	for (int i = 0; i < M; i++)
//	{
//		isP = 0;
//		if (W[i] == 0)	isP = 1;
//		else DFS(0, W[i], 0);
//
//		if (isP == 1) cout << "Y" << " ";
//		else cout << "N" << " ";
//	}
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}