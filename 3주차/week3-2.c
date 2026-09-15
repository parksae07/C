#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    printf("%s", (num % 2==0)?"Even":"Odd");
    return 0;
}