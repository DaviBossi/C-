#include<iostream>
#include<vector>

using namespace std;

int fibonacci (int n){
    if (n==0)
        return 0;
    if (n==1)
        return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n,result;

    cout <<"Insira qual valor de fibonacci vc quer: "<<endl;
    cin >> n;
    result = fibonacci(n);
    cout << "O valor e de: "<<result;
}
