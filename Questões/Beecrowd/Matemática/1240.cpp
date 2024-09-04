#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll quant_dig(ll b){
    ll quant = 0;

    while (b > 0){
        b /= 10;
        quant++;
    }

    return quant;
}

bool encaixa(ll a, ll b){
    if(b > a) return false;

    ll quant_dig_b = quant_dig(b);
    
    ll final_a = a % (ll)pow(10, quant_dig_b);
    
    return final_a == b;
}

int main(){
    ll testes;
    cin >> testes;

    while(testes){
        ll a, b;
        cin >> a >> b;

        if(encaixa(a, b)) printf("encaixa\n");
        else printf("nao encaixa\n");

        testes--;
    }

    return 0;
}