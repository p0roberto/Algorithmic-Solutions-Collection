#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll quant_linhas(ll n){
    ll linha = (-1 + sqrt(1 + 8 * n)) / 2;
    return linha;
}

int main(){
    ll testes;
    cin >> testes;

    while(testes){
        ll t;
        cin >> t;
        ll linha = quant_linhas(t);
        cout << linha << '\n';
        testes--;
    }

    return 0;
}