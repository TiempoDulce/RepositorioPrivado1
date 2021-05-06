#include <iostream>

using namespace std;

int main()
{
    float mtsSeg = 0 ;
    float kmHr = 0;
    cout << "Ingrese una velocidad en mts/seg" << endl;
    cin >> mtsSeg;
    kmHr= mtsSeg * 3.6 ;
    cout << "Su conversion a kmts/hr es : "<< kmHr << endl;
    return 0;
}
