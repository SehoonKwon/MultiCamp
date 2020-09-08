#include <stdio.h>

//번호를 묶음으로 보고 번호별 순열 완전탐색
//각 숫자가 DP처럼 해당 인덱스까지 몇번 나왔는지 기록하는 테이블 있고
//그 갯수만큼 나와야 하므로 해당 범위안에 해당 번호가 채워지도록 완전 탐색

int N, M;
int sum[11][100000 + 10];
int cnt[11];
int used[11];
int sol;
#define MIN(a,b) ((a)>(b)?(b):(a))
void input_data(void)
{
    int i, j, id;
    scanf("%d %d", &N, &M);
    for (i = 1; i <= N; i++)
    {
        scanf("%d", &id);
        sum[id][i] = 1;//종류별 위치별 체크
        cnt[id]++; //종류별 카운트
    }
    for (i = 1; i <= M; i++)//종류
    {
        for (j = 1; j <= N; j++)//위치
        {
            sum[i][j] += sum[i][j - 1];//prefixsum : 누적개수 구함
        }
    }
}
void dfs(int n, int p, int c)//1~M까지 순열구조로 이동회수 구하기
{
    int i, move_cnt;
    if (sol <= c)return;
    if (n > M)
    {
        sol = MIN(sol, c);
        return;
    }
    for (i = 1; i <= M; i++)
    {
        if (used[i])continue;
        used[i] = 1;
        move_cnt = cnt[i] - (sum[i][p + cnt[i] - 1] - sum[i][p - 1]);
        dfs(n + 1, p + cnt[i], c + move_cnt);
        used[i] = 0;
    }
}
void main(void)
{
    input_data();
    sol = 987654321;
    dfs(1, 1, 0);
    printf("%d\n", sol);
}