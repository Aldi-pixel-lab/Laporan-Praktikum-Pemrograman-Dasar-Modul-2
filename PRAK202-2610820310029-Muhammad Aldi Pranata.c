#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char a[50], b[50];

    printf("Masukkan Nilai Pertama : ");
    scanf("%49s", a);
    printf("Masukkan Nilai Kedua : ");
    scanf("%49s", b);

    double hasil = atof(a) + atof(b);

    printf("Hasil dari penjumlahan nilai pertama \"%s\" dan nilai kedua \"%s\" adalah \"%.2f\"\n", a, b, hasil);

    return 0;
}