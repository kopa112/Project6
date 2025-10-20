#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int N;

    printf("Введите число N (N < 1000): ");
    scanf("%d", &N);

    if (N < 1000) {

        if (N == 5 || N % 10 == 5 || (N / 10) % 10 == 5 || (N / 100) % 10 == 5) {
            printf("ДА, число %d содержит цифру 5\n", N);
        }
        else {
            printf("НЕТ, число %d не содержит цифру 5\n", N);
        }
    }
    else {
        printf("Ошибка! Число должно быть меньше 1000\n");
    }

    return 0;
}