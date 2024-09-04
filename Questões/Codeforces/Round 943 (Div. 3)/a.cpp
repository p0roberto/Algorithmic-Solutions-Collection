#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testes, n1, i, maior, fin;
    cin >> testes;
 
    while(testes--){
        maior = 0;
        cin >> n1;
        for(i=1;i<n1;i++){
            if((__gcd(n1, i) + i) > maior){
                fin = i;
                maior = (__gcd(n1, i) + i);
            }
        }
        cout << fin << "\n";
    }
    return 0;
}