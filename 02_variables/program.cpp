#include <iostream>

using namespace std;

int main(){
  
  /* int , char , bool, double, float */
  
  long long int x;
  x = 8446744073709551615;

  cout << "Variable entera: " << x << endl; 
  cout << "Size(x)" << sizeof(long long int) << endl;
  
  /*
    sizeof() permite determinar el tamaño en bytes de
    lo que pasemos como parametro, por lo que si usamos
    sizeof(int) obtendremos 4 bytes, lo que en bits es 4*8 = 32
    por lo que el rango de enteros que se puede guardar seria de
    2 a la potencia de 32.
   */
  
}
