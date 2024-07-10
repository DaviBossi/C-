/*CONTANDO PASSOS
Para chegar em um determinado local é possivel dar 1,2 ou 3 passos, de quantas maneiras é possível resolver isso?
Forma Força Bruta
*/

#include<iostream>

using namespace std;

int forca_bruta(int n) {

    if(n < 0) {

        return 0;

    } else if(n == 0) {

        return 1;

    } else {

        return forca_bruta(n-1) + forca_bruta(n-2) + forca_bruta(n-3);

    }
}

int main() {

    int n;

    cout << "Digite a dist�ncia: ";
    cin >> n;
    cout << "N�mero de maneiras: " << forca_bruta(n) << endl;

    return 0;
}
