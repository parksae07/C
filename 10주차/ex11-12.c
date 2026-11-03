#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Back";
    char str2[20] = "Space";
    char str3[20];

    char ch = 'p';
    int n = 3;

    // strlen : 길이 계산 (str1)
    int len = strlen(str1);
    printf("str1의 길이: %d\n", len);

    // strcpy : 복사 (str1의 내용 > str3)
    strcpy(str3, str1);
    printf("str1을 str3에 복사: %s\n", str3);

    // strncpy : n개 문자 복사 (str2의 첫 3개 문자 > str3)
    strncpy(str3, str2, n);
    str3[n]='\0'; // 널 문자 추가
    printf("str2의 첫 %d 문자를 str3에 복사 : %s\n", n, str3);

    // strcmp : 비교 (str1, str2)
    printf("str1과 str2 비교 : %d\n", strcmp(str1, str2));

    // strncmp : n개 비교 (str1, str2의 첫 3문자)
    printf("str1과 str2의 첫 %d 문자 비교 : %d\n", n, strncmp(str1, str2, n));

    // strcat : 끝에 연결 (str2를 str1의 끝에)
    strcat(str1, str2);
    printf("str2를 str1에 연결 : %s\n", str1);

    // strncat : 첫 n개 문자를 연결 (str1의 첫 3개 문자를 str3에)
    strncat(str3, str1, n);
    printf("str1의 첫 %d 문자를 str3에 연결 %s\n", n, str3);

    // strchr : 특정 문자의 첫번째 출현 찾기 (str1에서 'p'라는 문자)
    char*ptr_ch = strchr(str1, ch);
    printf("str1에서 '%c'의 첫번째 출현 : %s\n", ch, ptr_ch);

    // strstr : a에서 b의 첫번째 출현 찾기 (str1에서 str2)
    char*ptr_str = strstr(str1, str2);
    printf("str1에서 str2의 첫 번째 출현 : %s\n", ptr_str ? ptr_str : "찾을 수 없음");
    
    return 0;
}