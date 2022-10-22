//https://www.acwing.com/problem/content/submission/code_detail/18285830/
#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, R1, R2, m;
    scanf_s("%lf %lf %lf", &a, &b, &c);
    m = b * b - 4 * a * c;
    if (m > 0 && a != 0)
    {
        R1 = (-b + sqrt(m)) / (2 * a);
        R2 = (-b - sqrt(m)) / (2 * a);
        printf("R1=%.5lf\nR2=%.5lf", R1, R2);
    }
    else
        printf("Impossivel calcular");
    return 0;
}