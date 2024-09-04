#include <bits/stdc++.h>
using namespace std;
long long a, b;

bool leitura(){
    cin >> a >> b;
    return !(a == 0 && b == 0);
}

int cont_carry(long long a, long long b){
    int carry = 0;
    int carry_count = 0;
    while (a > 0 || b > 0) {
        int digit_a = a % 10;
        int digit_b = b % 10;
        if(digit_a + digit_b + carry >= 10){
            carry = 1;
            carry_count++;
        } else {
            carry = 0;
        }
        a /= 10;
        b /= 10;
    }
    return carry_count;
}

int main(){
   
    while(leitura()){   
        int carry_count = cont_carry(a, b);
        if(carry_count > 1){
            cout << carry_count << " carry operations.\n";
        } else {
            if(carry_count == 1){
                cout << "1 carry operation.\n";
            } else{
                cout << "No carry operation.\n";
            }
        }
    }

    return 0;
}