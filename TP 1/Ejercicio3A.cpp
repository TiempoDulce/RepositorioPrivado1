#include <iostream>

using namespace std;

int main()
{
    float mtsSeg = 0 ;
    float kmHr = 0;

    cout << "Ingrese una velocidad en mts/seg" << endl;
    cin >> mtsSeg;

    if(mtsSeg<0){
        cout << "Su velocidad ingresada no puede ser negativa" << endl;
    }
    else{
        kmHr= mtsSeg * 3.6 ;
        cout << "Su conversion a kmts/hr es : "<< kmHr << endl;
    }

    return 0;
}
