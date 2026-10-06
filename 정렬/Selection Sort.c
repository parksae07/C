#include <stdio.h>

int main(void)
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        // 가장 작은 값의 위치 찾기
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        // 현재 위치와 최솟값 위치 교환
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    // 정렬 결과 출력
    printf("정렬 결과: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
