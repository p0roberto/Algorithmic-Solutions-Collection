#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, m;
    int vet[1010];
    double media, cont, porc;
    cin >> n;
    while(n){
        cin >> m;
        media = 0;
        cont = 0;
        for(i = 0; i < m; i++){
            cin >> vet[i];
            media = media + vet[i];
        }
        media = media/m;
        for(i = 0; i < m; i++){
            if(vet[i] > media){
                cont++;
            }
        }
        porc = 100*cont/m;
        cout << fixed << setprecision(3);
        cout << porc << "%" << "\n";
        n--;
    }
    return 0;
}