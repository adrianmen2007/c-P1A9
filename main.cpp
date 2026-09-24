
// P1A9
#include <iostream>
using namespace std;

int main()
{
    float val1,val2,res;
   
   //datos de entraba 
   
    cout << "valor no. 1: ";
    cin >> val1;
    cout << "valor no. 2: ";
    cin  >> val2;
  
  //procesos parciales
    if (val1 < val2) {  //si  _______ entonces
        res = val1 + val2;

    }
    else { //SiNo
    if (val1 > val2){ // si________ entonces 
      res = val1 - val2;  
    }
    else{
        res =val1 * val2;
   } //finsi
}//finsi

//  datos de salida parciales
    cout << "resultado = " << res << endl;

  return 0;
}