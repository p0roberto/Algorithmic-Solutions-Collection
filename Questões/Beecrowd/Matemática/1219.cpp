#include <bits/stdc++.h>
using namespace std;

int main(){
    long double a, b, c;
    long double p, area_tri, area_interna, area_externa, raio_menor, raio_maior;
    long double girassol, violeta, rosa;
    long double pi = 3.1415926535897;

    while (cin >> a >> b >> c) {
        p = (a+b+c)/2;
        p = p*(p-a)*(p-b)*(p-c);
        area_tri = sqrt(p);
        p = (a + b + c)/2;
        raio_menor = area_tri/p;
        raio_maior = (a*b*c)/(4*area_tri);
        area_externa = (pi*raio_maior*raio_maior);
        girassol = area_externa - area_tri;
        area_interna = pi*raio_menor*raio_menor;
        violeta = area_tri - area_interna;
        rosa = area_interna;

        cout << fixed << setprecision(4);
        cout << girassol << " " << violeta << " " << rosa << "\n";
    }

    return 0;
}
