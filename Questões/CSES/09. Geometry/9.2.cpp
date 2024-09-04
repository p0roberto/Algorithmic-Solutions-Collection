#include <bits/stdc++.h>
using namespace std;

#define ll long long

typedef pair<ll, ll> ponto;
ponto p1, p2, p3, p4;

int orientacao_pontos(ponto p, ponto q, ponto r){
    ll det = (q.first - p.first) * (r.second - p.second) - (q.second - p.second) * (r.first - p.first);
    if (det == 0) return 0;
    return (det > 0) ? 1 : 2;
}

bool se_tocam(){ // Imcompleta
    int o1 = orientacao_pontos(p1, p2, p3);
    int o2 = orientacao_pontos(p1, p2, p4);
    int o3 = orientacao_pontos(p3, p4, p1);
    int o4 = orientacao_pontos(p3, p4, p2);
    if(o1 != o2 && o3 != o4) return true;
    return false;
}

int main(){
    ll testes;
    cin >> testes;

    for(int i = 0; i < testes; i++){
        cin >> p1.first >> p1.second >> p2.first >> p2.second >> p3.first >> p3.second >> p4.first >> p4.second;

        bool intercession = se_tocam();
        if(intercession){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }

    return 0;
}