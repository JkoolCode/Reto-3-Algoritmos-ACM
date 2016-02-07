#include <cstdlib>
#include <iostream>
using namespace std;

void contarNumerosPrimos(int n);

int main() {
    int n;
    
    cout << "Ingrese un valor para N: ";
    cin >> n;
    
    n = (n <= 1) ? n = 2 : n = n;
    contarNumerosPrimos(n);
    system("pause");
    return 0;
}

void contarNumerosPrimos(int n){
    bool esPrimo = true;
    int contNprimos = 0, x = 2;
    
    do{
        for(int i = 2; i < x; i++){
            if(x%i == 0){
                esPrimo = false;
                break;
            }else{
                esPrimo = true;
            }
        }
        
        if(esPrimo)
            contNprimos++;
        
        x++;
    }while(x <= n);
    
    cout << "La cantidad de numeros primos es: " << contNprimos << endl;
}
