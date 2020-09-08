#include <stdio.h>

//��ȣ�� �������� ���� ��ȣ�� ���� ����Ž��
//�� ���ڰ� DPó�� �ش� �ε������� ��� ���Դ��� ����ϴ� ���̺� �ְ�
//�� ������ŭ ���;� �ϹǷ� �ش� �����ȿ� �ش� ��ȣ�� ä�������� ���� Ž��

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
        sum[id][i] = 1;//������ ��ġ�� üũ
        cnt[id]++; //������ ī��Ʈ
    }
    for (i = 1; i <= M; i++)//����
    {
        for (j = 1; j <= N; j++)//��ġ
        {
            sum[i][j] += sum[i][j - 1];//prefixsum : �������� ����
        }
    }
}
void dfs(int n, int p, int c)//1~M���� ���������� �̵�ȸ�� ���ϱ�
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