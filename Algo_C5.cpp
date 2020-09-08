//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//#define endl "\n"
//#define MAX 987654321
//
//int N, A, B;
//char Array[31][31];
//int visit[31][31], visit2[31][31];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//int ans = 0;
//
//struct point
//{
//    int x;
//    int y;
//    int step;
//    char C;
//};
//
//queue<point> q;
//
//void input()
//{
//    cin >> N >> A >> B;
//    for (int i = 0; i < N; i++)
//        for (int j = 0; j < N; j++)
//        {
//            cin >> Array[i][j];
//            visit[i][j] = MAX;
//        }
//
//    memcpy(visit2, visit, sizeof(visit));
//}
//
//void BFS(int X, int Y)
//{
//    visit[Y][X] = 0;
//    q.push({ X, Y, 0, Array[Y][X] });
//
//    while (!q.empty())
//    {
//        int X = q.front().x;
//        int Y = q.front().y;
//        int step = q.front().step;
//        char C = q.front().C;
//        q.pop();
//
//        for (int i = 0; i < 4; i++)
//        {
//            int nx = X + dx[i];
//            int ny = Y + dy[i];
//
//            if (nx > -1 && nx < N && ny > -1 && ny < N)
//            {
//                if (Array[ny][nx] == C)
//                {
//                    if (visit[Y][X] + A < visit[ny][nx])
//                    {
//                        visit[ny][nx] = visit[Y][X] + A;
//                        q.push({ nx, ny, step + A, C });
//                    }
//                }
//                else
//                {
//                    if (visit[Y][X] + B < visit[ny][nx])
//                    {
//                        visit[ny][nx] = visit[Y][X] + B;
//                        q.push({ nx, ny, step + B, Array[ny][nx] });
//                    }
//
//                }
//            }
//        }
//    }
//}
//
//int check()
//{
//    int res = 0;
//    for (int i = 0; i < N; i++)
//        for (int j = 0; j < N; j++)
//            res = max(res, visit[i][j]);
//
//    return res;
//}
//
//void solve()
//{
//    for (int i = 0; i < N; i++)
//        for (int j = 0; j < N; j++)
//        {
//            memcpy(visit, visit2, sizeof(visit2));
//            BFS(i, j);
//
//            int m = check();
//            if (ans < m) ans = m;
//        }
//    cout << ans;
//}
//
//int main()
//{
//    input();
//    solve();
//    return 0;
//}