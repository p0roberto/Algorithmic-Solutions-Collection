#include <bits/stdc++.h>
using namespace std;

long long fatorial(long long n){
    if(n == 0){
        return (1);
    }
    return( n * fatorial(n-1));
}

int main(){
    long long a, b;

    while(cin >> a >> b){
        a = fatorial(a);
        b = fatorial(b);
        a  = a + b;
        cout << a << "\n";
    }

    return 0;
}
