#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);

    if (num > 0) {
        printf("plus");
    }
    else if (num < 0) {
        printf("minus");
    }
    else {
        printf("zero");
    }
}