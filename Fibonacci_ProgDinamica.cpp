#include<iostream>
#include<vector>

using namespace std;

vector<long long> memo;

int fib(int n){
    if (n<=1){
        return n;
    }
    if (memo[n] != -1){
        return memo[n];
    }
    memo[n] = fib(n-1) + fib(n-2);
    return memo[n];
}

int main(){
    int m = 2;
    int n;
    while(m == 2){
        cout <<"Insira o valor de n: ";
        cin >> n;
        memo.resize(n+1,-1);
        cout <<"O "<<n<<" numero de fibonnaci e: "<<fib(n)<<endl;
        cout <<"Deseja continuar?(Digite 1 para parar ou 2 para continuar)";
        cin >> m;
    }
}
