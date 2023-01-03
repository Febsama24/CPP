#include <iostream>
using namespace std;

//Ini adalah function
int jumlah (int x, int y){
    int hasil = x+y;
    return hasil;
}

//Ini adalah void
void jumlah1 (int x, int y){
    int hasil = x+y;
    cout<<"\n Ini Menggunakan Prosedur, Jumlahnya adalah\t: "<<hasil;
}

//Ini function
int main(){
    int a, b;
    cout<<"Masukkan Nilai Pertama\t: ";
    cin>>a;
 
    cout<<"Masukkan Nilai Kedua\t: ";
    cin>>b;
 
    cout<<"\nIni menggunakan Fungsi, Hasil Penjumlahan nya adalah\t: "<<jumlah(a,b);
    jumlah1(a,b);
    return 0;
}

/*
Penjelasan pada program diatas adalah pada program diatas disini memiliki dua function dan satu void,
yang dimana function tersebut memiliki nilai, pada function pertama mempunyai [int jumlah (int x, int y)
{ int hasil = x + y; return hasil; } ] dan pada function yang kedua mempunyai [ int main()
{
    int a, b;
    cout<<"Masukkan Nilai Pertama\t: ";
    cin>>a;
 
    cout<<"Masukkan Nilai Kedua\t: ";
    cin>>b;
 
    cout<<"\nIni menggunakan Fungsi, Hasil Penjumlahan nya adalah\t: "<<jumlah(a,b);
    jumlah1(a,b);
    return 0;
}]. Selanjutnya pada program diatas memliki void, yang dimana void tersebut memiliki nilai, pada void mempunyai [
    void jumlah1 (int x, int y){
    int hasil = x+y;
    cout<<"\n Ini Menggunakan Prosedur, Jumlahnya adalah\t: "<<hasil;
]. Jadi Kesimpulannya program tersebut menampilkan hasil perjumlahan dengan nilai yang kita isi secara manual
di terminal output untuk menginginkan berapa nilai yang kita inginkan.
*/