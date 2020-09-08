//#include <stdio.h>
//
////다시 풀어보기
//
//typedef struct {
//    int pos, h;
//}STACK;
//STACK stack[100000 + 10];
//int N;
//long long solve(void) {
//    int i, h, sp = 0, pos;
//    long long area = 0, max = 0;
//    for (i = 1; i <= N + 1; i++) {//N+1번째 h=0을 이용하여 마지막까지 모두 팝
//        if (i == N + 1) h = 0;
//        else scanf("%d", &h);
//        pos = i;
//        //현기둥높이로 만들수 있는 직사각형의 정보만 스택에 남기기위해
//        //현기둥보다 크거나 같은 기둥은 모두 팝(팝하면서 면적 비교)
//        while (sp) {
//            if (stack[sp].h < h) break;
//            area = (long long)stack[sp].h * (i - stack[sp].pos);
//            if (max < area)max = area;
//            pos = stack[sp].pos;//마지막 팝한 기둥의 위치 정보 백업
//            sp--;
//        }
//        //현높이와 갱신한 위치정보를 푸쉬
//        sp++;
//        stack[sp].h = h;
//        stack[sp].pos = pos;
//    }
//    return max;
//}
//int main(void) {
//    for (;;) {
//        scanf("%d", &N);
//        if (N == 0) break;
//        printf("%lld\n", solve());
//    }
//
//    return 0;
//}