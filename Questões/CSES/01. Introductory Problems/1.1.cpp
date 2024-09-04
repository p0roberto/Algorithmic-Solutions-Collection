#include <iostream>
using namespace std;

int main(){
    long long n, valor;
    
    cin >> n;

    valor = n;

    cout << n << " ";

    while(valor != 1){
        if(valor % 2 == 0){
            valor = valor / 2;
        } else {
            valor = 3 * valor + 1;
        }
        cout << valor << " ";
    }

    return 0;
}
