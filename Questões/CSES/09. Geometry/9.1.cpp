#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    vector<pair<ll, ll>> pontos(3);
    ll testes;
    cin >> testes;
    
    for(int i = 0; i < testes; i++){

        for(int j = 0; j < 3; j++){
            cin >> pontos[j].first >> pontos[j].second;
        }

        ll x1 = pontos[0].first, y1 = pontos[0].second;
        ll x2 = pontos[1].first, y2 = pontos[1].second;
        ll x3 = pontos[2].first, y3 = pontos[2].second;
        ll determinante = x1 * (y2 - y3) - y1 * (x2 - x3) + (x2 * y3 - x3 * y2);

        if(determinante == 0){
            cout << "TOUCH\n";
        } else{
              if(determinante > 0){
                cout << "LEFT\n";
            } else{
                cout << "RIGHT\n";
            }
        }
    }

    return 0;
}