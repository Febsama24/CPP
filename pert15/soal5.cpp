#include <iostream>
using namespace std;

int main()
{
    int angkaPertama = 10;
    int angkaKedua = 2;
    float hasil;

    cout<<"Masukkan Angka Pertama : "<<angkaPertama<<endl;
    cout<<"Masukkan Angka Kedua : "<<angkaKedua<<endl;

    hasil = angkaPertama + angkaKedua;
    cout<<"Penjumlahan : "<<hasil<<endl;

    hasil = angkaPertama - angkaKedua;
    cout<<"Pengurangan : "<<hasil<<endl;

    hasil = angkaPertama * angkaKedua;
    cout<<"Perkalian : "<<hasil<<endl;

    hasil = angkaPertama / angkaKedua;
    cout<<"Pembagian : "<<hasil<<endl;

    return 0;
    
}