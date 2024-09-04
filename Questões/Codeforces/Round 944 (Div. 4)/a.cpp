#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    int n, menor, maior;
 
    cin >> n;
 
    while(n){
        cin >> menor >> maior;
        if(menor > maior){
            cout << maior << ' ' << menor << "\n";
        }
        else{
             cout << menor << ' ' << maior << "\n";
        }
        n--;
    }
 
    return 0;
}