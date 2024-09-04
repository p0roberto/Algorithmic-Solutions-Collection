#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll  n, i, j;
    cin >> n;
 
    if(n <= 3){
        if(n == 1){
            cout << 1 << '\n';
        }
        else{
            cout << "NO SOLUTION" << '\n';
        } 
    }
    else{
        if(n % 2 == 0){
            j = n;
            cout << n/2 << ' ';
            cout << n << ' ';
            for(i = 1; i < n/2; i++){
                j--;
                if(i != j){
                    cout << i << ' ';
                    cout << j << ' ';
                }
                else{
                    cout << i << ' ';
                }
            }
        }
        else{
            j = n;
            cout << n/2 + 1 << ' ';
            for(i = 1; i < n/2 + 1; i++){
                if(i > 1){
                    j--;
                }
                if(i != j){
                    cout << i << ' ';
                    cout << j << ' ';
                }
                else{
                    cout << i << ' ';
              }
            }
        }
    }
    return 0;
}