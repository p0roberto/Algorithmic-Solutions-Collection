#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll linha, coluna, teste;
    ll i, x;
 
    cin >> teste;
 
    for(i = 0; i < teste; i++){
        cin >> linha >> coluna;
        if(coluna >= linha){
            if(coluna % 2 != 0){
                x = coluna*coluna;
                x = x - (linha) + 1;
                cout << x << '\n';
            }
            else{
                x = (coluna-1)*(coluna-1) + linha;
                cout << x << '\n'; 
            }
        }
        else{
            if(linha % 2 == 0){
                x = linha*linha;
                x = x - (coluna) + 1;
                cout << x << '\n';
            }
            else{
                x = (linha-1)*(linha-1) + coluna;
                cout << x << '\n'; 
            }
        }
    }
    return 0;
}