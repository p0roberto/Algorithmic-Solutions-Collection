
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, tam, i;
    cin >> n;
 
    while(n){
        cin >> tam;
 
        string embaralhada, copia;
 
        cin >> embaralhada;
        copia = embaralhada;
        
        sort(embaralhada.begin(), embaralhada.end());
        embaralhada.erase(unique(embaralhada.begin(), embaralhada.end()), embaralhada.end());
        tam = embaralhada.size();
 
        map<char, char> mapeamento;
 
        for(i=0; i<tam; i++){
            mapeamento[embaralhada[i]] = embaralhada[tam - i - 1];
        }
 
        tam = copia.size();
 
        for(i=0; i<tam; i++){
            if(mapeamento.find(copia[i]) != mapeamento.end()){
                copia[i] = mapeamento[copia[i]];
            }
        }
 
        cout << copia << "\n";
 
        n--;
    }
 
    return 0;
}