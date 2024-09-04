#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

ll modPow(ll base, ll exp, ll mod){ // Função para calcular a exponenciação modular (base^exp % mod)
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main(){
    ll quant;
    ll a, b, result;
    cin >> quant;

    while(quant){
        cin >> a >> b;
        result = modPow(a, b, MOD);

        cout << result << endl;
        
        quant--;
    }

    return 0;
}