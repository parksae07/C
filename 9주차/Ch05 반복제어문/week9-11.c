#include <stdio.h>

int main(void) {
    double base, height, area;
    char answer;

    while (1) {
        scanf("%lf %lf", &base, &height);

        area = base * height / 2;

        printf("%.1f\n", area);
        printf("Continue? ");
        scanf(" %c", &answer);

        if (answer != 'Y' && answer != 'y') {
            break;
        }
    }

    return 0;
}