#include <bits/stdc++.h>
using namespace std;
 
int main () {
    string hastag = "##";
    string ponts = "..";
    string copia;
    int casos, current, cont = 0;
    bool is = true, init;
    cin >> casos;
 
    while(casos) {
        cin >> current;
        cont = 0;
        is = true;
        init = true;
        for(int i = 0; i < current; i++) {
            is = init;
            for(int j = 0; j < current; j++) {
                if(is) {
                    cout << hastag;
                    copia += hastag;
                    is = false;
                }
                else {
                    cout << ponts;
                    copia += ponts;
                    is = true;
                }
            }
            cout << '\n' << copia << '\n';
            copia = "";
            if(current%2 != 0) {
                init = !init;
            }
            else {
                init = !is;
            }
        }
        casos--;
    }
    return 0;
}