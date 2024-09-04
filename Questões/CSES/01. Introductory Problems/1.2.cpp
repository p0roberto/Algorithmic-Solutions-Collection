#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n, i, valor;
    cin >> n;
 
    vector<bool> vet(n);
    
    for(i = 0; i < n-1; i++){
        cin >> valor;
        vet[valor-1] = true;
    }
 
    for(i = 0; i < n; i++){
        if(vet[i] == false){
            cout << i+1 << "\n";
        }
    }

    return 0;
}
