#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string sequencia;
    int size, i, seq = 1, maior = 1;
 
    cin >> sequencia;
 
    size = sequencia.size();
 
    for(i = 1; i < size; i++){
        if(sequencia[i] == sequencia[i-1]){
            seq++;
        }
        else{
            seq = 1;
        }
        if(seq > maior){
            maior = seq;
        }
    }

    cout << maior << '\n';
 
    return 0;
}