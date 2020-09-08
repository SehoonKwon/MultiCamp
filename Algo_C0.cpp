//#include <iostream>
//#include <queue>
//using namespace std;
//
//int N, M;
//int Array[101][101];
//int visit[101][101][5];
//int Sx, Sy, Sd, Dx, Dy, Dd;
//
//struct point
//{
//    int x;
//    int y;
//    int dir;
//    int step;
//};
//
//void input()
//{
//    cin >> N >> M;
//    for (int i = 1; i < N + 1; i++)
//        for (int j = 1; j < M + 1; j++)
//            cin >> Array[i][j];
//
//    cin >> Sy >> Sx >> Sd;
//    cin >> Dy >> Dx >> Dd;
//}
//
//int cal_D(int cur, int lr)
//{
//    //왼쪽
//    if (lr)
//    {
//        switch (cur)
//        {
//        case 1:
//            return 4;
//        case 2:
//            return 3;
//        case 3:
//            return 1;
//        case 4:
//            return 2;
//        default:
//            break;
//        }
//    }
//
//    //오른쪽
//    else
//    {
//        switch (cur)
//        {
//        case 1:
//            return 3;
//        case 2:
//            return 4;
//        case 3:
//            return 2;
//        case 4:
//            return 1;
//        default:
//            break;
//        }
//    }
//}
//
//int BFS()
//{
//    visit[Sy][Sx][Sd] = true;
//    queue<point> q;
//    q.push({ Sx, Sy, Sd, 0 });
//
//    int cnt = 987654321;
//    while (!q.empty())
//    {
//        int X = q.front().x;
//        int Y = q.front().y;
//        int step = q.front().step;
//        int D = q.front().dir;
//        q.pop();
//
//        if (X == Dx && Y == Dy && D == Dd)
//            return step;
//
//        //왼쪽 턴  
//        int nd = cal_D(D, 1);
//        if (visit[Y][X][nd] == 0)
//        {
//            visit[Y][X][nd] = 1;
//            q.push({ X, Y, nd, step + 1 });
//        }
//        //오른쪽 턴
//        nd = cal_D(D, 0);
//        if (visit[Y][X][nd] == 0)
//        {
//            visit[Y][X][nd] = 1;
//            q.push({ X, Y, nd, step + 1 });
//        }
//
//        //직진
//        for (int i = 1; i < 4; i++)
//        {
//            int nx = X, ny = Y;
//            if (D == 1) nx += i;
//            else if (D == 2) nx -= i;
//            else if (D == 3) ny += i;
//            else if (D == 4) ny -= i;
//
//            if (nx > 0 && nx <= M && ny > 0 && ny <= N)
//            {
//                if (Array[ny][nx] == 0 && visit[ny][nx][D] == 0)
//                {
//                    visit[ny][nx][D] = true;
//                    q.push({ nx, ny, D, step + 1 });
//                }
//                else if (Array[ny][nx] == 1) break; //벽일때만 진행을 멈추기. 이거 없으면 오답
//            }
//        }
//    }
//
//    return cnt;
//}
//
//void solve()
//{
//    int ans = BFS();
//
//    cout << ans << endl;
//}
//
//int main()
//{
//    input();
//    solve();
//
//    return 0;
//}