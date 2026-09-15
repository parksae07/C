#include <stdio.h>

int main(void)
{
    int numA, numB;
    scanf("%d", &numA);
    scanf("%d", &numB);

    int temp = numB;

    while(temp > 0){
        printf("%d\n", numA*(temp % 10));
        temp /= 10;
    }
    printf("%d", numA*numB);
    return 0;
}