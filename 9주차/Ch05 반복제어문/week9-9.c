#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int count = 0;
    double avg = 0;

    while (1) {
        scanf("%d", &n);

        if (n < 0 || n > 100) {
            break;
        }

        sum += n;
        count++;
    }

    if (count > 0) {
        avg = (double)sum / count;
    }

    printf("sum: %d\n", sum);
    printf("avg: %.2f\n", avg);

    return 0;
}
