#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

//Clases

class Tablero{

  private:

    string figura;
    int numero;
    int filas;
    int columnas;

  public:

    //CONSTRUCTOR

    Tablero(string figura="|",int numero=5,int columnas=10,int filas=10){
      this->figura=figura;
      this->numero=numero;
      this->columnas=columnas;
      this->filas=filas;
    }

    //DESTRUCTOR

    ~Tablero(){
      cout<<"Pasa por el destructor Tablero"<<endl;
    }

    //SETS

    void setfigura(){
      string figura;
      cout<<"Con que figura quieres separarlo"<<endl;
      this->figura=figura;
    }

    void setnumero(){
      int numero;
      cout<<"Con que numero quieres rellenar"<<endl;
      this->numero=numero;
    }

    void setfilas(){
      int filas;
      cout<<"Cuantas filas quieres "<<endl;
      cin>>filas;
      this->filas=filas;
    }

    void setcolumnas(){
      int columnas;
      cout<<"Cuantas columnas quieres"<<endl;
      cin>>columnas;
      this->columnas=columnas;
    }

    //GETS

    string getfigura(){
      return this->figura;
    }

    int getnumero(){
      return this->numero;
    }

    //METODOS

      void rellenarMatriz(){
        int tama=this->filas;
        int tama2=this->columnas;
        int matriz[tama][tama2];
      for (int i = 0 ; i < tama ; i++){
        for (int j = 0 ; j < tama2 ; j++){
          matriz[i][j]=this->numero;
      }
      }
      }

    void dibujarTablero(){
      setfigura();
      setnumero();
      setcolumnas();
      setfilas();
    }

    void imprimirMatriz(){
      int tama=this->filas;
      int tama2=this->columnas;
      int matriz[tama][tama2];
      rellenarMatriz();
      for (int i=0;i<this->filas;i++){
		      for (int j=0;j<this->columnas;j++){
			         cout<<this->figura<<matriz[i][j];
		}
    }
    }


};

int main(){

  Tablero tablita;
  tablita.imprimirMatriz();
  cout<<endl;




  return 0;
}
