#include <stdio.h>
#include <string.h>

void baca(const char *label, char *buf, int size) {
    printf("%-21s : ", label);
    fgets(buf, size, stdin);
    buf[strcspn(buf, "\n")] = '\0';   /* remove trailing newline */
}

int main(void) {
    char nama[100], nim[30], kelas[30], ttl[100];
    char alamat[200], hobby[100], no_hp[30];

    printf("=== INPUT ===\n");
    baca("Nama", nama, sizeof nama);
    baca("NIM", nim, sizeof nim);
    baca("Kelas Paralel", kelas, sizeof kelas);
    baca("Tempat/Tanggal Lahir", ttl, sizeof ttl);  /* e.g. Banjarmasin/01-01-2005 */
    baca("Alamat", alamat, sizeof alamat);
    baca("Hobby", hobby, sizeof hobby);
    baca("No. HP", no_hp, sizeof no_hp);

    printf("\n=== OUTPUT ===\n");
    printf("%-21s : %s\n", "Nama", nama);
    printf("%-21s : %s\n", "NIM", nim);
    printf("%-21s : %s\n", "Kelas Paralel", kelas);
    printf("%-21s : %s\n", "Tempat/Tanggal Lahir", ttl);
    printf("%-21s : %s\n", "Alamat", alamat);
    printf("%-21s : %s\n", "Hobby", hobby);
    printf("%-21s : %s\n", "No. HP", no_hp);

    return 0;
}