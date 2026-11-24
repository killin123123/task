
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * @brief Рассчитывает значение функции
 * @param x введенное значение
 * @param a константа
 * @return результат вычисления функции
 */
double getFunction(const double x, const double a);

/**
 * @brief Считывает значение с клавиатуры с проверкой ввода
 * @return считанное значение
 */
double getValue();

/**
 * @brief Проверяет, что значение положительное
 * @param value значение проверяемой переменной
 */
void checkValue(const double value);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main(void)
{
    const double a = 1.5;

    printf("Введите значение x: ");

    double x = getValue();
    checkValue(x);

    printf("Значение функции y = %.4lf\n",
           getFunction(x, a));

    return 0;
}

double getFunction(const double x, const double a)
{
    if (a * x < 1)
    {
        return a * x - log10(a * x);
    }
    else
    {
        return a * x + log10(a * x);
    }
}

double getValue()
{
    double value = 0;

    if (scanf("%lf", &value) != 1)
    {
        printf("Error\n");
        abort();
    }

    return value;
}

void checkValue(const double value)
{
    if (value <= 0)
    {
        printf("Value have to be positive\n");
        abort();
    }
}
