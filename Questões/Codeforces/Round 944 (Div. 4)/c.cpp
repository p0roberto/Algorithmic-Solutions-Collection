#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    int n;
    int a, b, c, d;
    int menor, maior, menor2, maior2;
    cin >> n;
 
    while(n){
 
        cin >> a >> b >> c >> d;
        
        if(a > b){
            menor = b;
            maior = a;
        }
        else{
            menor = a;
            maior = b;
        }
        if(c > d){
            menor2 = d;
            maior2 = c;
        }
        else{
            menor2 = c;
            maior2 = d;
        }
 
        if(menor2 < menor){
            if(maior2 < menor || maior2 > maior){
                cout << "NO" << "\n";
            }
            else{
                cout << "YES" << "\n";
            }
        }
        if(menor2 > menor){
            if(menor2 < maior){
                if(maior2 < maior && maior2 > menor){
                    cout << "NO" << "\n";
                }
                else{
                    cout << "YES" << "\n";
                }
            }
            else{
                cout << "NO" << "\n";
            }
        }
 
        n--;
    }
 
    return 0;
}