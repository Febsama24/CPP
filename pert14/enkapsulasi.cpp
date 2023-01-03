#include <iostream>
using namespace std;
 
class remoteTV{
private:
    string tombolNo[10];
public:
    void setTombolNo(int i, string value){
        tombolNo[i] = value;
    }
    string getTombolNo(int i){
        return tombolNo[i];
    }
};
 
int main(){
    remoteTV ruangTamu;
 
    ruangTamu.setTombolNo(0, "Channel RCTI");
    ruangTamu.setTombolNo(1, "Channel SCTV");
    ruangTamu.setTombolNo(2, "Channel INDOSIAR");
    ruangTamu.setTombolNo(3, "Channel MNCTV");
 
    cout<<ruangTamu.getTombolNo(0)<<endl;
    cout<<ruangTamu.getTombolNo(1)<<endl;
    cout<<ruangTamu.getTombolNo(2)<<endl;
    cout<<ruangTamu.getTombolNo(3)<<endl;
 
   return 0;
}