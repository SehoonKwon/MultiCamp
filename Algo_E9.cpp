//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int Array[4][18];
//int visit[6][6];
//int Pass[18];
//int isP, flag;
//
//void DFS(int Y, int cnt);
//
//void input()
//{
//	for (int i = 0; i < 1; i++)
//		for (int j = 0; j < 18; j++)
//			cin >> Array[i][j];
//}
//
//int CHECKALL(int Y)
//{
//	for (int i = 0; i < 18; i++)
//		if (Pass[i] > 0) return 0;
//	return 1;
//}
//
//void DFS(int Y, int cnt)
//{
//	if (isP == 1) return;
//
//	for (int i = 0; i < 18; i++)
//		if (Pass[i] < 0) return;
//
//	if (cnt == 15)
//	{
//		//		isP = check_All(Y);
//		isP = CHECKALL(Y);
//		return;
//	}
//	
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = i + 1; j < 6; j++)
//		{
//			if (visit[i][j] == true) continue;
//			
//			visit[i][j] = true;
//			visit[j][i] = true;
//
//			//앞에 팀이 이기는 경우
//			Pass[i * 3]--;
//			Pass[j * 3 + 2]--;
//			DFS(Y, cnt + 1);
//
//			Pass[i * 3]++;
//			Pass[j * 3 + 2]++;
//			visit[i][j] = false;
//			visit[j][i] = false;
//
//			//무승부
//			visit[i][j] = true;
//			visit[j][i] = true;
//			Pass[i * 3 + 1]--;
//			Pass[j * 3 + 1]--;
//			DFS(Y, cnt + 1);
//
//			Pass[i * 3 + 1]++;
//			Pass[j * 3 + 1]++;
//			visit[i][j] = false;
//			visit[j][i] = false;
//
//			//뒤에 팀이 이기는 경우
//			visit[i][j] = true;
//			visit[j][i] = true;
//			Pass[i * 3 + 2]--;
//			Pass[j * 3]--;
//			DFS(Y, cnt + 1);
//
//			Pass[i * 3 + 2]++;
//			Pass[j * 3]++;
//			visit[i][j] = false;
//			visit[j][i] = false;
//		}
//	}
//}
//
//int check_res(int Y)
//{
//	for (int i = 0; i < 6; i++)
//	{
//		int sum = Array[Y][i * 3] + Array[Y][i * 3 + 1] + Array[Y][i * 3 + 2];
//		if (sum != 5) return 0;
//	}
//
//	return 1;
//}
//
//void solve()
//{
//	for (int i = 0; i < 4; i++)
//	{
//		memcpy(Pass, Array[i], sizeof(Array[i]));
//		memset(visit, 0, sizeof(visit));
//		isP = 0;
//
//		if(check_res(i))	DFS(i, 0);
//
//		cout << isP << " ";
//	}
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}