//#include <iostream>
//using namespace std;
//
//// N이 12이상일 때 -> for문으로 체크하면 안됌 O(1)수준으로 체크할 수 있게 -> 그럼 배열
//
//int N;
//int Array[14][14];
//int visit[14][14];
//int check[14];
//int cnt = 0;
//
//int isP(int Y, int X)
//{
//	//세로 검사
//	if (check[X] == 1) return -1;
//
//	//대각선
//
//
//	return 1;
//}
//
//void DFS(int idx)
//{
//	if (idx == N)
//	{
//		cnt++;
//		return;
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		int P = isP(idx, i);
//		if (P == -1) continue;
//
//		visit[idx][i] = true;
//		check[i]++;
//		DFS(idx + 1);
//		check[i]--;
//		visit[idx][i] = false;
//	}
//}
//
//void solve()
//{
//	DFS(0);
//
//	cout << cnt;
//}
//
//int main()
//{
//	cin >> N;
//	solve();
//	return 0;
//}