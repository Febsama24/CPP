#include <stdio.h>

int main()
{
    int index,nilai[10];
    int jumlah=0;
    float rata;
    printf("Input Nilai 10 Mahasiswa\n");
    for(index=0;index<10;index++)
    {
        printf("Mahasiswa %i :",index+1);
        scanf("%i",&nilai[index]);
    }
    printf("Nilai Mahasiswa Yang Telah Diinput");
    for(index=0;index<10;index++)
    {
    printf("%5.0i",nilai[index]);
    jumlah=jumlah+nilai[index];
    }
    rata=jumlah/10;
    printf("\nJumlah Kesepuluh Nilai : %d",jumlah);
    printf("\nRata Rata = %4.2f ",rata);
    
    return 0;
}