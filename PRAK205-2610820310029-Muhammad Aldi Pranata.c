#include <stdio.h>
#include <math.h>

int main(void) {
    double A, B;

    scanf("%lf %lf", &A, &B);

    double alas = sqrt(B * B - A * A);
    double tinggi = A;
    double keliling = alas + tinggi + B;
    double luas = 0.5 * alas * tinggi;

    printf("Alas = %g cm\n", alas);
    printf("Tinggi = %g cm\n", tinggi);
    printf("Keliling = %g cm\n", keliling);
    printf("Luas = %g cm^2\n", luas);

    return 0;
}