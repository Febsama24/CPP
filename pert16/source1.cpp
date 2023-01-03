#include <iostream>
using namespace std;

int main()
{
    string kd_matkul;
    string nama_matkul;
    
    cout << "Masukan Kd_Matkul : ";
    getline(cin, kd_matkul);
    cout << "Masukan Nama_Matkul : ";
    getline(cin, nama_matkul);
    
    cout << "Nama : " << nama << endl;
    cout << "Alamat Nama : " << &kd_matkul << endl;
    cout << "NIm : " << nim << endl;
    cout << "Alamat Nim : " << &nama_matkul << endl;
    
    return 0;
}