#include <iostream>

/* Pedir un n�mero entero, pero solo se aceptan numero no pares, una ves que se ha capturado el n�mero se tendr� 
que mostrar un mensaje donde se indique  si es positivo o negativo. */
 using namespace std;
int main(int argc, char** argv)
 {

 int numero ;  
   cout << "ingrese el valor: "; 
      cin>>numero ; 
 
 if( numero < 0 )
     
     {
   cout<<"el numero ingresado es negativo";
                 
      }
 else
  if( numero > 0)
                  
        {
   cout<<"el numero ingresado es positivo";

   }
 	return 0;
}




 
 
                  
                  

