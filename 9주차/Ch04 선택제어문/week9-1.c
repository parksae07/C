#include <stdio.h>

int main() {
    int numA = 0;
    int numB = 0;
    scanf("%d ", &numA);
    scanf("%d", &numB);

    if (numA > numB) {
        printf("%d", numA-numB);
    }
    else {
        printf("%d", numB-numA);
    }
}