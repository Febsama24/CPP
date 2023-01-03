#include <iostream> 
using namespace std;
 
class Komputer
{
    protected:
    string processor;
    string merk;
    string memory;
};
 
class Laptop: public Komputer {
  public:
 
    Laptop(string paramProcessor, string paramMerk, string paramMemory) {
      processor = paramProcessor;
      merk = paramMerk;
      memory = paramMemory;
    }
 
    string lihatSpec() {
      return "Merk: " + merk + ", processor: "+ processor +
             ", jumlah memory: " + memory;
    }
};
 
int main()
{
  Laptop laptopFebsa("Intel Core i3","ASUS X441U","4 GB");
  Laptop laptopRudi("Intel Core i7","HP","16 GB");
 
  cout << laptopFebsa.lihatSpec() << endl;
  cout << laptopRudi.lihatSpec() << endl;
  return 0;
}