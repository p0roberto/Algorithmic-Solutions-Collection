#include <bits/stdc++.h>
using namespace std;

int main(){
    long int a, b, dif;

    while (cin >> a >> b) {
        if(a > b){
            dif = a - b;
        }
        else{
            dif = b - a;
        }
        cout << dif << "\n";
    }

    return 0;
}