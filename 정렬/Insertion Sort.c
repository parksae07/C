#include <stdio.h>

int main(void)
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        // key보다 큰 값을 오른쪽으로 이동
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // key를 알맞은 위치에 삽입
        arr[j + 1] = key;
    }

    printf("정렬 결과: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
