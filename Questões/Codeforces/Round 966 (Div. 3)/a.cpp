#include <iostream>
using namespace std;
#define ll long long
 
ll countDigits(ll number){
    ll digits = 0;
    while(number > 0){
        number /= 10;
        digits++;
    }
    return digits;
}
 
bool eele(ll a){
    ll dig = countDigits(a);
    if(dig < 3) return false;
    
    ll pot = 1;
    for(int i = 0; i < dig - 2; i++){
        pot *= 10;
    }
 
    ll b = a/pot;
    if(b != 10) return false;
 
    ll rest = a % pot;
    if(countDigits(rest) != countDigits(pot / 10)) return false;
    if(rest < 2) return false;
 
    return true;
}
 
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n;
    cin >> n;
 
    while(n--){
        ll a;
        cin >> a;
        
        if(eele(a)) cout << "YES\n";
        else cout << "NO\n";
    }
 
    return 0;
}