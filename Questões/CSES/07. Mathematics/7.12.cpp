#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define MAX 2000001

vector<ll> fact(MAX + 1, 1);
vector<ll> invFact(MAX + 1, 1);

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

void precompute(ll max_value){
    for(ll i = 2; i <= max_value; ++i){
        fact[i] = fact[i - 1] * i % MOD;
    }

    invFact[max_value] = modPow(fact[max_value], MOD - 2, MOD); // Calcula o inverso modular do fatorial de MAX

    for(ll i = max_value - 1; i >= 1; --i){
        invFact[i] = invFact[i + 1] * (i + 1) % MOD; // Calcula os inversos modulares dos fatoriais em ordem decrescente
    }
}

ll comb(ll n, ll k){ // Função para calcular o coeficiente binomial C(n, k)
    if (k > n || k < 0) return 0;
    return fact[n] * invFact[k] % MOD * invFact[n - k] % MOD;
}

int main(){
    ll n, m;
    cin >> n >> m;

    precompute(n + m - 1);

    ll result = comb(n + m - 1, m);
    cout << result << endl;
    
    return 0;
}
