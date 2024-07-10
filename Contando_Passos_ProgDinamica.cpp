/*CONTANDO PASSOS
Para chegar em um determinado local é possivel dar 1,2 ou 3 passos, de quantas maneiras é possível resolver isso?
Forma Dinâmica
*/


#include<iostream>

using namespace std;

int prog_dinamica(int n) {
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for(int i=3; i<=n; i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    return dp[n];
}

int main() {
    int n;
    cout << "Digite a distancia: ";
    cin >> n;
    cout << "Numero de maneiras: " << prog_dinamica(n) << endl;
    return 0;
}
