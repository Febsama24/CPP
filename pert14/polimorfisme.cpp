#include <iostream>
using namespace std;
 
class seseorang{
    public:
    void pesan(){
        cout<<"Pesan dari Ibu"<<endl;
    }
};
 
class budi:public seseorang{
    public:
    void pesan(){
        cout<<"Pesan dari budi"<<endl;
    }
};
 
class andi:public seseorang{
    public:
    void pesan(){
        cout<<"Pesan dari andi"<<endl;
    }
 
};
 
int main(){
    seseorang *obyek;
    budi a;
    andi b;
 
    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();
 
    return 0;
}