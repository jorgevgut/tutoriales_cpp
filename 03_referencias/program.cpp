#include <iostream>

using namespace std;

int main(){
  
  /* int , char , bool, double, float */
  
  int x  = 10;
  const int & y = x; //cuando utilizamos const no podemos alterar Y

  /*
    prueba cambiar el valor de x y veras como cambia y, y viceversa
    solo recuerda que no puedes alterar y si tiene "const" pues
    es inmutable(permisos de solo lectura)
   */
  
  cout << "Variable X: " << x << endl; 
  cout << "Variable Y: " << y << endl; 
}
