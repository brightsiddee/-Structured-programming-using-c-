// @Autor: Luis Erick Melchor
// @Brightsiddee
//Ejercicio de uso de if simples en C++

#include <iostream>
#include <conio.h>

using namespace std;
main(){
 int SalM,Ant,Util;
 cout<<"Salario Mensual:"<<endl;
    cin>> SalM;
 cout<<"Antiguedad en anios:"<<endl;
    cin>> Ant;
if (Ant>=1){
        Util=SalM*.5;
    }
if (Ant>=1 && Ant<2){
        Util=SalM*.7;
    }
if (Ant>=2 && Ant<5){
        Util=SalM*.10;
    }
if (Ant>=5 && Ant<10){
        Util=SalM*.15;
    }
if (Ant>=10){
        Util=SalM*.20;
    }
cout<<"Utilidad Anual es:"<<Util<<endl;
       getch();
      }


