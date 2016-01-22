#include <iostream>
    using namespace std;

    int main(){
        int n;
        int a;
        int b;
        int pos; // variable para guardar el ultimo piso que subió
        cin >> n;
        cin >> a;
        cin >> b;
        if(n >= 1){
            if(a>b && a<= 10000 && b <= 10000){
                if(a <= n){
                    pos = a; // la primera vez que sube llegara hasta el piso a
                    while(pos < n ){
                        pos = (pos - b) + a; // luego bajará b pisos y volvera a subir a pisos más...
                    }
                    if(pos == n){
                        cout << "SI";
                    }else{
                        cout << "NO";
                    }
                }else{
                    cout << "NO";
                }
            }else{
                cout << "Error, las reglas correctas son: A > B y A,B <= 10000";
            }
        }else{
            cout << "El Número de pisos 'n' debe ser mayor a 0 ";
        }
    }
    // Autor: José Elvis Juape Quispitongo