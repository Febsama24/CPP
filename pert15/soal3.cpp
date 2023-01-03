//Jawaban no 3
#include <iostream>
using namespace std;

int main()
{
    int n,s,i,j;
    cout << "Masukkan Jumlah Baris :";
    cin>> n;

    for (i=1; i<=n; i++)
    {
        for (s = i; s < n; s++)
        {
            cout<<" ";
        }
        for ( j = 1; j < i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
/* Konsep no 3 adalah pada step pertama kita memiliki interger yang berisikan n, s, i, dan j.
Pada step kedua kita memiliki cout dan cin,yang berisikan coutnya = Masukkan Jumlah Baris dan cinnya = n.
Pada step ketiga kita memiliki 3 for dan cout, yang berisikan pada for yang pertama digunakan untuk menampung nilai
pada awalan untuk pembuka pada bagian for selanjutnya, for yang kedua digunakan untuk menampung nilai setelah 
for pertama dengan penamabahan cout yang berisikan (" ") spasi untuk antar jarak nilai, for yang terakhir digunakan
untuk mengisi nilai pada for pertama dan for kedua agar terbentuk pola yang berulangan dengan coutnya berisikan
nilai ("*") untuk membuat pola yang akan terbentuk dengan memeasukkan berapakah jumlah barisnya, misalkan jumlah
barisnya 10, maka yang terbentuk polanya adalah segitiga siku-siku menghadap kiri.*/