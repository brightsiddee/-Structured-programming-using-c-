// @Autor: Luis Erick Melchor
// @Brightsiddee
//Ejercicio de uso de if simples en C++


#include <iostream>
#include <conio.h>

using namespace std;
main(){
 int Hrst,HrsE,Hora,Extra,Salario;
  cout<<"Horas Trabajadas:"<<endl;
    cin>> Hrst;
    if (Hrst<=40){
        Salario=Hrst*16;
    }
      if (Hrst>=41 && Hrst<50){
        HrsE=Hrst-40;
        Hora=(Hrst-HrsE)*17;
        Extra=HrsE*15;
        Salario=Hora+Extra;
    }
    if (Hrst>=50){
        HrsE=Hrst-50;
        Hora=(Hrst-HrsE)*18;
        Extra=HrsE*16;
        Salario=Hora+Extra;
    }
      cout<<"Tu salario es:"<<Salario<<endl;
       getch();
      }


