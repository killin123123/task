
#include <stdio.h>
#include <math.h>

/**
 * @brief Считывает число типа double
 * @return Введенное пользователем число
 */
double getDouble(void);

/**
 * @brief Вычисляет радиус основания конуса
 * @param R Радиус шара
 * @param a Угол при вершине конуса в градусах
 * @return Радиус основания конуса
 */
double Radius(double R, double a);

/**
 * @brief Вычисляет высоту конуса
 * @param R Радиус шара
 * @param a Угол при вершине конуса в градусах
 * @return Высота конуса
 */
double Height(double R, double a);

/**
 * @brief Вычисляет образующую конуса
 * @param R Радиус шара
 * @param a Угол при вершине конуса в градусах
 * @return Образующая конуса
 */
double SHeight(double R, double a);

/**
 * @brief Вычисляет объем конуса
 * @param r Радиус основания конуса
 * @param h Высота конуса
 * @return Объем конуса
 */
double Volume(double r, double h);

/**
 * @brief Вычисляет полную поверхность конуса
 * @param r Радиус основания конуса
 * @param l Образующая конуса
 * @return Полная поверхность конуса
 */
double SurfaceArea(double r, double l);

/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main(void)
{
    double R = 0.0, a = 0.0;
    double r = 0.0, h = 0.0, l = 0.0;
    double V = 0.0, S = 0.0;

    printf("Введите радиус шара: ");
    R = getDouble();

    printf("Введите угол a при вершине конуса: ");
    a = getDouble();

    r = Radius(R, a);
    h = Height(R, a);
    l = SHeight(R, a);
    V = Volume(r, h);
    S = SurfaceArea(r, l);

    printf("\nРезультаты:\n");
    printf("Радиус основания r = %.2f\n", r);
    printf("Высота конуса h = %.2f\n", h);
    printf("Образующая l = %.2f\n", l);
    printf("Объем конуса V = %.2f\n", V);
    printf("Полная поверхность S = %.2f\n", S);

    return 0;
}

double getDouble(void)
{
    double value = 0.0;
    scanf("%lf", &value);
    return value;
}

double Radius(double R, double a)
{
    return R * sin(a * 3.14 / 180.0);
}

double Height(double R, double a)
{
    return R * (1 + cos(a * 3.14 / 360.0));
}

double SHeight(double R, double a)
{
    return 2 * R * cos(a * 3.14 / 360.0);
}

double Volume(double r, double h)
{
    return 3.14 * r * r * h / 3.0;
}

double SurfaceArea(double r, double l)
{
    return 3.14 * r * (r + l);
}
