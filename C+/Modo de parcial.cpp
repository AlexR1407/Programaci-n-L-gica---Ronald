#include <iostream>
using namespace std;
int main(){
    int opc;
    float num1, num2, num3, res; //num3 = aux

    while (opc !=0)
    {
        cout << "\t\t*** MENU ***";
        cout << "\n1. Muestra area y perimetro de un rectangulo";
        cout << "\n2. Devuelve el mayor de tres numeros ingresados";
        cout << "\n3. Devuelve la potencia de un numero";
        cout << "\n0. Salir";
        cout << "\nOpcion: "; cin >> opc;

        switch (opc)
        {
        case 1:
            cout << "El rectangulo tiene como: (ingresar)";
            cout << "\nBase: "; cin >> num1;
            cout << "Altura: "; cin >> num2;
            res = num1 * num2;
            cout << "\tArea: " << res;
            res = 2*(num1 + num2);
            cout << "\t\tPerimetro: " << res;
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        default:
            break;
        }
    }

    return 0;
}