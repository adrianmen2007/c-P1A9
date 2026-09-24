
#include <iostream>
using namespace std;
int main()
{
    //definicion o calificacion de las variables 
    float salbas, porbon, valbon;
    int tieser;
    
    //Dato de entrada
    cout << "salario basico: ";
    cin >> salbas;
    cout << "tiempo de servicio en años: ";
    cin >> tieser;
    
    //procesos parciales 
    if (tieser < 5) {
        porbon = 5;
    }
    else {
        if (tieSer < 10)  {
            porBon = 10;
        }
        else{
            if (tieSer < 15) {
                porBon = 15;
            }
            else {
                if (tieSer < 20) {
                    poBon =20;
                }
                else {
                    if (tieSer < 25) {
                        porBon = 25;
                    }
                    else {
                        if (tieSer < 30) {
                            porBon = 35;
                        }
                        else {
                            porBon =50
                        }
                    }
                }
            }
        }
    }