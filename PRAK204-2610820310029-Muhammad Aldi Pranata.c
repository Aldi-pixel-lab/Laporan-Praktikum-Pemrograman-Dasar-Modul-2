#include <stdio.h>

int main(void) {
    double r, t;
    double pi = 3.142857;

    scanf("%lf %lf", &r, &t);

    double volume = pi * r * r * t;
    double luas = 2 * pi * r * (r + t);
    double keliling = 2 * pi * r;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}