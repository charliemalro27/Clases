#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

//Clases

class Flor{

  private:

    int petalos;
    double talloLongitud;
    bool confirmacion;

  public:

//Constructor

    Flor(int petalos=10,double talloLongitud=10.0,bool confirmacion=false){
      this->petalos=petalos;
      this->talloLongitud=talloLongitud;
      this->confirmacion=confirmacion;
    }

//Metodos

    int getpetalos(){
      return this->petalos;
    }

    void restarpetalos(int cantidad){
      this->petalos=petalos-cantidad;
    }

    void restarpetalos1en1(){
      string respuesta;
      do{
      cout<<endl;
      cout<<"Arranca un petalo SI/NO "<<" "<<endl;
      cin>>respuesta;
      if(respuesta=="SI")
      {

      this->petalos=petalos-1;
      cout<<endl<<this->petalos;
      }
      }while(respuesta!="NO");
      }


    bool confirmacionamor(int numeropetalos){
      if(this->petalos%2==0){
        this->confirmacion=true;
      }else{
        this->confirmacion=false;
      }
      return this->confirmacion;

    }

    void confirmacionmequierenomequiere(bool confirmacion){
      if(confirmacion==true){
        cout<<"ME QUIEREEEEEEEE"<<endl;
      }if(confirmacion==false){
        cout<<"NO ME QUIERE :((("<<endl;
      }
      }



    void setpetalos(int petalos){
      this->petalos=petalos;
    }

    void settallo(double talloLongitud){
      this->talloLongitud=talloLongitud;
    }

    void imprimir(){
      cout<<this->petalos;
    }

};

int main(){

  Flor Florecilla;

  Florecilla.setpetalos(45);
  Florecilla.settallo(13.00);

  cout<<"Estos son los petalos sin restar: ";
  Florecilla.imprimir();
  cout<<endl;

  cout<<"Estos son los petalos restando: ";
  Florecilla.restarpetalos(30);
  Florecilla.imprimir();
  cout<<endl;

  Florecilla.restarpetalos1en1();
  cout<<"Estos son los petalos despues de arrancarlos 1 en 1: ";
  Florecilla.imprimir();
  cout<<endl;

  int petalos;
  petalos=Florecilla.getpetalos();
  bool confirmacion;
  confirmacion=Florecilla.confirmacionamor(petalos);
  Florecilla.confirmacionmequierenomequiere(confirmacion);






  return 0;
}
