#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    float a,b,c,d,e,f,x,y;
    
    cout<<"masukkan nilai X = ";
    cin>>x;
    cout<<"masukkan nilai Y = ";
    cin>>y;

    
    cout<<"Hasil dari "<<x<<" == "<<y<<" = "<<a<<endl;
    cout<<"Hasil dari "<<x<<" != "<< y <<" = "<< b <<endl;
    cout<<"Hasil dari "<< x <<" > "<< y <<" = "<< c <<endl;
    cout<<"Hasil dari "<< x <<" < "<< y <<" = "<< d <<endl;
    cout<<"Hasil dari "<< x <<" >= "<< y <<" = "<< e <<endl;
    cout<<"Hasil dari "<< x <<" <= "<< y <<" = "<< f <<endl;

    return 0;
}