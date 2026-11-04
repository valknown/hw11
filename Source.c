#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define N_MAX 100

int main(void) {
    int n;
    int check = 0, sum = 0, count = 0;
    setlocale(LC_CTYPE, "RUS");
    printf("Введите n: ");
    scanf("%d", &n);
    int A[N_MAX];
    for (int i = 0; i < n; i++) {
        printf("Введите элемент A[%d]: ", i);
        scanf("%d", &A[i]);
        if (A[i] < 0 && check != 1) {
            check = 1;
            count = i;
        }
        if (check == 1 && count < i) {
            sum += abs(A[i]);
        }
    }
    printf("Сумма модулей после 1-го отрицательного элемента: %d\n", sum);
    return 0;
}