#include <stdio.h>

/**
 * @brief Считывает число типа double
 * @return Введенное пользователем число
 */
double getDouble(void);

/**
 * @brief Вычисляет пройденный путь
 * @param A Работа в килоджоулях
 * @param F Сила тяги в ньютонах
 * @return Пройденный путь в метрах
 */
double Distance(const double A, const double F);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main(void)
{
    double F = 0.0;
    double A = 0.0;
    double s = 0.0;

    printf("Введите силу тяги F: ");
    F = getDouble();

    printf("Введите работу A: ");
    A = getDouble();

    s = Distance(A, F);

    printf("Пройденный путь: %.2f\n", s);

    return 0;
}

double getDouble(void)
{
    double value = 0.0;
    scanf("%lf", &value);
    return value;
}

double Distance(const double A, const double F)
{
    return (A * 1000.0) / F;
}
