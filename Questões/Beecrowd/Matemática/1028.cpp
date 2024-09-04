#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b){
    int maior, menor;
    if(a > b){
        maior = a;
        menor = b;
    }
    else{
        maior = b;
        menor = a;
    }
    if(maior % menor == 0){
        return menor;
    }
    else{
        return mdc(menor, maior % menor);
    }
}

int main(){
    int n, a, b, saida;

    cin >> n;

    while(n--){
        cin >> a >> b;
        saida = mdc(a, b);
        cout << saida << "\n";
    }

    return 0;
}