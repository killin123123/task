#include <stdio.h>
#include <math.h>

/**
 * @brief вычисляет значение функции по заданной формуле
 * @param x - значение переменной х
 * @param y - значение переменной y
 * @return рассчитанное значение
 */
double R, a;
double r,h,l;
double V,S;

int main()
{
    printf("Введите радиус шара: ");
    scanf("%lf", &R);
    
    printf("Введите угол а при вершине в осевом сечении конуса: ");
    scanf("%lf", &a);

    r = R*sin(a * 3.14/180);

    h = R*(1+cos(a * 3.14/360));

    l = 2*R*cos(a*3.14/360);

    V = 3.14*r*r*h/3;

    S = 3.14*r*(r+l);

    printf("\nРезультаты:\n");
    printf("Радиус основания r = %.2f\n", r);
    printf("Высота конуса h = %.2f\n", h);
    printf("Образующая l = %.2f\n", l);
    printf("Объем конуса V = %.2f\n", V);
    printf("Полная поверхность S = %.2f\n", S);

    return 0;

}
