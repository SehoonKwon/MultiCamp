//#include <stdio.h>
//#define IMP (987654321)
//#define MAXN (15)
//#define MAXM (64000+10)
//int coin[MAXN];//�����ݾ�
//int N;//�����ܰ��
//int M;//�ܵ�
//
////1�����迭Ȱ��
//int D[MAXM];//n��° �������� ����ؼ� m�ݾ��� ����� �ּ� ������
//int solve() {
//    int i, j, cnt;
//    for (i = 1; i <= M; i++) D[i] = IMP;
//    for (i = 1; i <= N; i++) {//���� �ε���
//        for (j = coin[i]; j <= M; j++) {//�ܵ� �ε���
//            cnt = D[j - coin[i]] + 1;//�� �������� �Ἥ ���� �ܾ��� ���� �������� + 1
//            if (D[j] > cnt) D[j] = cnt;
//        }
//    }
//    return D[M];
//}
//
//int main(void) {
//    int i, sol;
//    scanf("%d", &N);
//    for (i = 1; i <= N; i++) scanf("%d", &coin[i]);
//    scanf("%d", &M);
//    sol = solve();
//    if (sol == IMP) printf("impossible\n");
//    else printf("%d\n", sol);
//
//    return 0;
//}