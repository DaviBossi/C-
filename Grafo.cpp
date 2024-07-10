#include <iostream>
#include <vector>

using namespace std;

vector<int> calcularGrau(vector<vector<int>>& matriz) {
    int n = matriz.size();
    vector<int> grau(n, 0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            grau[i] += matriz[i][j];
        }
    }
    return grau;
}

int calcularArestas(vector<int>& grau) {
    int total = 0;
    for(int i = 0; i < grau.size(); i++) {
        total += grau[i];
    }
    return total / 2;
}

bool verificarRegular(vector<int>& grau) {
    int n = grau[0];
    for(int i = 1; i < grau.size(); i++) {
        if(grau[i] != n) {
            return false;
        }
    }
    return true;
}

bool verificarCiclo(vector<int>& grau){
    for(int i = 1; i < grau.size(); i++) {
        if(grau[i] != 2) {
            return false;
        }
    }
    return true;
}

bool verificarCompleto(vector<int>& grau,vector<vector<int>>& matriz){
    for(int i = 1; i < grau.size(); i++) {
        if(grau[i] != matriz.size() - 1) {
            return false;
        }
    }
    return true;
}
bool verificarRoda(vector<int>& grau,vector<vector<int>>& matriz){
    for(int i = 1; i < grau.size(); i++) {
        if(grau[i] == matriz.size() - 1 || grau[i] == 3) {
            return true;
        }
    }
    return false;
}
void verificarTipo(vector<int>& grau,vector<vector<int>>& matriz){
    if (verificarRegular(grau)){
        cout <<"O seu grafo e regular"<<endl;
    }
    if(verificarCiclo(grau)){
        cout <<"O seu grafo e do tipo ciclo"<<endl;
    }
    if(verificarCompleto(grau,matriz)){
        cout <<"O seu grafo e completo"<<endl;
    }
    if(verificarRoda(grau,matriz)){
        cout <<"O seu grafo e do tipo roda"<<endl;
    }
}
int main() {
    vector<vector<int>> matriz = { {0, 1, 0, 1, 1},
                                   {1, 0, 1, 0, 1},
                                   {0, 1, 0, 1, 1},
                                   {1, 0, 1, 0, 1},
                                   {1, 1, 1, 1, 0}};

    vector<int> grau = calcularGrau(matriz);

    int arestas = calcularArestas(grau);

    cout << "Numero de vertices: " << matriz.size() << endl;
    cout << "Numero de arestas: " << arestas << endl;
    cout << endl;
    cout << "Grau de cada vertice: " << endl;
    for(int i = 0; i < grau.size(); i++) {
        cout << "O grau do vertice "<< i << " e de: " << grau[i] << " " << endl;
    }
    cout << "Grau total do grafo: " << arestas * 2 << endl;
    cout << endl;
    verificarTipo(grau,matriz);

    return 0;
}
