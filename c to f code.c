#include <stdio.h>

int main(void) {
    float celsius, fahrenheit;

    printf("Introduceti temperatura (C): ");
    if (scanf("%f", &celsius) != 1) {
        printf("Eroare la citire!\n");
        return 1;
    }

    // ВАЖНО: пишем 9.0 / 5.0, чтобы избежать целочисленного деления (9/5 дало бы 1)
    fahrenheit = celsius * (9.0f / 5.0f) + 32.0f;

    printf("%.2f C = %.2f F\n\n", celsius, fahrenheit);

    // Вывод размеров типов данных
    printf("int    = %zu octeti\n", sizeof(int));
    printf("float  = %zu octeti\n", sizeof(float));
    printf("double = %zu octeti\n", sizeof(double));

    return 0;
}