#include <iostream>
using namespace std;

//funcion que sume dos valores
int suma (int num1,int num2){
    int resultado = 0;
    resultado = num1+num2;
     return resultado;
}
//Metodo y envio de parametros por referencia (uso de "&")

void suma2 (int &num1,int &num2){
    int resultado = 0;
    num1+=1;//11
    num2+=1;//21
    resultado = num1+num2; //32
    cout<<resultado<<endl;
    }

main (){

    int a= 10,b = 20;

    suma(a,b);
   cout<<"a:"<<a<<endl;
   cout<<"b:"<<b<<endl;
   
    system ("Pause");
}