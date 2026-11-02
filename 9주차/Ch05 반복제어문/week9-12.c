#include <stdio.h>

int main() {
    int x = 50;        // 초기값
    scanf("%d", &x);   // [75] 이 줄 실행 후 x 값 확인

    if (x >= 80) {
        x += 10;       // [70] 이 줄 실행 후 x 값 확인
    } else {
        x -= 5;        // [70] 이 줄 실행 후 x 값 확인
    }
    x--;               // [69] 이 줄 실행 후 x 값 확인

    int A = 75;        // [A]에서 확인한 값
    int B = 70;        // [B]에서 확인한 값
    int C = 69;        // [C]에서 확인한 값

    printf("%d %d %d\n", A, B, C);

    return 0;
}