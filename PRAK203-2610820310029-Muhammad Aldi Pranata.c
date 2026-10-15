#include <stdio.h>

int main(void) {
    double a, b, i, j, x, y;

    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &i, &j, &x, &y);

    double hasil = (a - b) * i / j - (x + y);

    printf("%.3f\n", hasil);

    return 0;
}