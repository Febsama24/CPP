#include <iostream>
using namespace std;

int main()
{
    int barang;

    cout<<"==========="<<endl;
    cout<<"Supermarket"<<endl;
    cout<<"==========="<<endl;

    cout<<"Barang apa yang akan di beli oleh si pembeli : ";
    cin>>barang;

    cout<<endl;
    cout<<"-> ";

    switch (barang)
    {
    case 1:
        cout<<"Gula"<<endl;
        break;
    case 2:
        cout<<"Beras"<<endl;
        break;
    case 3:
        cout<<"Minyak"<<endl;
        break;
    case 4:
        cout<<"Kopi"<<endl;
        break;
    case 5:
        cout<<"Teh"<<endl;
        break;
    
    default:
        cout<<"Kode Barang tidak ditemukan"<<endl;
        break;
    }

    return 0;
}