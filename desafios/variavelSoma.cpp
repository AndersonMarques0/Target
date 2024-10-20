#include <iostream>

using namespace std;


int main()
{
    int indice = 12, soma = 0, k=1;
    
    while(k < indice) {
        k = k + 1;
        soma = soma + k;
    }
    
    cout << "Valor da variável soma: " << soma;

    return 0;
}