#include <iostream>

/*Pedir un n�mero y mostrar su cuadrado, repetir el proceso hasta que se introduzca un n�mero
negativo*/
using namespace std;
int main(int argc, char** argv) 
{
  int num,cuadrado;  

     cout<< "Ingrese un numero" ;
      cin>>num;  
	   
  while(num >=0) {
       cuadrado=num*num;
       cout<<"El cuadrado del numero ingresado es:"<<cuadrado<<endl;
       cout<< "Ingrese otro numero:" ; 	
	   cin>>num;
	 
}

 






	return 0;
}
