#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
int main(){ 
    int n, iconesdois, iconesum;
    int telasdois, telasumdisp, quanttelas;
    double quantdois, quantum;
 
    cin >> n;
 
    while(n){
        cin >> iconesum >> iconesdois;
 
        quantdois = iconesdois / 2.0;
        telasdois = static_cast<int>(ceil(quantdois));
 
        if(iconesdois % 2 == 0){
            telasumdisp = 7 * telasdois; 
        } 
        else{
            telasumdisp = 7 * (telasdois - 1) + 11; 
        }
 
        telasumdisp -= iconesum;
 
        if(telasumdisp >= 0){
            quanttelas = telasdois;
        } 
        else{
            telasumdisp = -telasumdisp;
            quantum = telasumdisp / 15.0;
            telasumdisp = static_cast<int>(ceil(quantum));
            quanttelas = telasdois + telasumdisp;
        }
 
        cout << quanttelas << "\n";
        
        n--;
    }
 
    return 0;
}