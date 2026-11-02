#include <stdio.h>

int main(void) {
    int n, num;
    int sum = 0;
    double avg;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }

    avg = (double)sum / n;

    printf("%.2f\n", avg);

    return 0;
}