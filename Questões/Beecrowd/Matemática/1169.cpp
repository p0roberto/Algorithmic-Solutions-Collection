#include <bits/stdc++.h>
using namespace std;

long double fatorial(long double n){
    if(n == 0){
        return (1/12);
    }
    return(pow(2, n)/12 + fatorial(n-1));
}

int main(){
    long double a;
    long long b;
    int n;
    cin >> n;

    while(n){
        cin >> a;
        a = fatorial(a-1);
        a = a/1000;
        b = floor(a);
        cout << b << "kg\n";
        n--;
    }

    return 0;
}