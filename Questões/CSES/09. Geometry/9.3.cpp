#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll quant, sum1 = 0, sum2 = 0;

    cin >> quant;
    vector<pair<ll, ll>> pontos(quant);
    
    for(int i = 0; i < quant; i++){
        cin >> pontos[i].first >> pontos[i].second;
    }

    ll area2 = 0, soma = 0;

    for(int i = 0; i < quant; i++){ // Shoelaces
       sum1 = pontos[i].first*pontos[(i+1) % quant].second;
       sum2 = pontos[i].second*pontos[(i+1) % quant].first;
       soma = (sum1-sum2);
       area2 = area2 + soma;
    }
    cout << abs(area2) << "\n";

    return 0;
}