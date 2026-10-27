#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);

    switch(num) {
        case 1:
        printf("dog");
        break;
        case 2:
        printf("cat");
        break;
        case 3:
        printf("chick");
        break;
        default:
        printf("blank");
    }
}