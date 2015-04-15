#include <iostream>

using namespace std;

int main(){
  
  /* int , char , bool, double, float */

  int * x; //32 bits - integer 4

  *x = 5;
  
  cout << "Valor :" << x << " - dentro: "<< *x << endl;
  
  return 0;
}
