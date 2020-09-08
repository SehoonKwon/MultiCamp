//#include <stdio.h>
//#define IMP (987654321)
//#define MAXN (15)
//#define MAXM (64000+10)
//int coin[MAXN];//동전금액
//int N;//동전단계수
//int M;//잔돈
//
////1차원배열활용
//int D[MAXM];//n번째 동전까지 고려해서 m금액을 만드는 최소 동전수
//int solve() {
//    int i, j, cnt;
//    for (i = 1; i <= M; i++) D[i] = IMP;
//    for (i = 1; i <= N; i++) {//동전 인덱스
//        for (j = coin[i]; j <= M; j++) {//잔돈 인덱스
//            cnt = D[j - coin[i]] + 1;//현 동전으로 써서 남은 잔액의 이전 동전개수 + 1
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