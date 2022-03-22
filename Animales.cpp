#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

class Animales{

  private:

    vector <string> especies;

  public:
  //Constructor

  Animales(vector <string> especies={"Mamiferos","Peces","Reptiles"}){
    setEspecie(especies);
  }

  void setEspecie(vector <string> especies){
    this->especies=especies;
  }

  vector <string> getEspecies(){
      return this->especies;
    }

  void imprimir(){
    for(string elemento : this->especies){
      cout<<elemento<<endl;
    }
  }




};



int main(){

vector <string> animales={"Extraterrestres","Godzillas","Mofetas"};

Animales animalillos;
animalillos.setEspecie(animales);
animalillos.imprimir();



  return 0;
}
