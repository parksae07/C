#include <stdio.h>

int main(void) {
    int n;
    int count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (count < 26) {
                printf("%c ", 'A' + count);
            } else {
                printf("%d ", (count - 26) % 10);
            }
            count++;
        }
        printf("\n");
    }

    return 0;
}