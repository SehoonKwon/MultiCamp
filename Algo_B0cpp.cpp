//#include <stdio.h>
//
////�ٽ� Ǯ���
//
//typedef struct {
//    int pos, h;
//}STACK;
//STACK stack[100000 + 10];
//int N;
//long long solve(void) {
//    int i, h, sp = 0, pos;
//    long long area = 0, max = 0;
//    for (i = 1; i <= N + 1; i++) {//N+1��° h=0�� �̿��Ͽ� ���������� ��� ��
//        if (i == N + 1) h = 0;
//        else scanf("%d", &h);
//        pos = i;
//        //����ճ��̷� ����� �ִ� ���簢���� ������ ���ÿ� ���������
//        //����պ��� ũ�ų� ���� ����� ��� ��(���ϸ鼭 ���� ��)
//        while (sp) {
//            if (stack[sp].h < h) break;
//            area = (long long)stack[sp].h * (i - stack[sp].pos);
//            if (max < area)max = area;
//            pos = stack[sp].pos;//������ ���� ����� ��ġ ���� ���
//            sp--;
//        }
//        //�����̿� ������ ��ġ������ Ǫ��
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