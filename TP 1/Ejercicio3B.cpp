#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a=0,b=0,c=0,y=0,x1=0,x2=0;
    cout << "Sea su ecuacion de forma \n y = ax^2 + bx + c" << endl;
    cout << "Ingrese y" << endl;
    cin  >> y;
    cout << "Ingrese a" << endl;
    cin  >> a;
    cout << "Ingrese b" << endl;
    cin  >> b;
    cout << "Ingrese c" << endl;
    cin  >> c;
    if(a==0){
        cout << "Su funcion ingresada es una ecuacion lineal"
    }
    else{
        if(y!=0){
        c = c - y ;
        }
        if( ( pow(b,2) - (4*a*c) ) > 0 ){
            x1= ( -b + pow( ( pow(b,2) - (4*a*c) ) , 0.5 ) ) / (2*a) ;
            x2= ( -b - pow( ( pow(b,2) - (4*a*c) ) , 0.5 ) ) / (2*a) ;
            cout << "La primera raiz de la ecuacion de 2do grado es: "<< x1 << endl;
            cout << "La segunda raiz de la ecuacion de 2do grado es: "<< x2 << endl;
        }
        else if( ( pow(b,2) - (4*a*c) ) == 0 ){
            x1= ( -b + pow( ( pow(b,2) - (4*a*c) ) , 0.5 ) ) / (2*a) ;
            cout << "La raiz doble de la ecuacion de 2do grado es: "<< x1 << endl;
        }
        else{
            cout << "La ecuacion no tiene raices reales" << endl;
        }
    }


    return 0;
}
