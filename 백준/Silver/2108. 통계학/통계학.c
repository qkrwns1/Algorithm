#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>


int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int main() {
    int N;
    double sum = 0;
    scanf("%d", &N);
    int* arr = (int*)malloc(N * sizeof(int));
    if (arr == NULL) return 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    sum = sum / N;
    if (sum > -0.5 && sum < 0) {
        sum = 0.01;
    }
    sum = round(sum);
    printf("%d\n", (int)sum);
    qsort(arr, N, sizeof(int), compare);
    printf("%d\n", arr[N / 2]);
    int val = arr[0], cnt = 0;
    int save[3] = { 0 };      //값, cnt, second
    for (int i = 0; i < N; i++) {
        if (val == arr[i]) {
            cnt++;
        }
        if (val != arr[i] || i == N - 1) {
            if (save[1] < cnt) {
                save[0] = val;
                save[1] = cnt;
                save[2] = 0;
            }
            else if (save[1] == cnt && save[2] == 0) {
                save[2] = 1;
                save[0] = val;
                save[1] = cnt;
            }
            val = arr[i];
            cnt = 1;
        }
    }
    printf("%d\n%d", save[0], arr[N - 1] - arr[0]);
    free(arr);
}