#include <stdio.h>
using namespace std;

void cetakUmur (int*umur){
    printf("Halo, Umur kamu adalah %d tahun", *umur);
}

int main()
{
    int angka = 20;
    cetakUmur(&angka);

    getchar();

    return 0;
}