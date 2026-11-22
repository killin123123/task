#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Считывает значение с клавиатуры с проверкой ввода
 * @return введенное значение
 */
int getValue();

/**
 * @brief Проверяет правильность введенного значения
 * @param value введенное значение
 * @param max максимальное допустимое значение
 */
void checkValue(const int value, const int max);

/**
 * @brief Выводит название дня недели
 * @param day номер дня недели
 */
void printDay(const int day);

/**
 * @brief Выводит название месяца
 * @param month номер месяца
 */
void printMonth(const int month);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main(void)
{
    printf("Выберите, что вывести:\n");
    printf("1 - День недели\n");
    printf("2 - Месяц\n");
    printf("Ваш выбор: ");

    int choice = getValue();
    checkValue(choice, 2);

    if (choice == 1)
    {
        printf("Введите номер дня недели (1-7): ");
        int day = getValue();
        checkValue(day, 7);
        printDay(day);
    }
    else if (choice == 2)
    {
        printf("Введите номер месяца (1-12): ");
        int month = getValue();
        checkValue(month, 12);
        printMonth(month);
    }

    return 0;
}

int getValue()
{
    int value = 0;

    if (scanf("%d", &value) != 1)
    {
        printf("Error\n");
        abort();
    }

    return value;
}

void checkValue(const int value, const int max)
{
    if (value < 1 || value > max)
    {
        printf("Error: неправильное значение\n");
        abort();
    }
}

void printDay(const int day)
{
    if (day == 1)
    {
        printf("Понедельник\n");
    }
    else if (day == 2)
    {
        printf("Вторник\n");
    }
    else if (day == 3)
    {
        printf("Среда\n");
    }
    else if (day == 4)
    {
        printf("Четверг\n");
    }
    else if (day == 5)
    {
        printf("Пятница\n");
    }
    else if (day == 6)
    {
        printf("Суббота\n");
    }
    else if (day == 7)
    {
        printf("Воскресенье\n");
    }
}

void printMonth(const int month)
{
    if (month == 1)
    {
        printf("Январь\n");
    }
    else if (month == 2)
    {
        printf("Февраль\n");
    }
    else if (month == 3)
    {
        printf("Март\n");
    }
    else if (month == 4)
    {
        printf("Апрель\n");
    }
    else if (month == 5)
    {
        printf("Май\n");
    }
    else if (month == 6)
    {
        printf("Июнь\n");
    }
    else if (month == 7)
    {
        printf("Июль\n");
    }
    else if (month == 8)
    {
        printf("Август\n");
    }
    else if (month == 9)
    {
        printf("Сентябрь\n");
    }
    else if (month == 10)
    {
        printf("Октябрь\n");
    }
    else if (month == 11)
    {
        printf("Ноябрь\n");
    }
    else if (month == 12)
    {
        printf("Декабрь\n");
    }
}