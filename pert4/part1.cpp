#include <iostream>
using namespace std;

int main()
{
    int bulan;

    cout<<"========================="<<endl;
    cout<<"Pilih Bulan Pada Kalender"<<endl;
    cout<<"========================="<<endl;

    cout<<"Masukkan Bulan yang akan dipilih dalam angka (1 - 12) : ";
    cin>>bulan;

    cout<<endl;
    cout<<"-> ";

    if (bulan==1)
    {
        cout<<"Januari"<<endl;
    }
    else if (bulan==2)
    {
        cout<<"Februari"<<endl;
    }
    else if (bulan==3)
    {
        cout<<"Maret"<<endl;
    }
    else if (bulan==4)
    {
        cout<<"April"<<endl;
    }
    else if (bulan==5)
    {
        cout<<"Mei"<<endl;
    }
    else if (bulan==6)
    {
        cout<<"Juni"<<endl;
    }
    else if (bulan==7)
    {
        cout<<"Juli"<<endl;
    }
    else if (bulan==8)
    {
        cout<<"Agustus"<<endl;
    }
    else if (bulan==9)
    {
        cout<<"September"<<endl;
    }
    else if (bulan==10)
    {
        cout<<"Oktober"<<endl;
    }
    else if (bulan==11)
    {
        cout<<"November"<<endl;
    }
    else if (bulan==12)
    {
        cout<<"Desember"<<endl;
    }
    else
    {
        cout<<"Kode Bulan yang anda tidak sesuai"<<endl;
    }
    
    return 0;
}