#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll n, i, cont = 0;
    cin >> n;
 
    vector<ll> vet(n);
 
    for(i = 0; i < n; i++){
        cin >> vet[i];
        if(i > 0){
            if(vet[i] < vet[i-1]){
                cont = cont + (vet[i-1] - vet[i]);
                vet[i] = vet[i] + (vet[i-1] - vet[i]);
            }
        }
    }
 
    cout << cont << '\n';
 
    return 0;
}