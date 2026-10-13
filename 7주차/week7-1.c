#include <stdio.h>

int main() {
    int a = 100;
    int *p;
    p = &a;
 
    printf("p: %d \n", *p);
    printf("(*p)++ : 현재값 반환 후 이후값 증가\n");
    printf("반환하는 값: %d \n", (*p)++);
    printf("저장된 값: %d \n", *p);
    printf("(*p)+1 : 값 증가 후 결과 다시 저장\n");
    printf("반환하는 값: %d \n", (*p)+1);
    printf("저장된 값: %d \n", *p);
    printf("*p+=1 : 값 1 증가 후 결과 다시 저장\n");
    printf("반환하는 값: %d \n", *p+=1);
    printf("저장된 값: %d \n", *p);
    printf("(*p)+=1 : 값 1 증가 후 결과 다시 저장\n");
    printf("반환하는 값: %d \n", (*p)+=1);
    printf("저장된 값: %d \n", *p);
    printf("*p=*p+1 : 값을 1 더하고 결과를 저장\n");
    printf("반환하는 값: %d \n", *p=*p+1);
    printf("저장된 값: %d \n", *p);
    printf("++*p : 값을 먼저 1 증가시키고 증가된 값을 반환\n");
    printf("반환하는 값: %d \n", ++*p);
    printf("저장된 값: %d \n", *p);
    printf("++(*p) : 값을 먼저 1 증가시키고 증가된 값을 반환\n");
    printf("반환하는 값: %d \n", ++(*p));
    printf("저장된 값: %d \n", *p);

    printf("\n 증가는 +1이 아님\n");

    int arr[3] = {10, 20, 30};
    int *r = arr;

    pritnf("arr[3] = { 10, 20, 30 }");

    printf("%d\n", *r++);
    printf("%d", *r);

}