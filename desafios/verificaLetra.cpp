/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void verificaLetra(string palavra) {
    int cont=0, contLetra=0;
    while(cont <= palavra.length()){
        if(palavra[cont] == 'a' || palavra[cont] == 'A') {
            contLetra++;
        }
        cont++;
    }
    
    if(contLetra > 0) {
        cout << "A palavra digitada possui a letra \"A\"." << endl;
        cout << "Quantidade: " << contLetra;
    }else {
        cout << "A palavra digitada nao possui a letra \"A\".";
    }
}


int main()
{
    
    string palavra;
    
    cout << "Este programa verifica se a palavra digitada possui a letra \"A\" e a quantidade "
        << "em que aparece." << endl;
    cout << "Digite uma palavra: ";
    cin >> palavra;
    
    verificaLetra(palavra);
    

    return 0;
}