#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);

    switch (num) {
        case 2:
        printf("28");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("30");
        break;
        default:
        printf("31");
    }
}