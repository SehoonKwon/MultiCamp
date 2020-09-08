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
//	DFS(idx + 1, w + Array[idx], sum); // 구슬에 추를 올리는 경우
//	DFS(idx + 1, w, sum + Array[idx]); //추 무게를 올리는 경우
//	DFS(idx + 1, w, sum); //추를 안쓰는 경우
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