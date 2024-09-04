#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll testes;
    cin >> testes;
 
    while(testes){
        ll n,  assento;
        cin >> n;
 
        vector<bool> ocupados(n+2, false);
        bool vdd = true;
 
        for(int i = 0; i < n; i++){
            cin >> assento;
            ocupados[assento] = true;
 
            int atual = assento;
 
            if(i == 0) continue;
            if(!ocupados[atual - 1] && !ocupados[atual + 1]){
                vdd = false;
            }
        }
 
        if(!vdd){
            cout << "NO\n";
        } else{
            cout << "YES\n";
        }
    
        testes--;
    }
 
    return 0;
}