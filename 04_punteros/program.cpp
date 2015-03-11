#include <iostream>

using namespace std;

int main(){
  
  /* int , char , bool, double, float */
  
  int x = 10;
  int * apuntador = &x; 

  cout << "Variable X: " << x << endl; 
  cout << "Direccion de  X: " << apuntador << endl; 
  apuntador = apuntador+1;
  cout << "Direccion de  X: " << apuntador << endl;
  char * palabra = "hola";
  
  
  return 0;
}
