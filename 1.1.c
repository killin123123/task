#include <stdio.h>
#include <math.h>
 
// double позволяет хранить дробные числа 
// const константа переменной
double A(const double x, const double y, const double z);

double B(const double x, const double y, const double z);

int main()
{
    //константы
    const double x = 0.5;
    const double y = 0.05;
    const double z = 0.7;

    //результаты вычислений
    printf("a = %lf\n", A(x,y,z));
    printf("b = %lf\n", B(x,y,z));

    // завершаем программу
    return 0;
}

double A(const double x, const double y, const double z)
{
    //пример который нужно решить
    return (pow(x, 2) * (x+1)) / (y - pow(sin(x+z), 2));
}

double B(const double x, const double y, const double z)
{
    //пример который нужно решить
    return sqrt((x*y)/z) + pow(cos(x+y),2);
}