#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, a, raiz, cont;
    cin >> n;

    while(n){
        cin >> a;
        cont = 0;
        raiz = sqrt(a);
        for(i = 2; i <= raiz; i++){
            if(a % i == 0){
                cont = 1;
                break;
            }
        }

        if(cont == 0){
            cout << "Prime" << "\n";
        }
        else{
            cout << "Not Prime" << "\n";
        }

        n--;
    }

    return 0;
}