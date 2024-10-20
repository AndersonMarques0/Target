#include <iostream>

using namespace std;

void progressaoA (int num) {
    int p=1;
    
    for(int cont=0; cont < num; cont++){
        cout << p << ", ";
        p = p + 2;
    }
    
    cout << endl;
}

void progressaoB (int num) {
    int p = 2;
    
    for(int cont=0; cont < num; cont++){
        cout << p << ", ";
        p = p * 2;
    }
    cout << endl;
}

void progressaoC (int num) {
    int p=1, soma=3;
    
    for(int cont=0; cont < num; cont++){
        if(cont < 2){
            cout << cont << ", ";
        }else {
            p = p + soma;
            soma = soma + 2;
            cout << p << ", ";
        }
    }
    cout << endl;
}

void progressaoD (int num) {
    
    int cont=2, i=0;
    while(i<num){
        
        cout << cont * cont << ", ";
        cont += 2;
        i++;
    }
    cout << endl;
}

void progressaoE (int num) {
    int f=1, ant=1;
    
    cout << 1 << ", ";
    cout << 1 << ", ";
    for(int cont=0; cont < num; cont++) {
        
        f = f + ant;
        ant = f - ant;
        
        cout << f << ", ";
    }
    cout << endl;
}



int main()
{
    
    progressaoA(5);
    progressaoB(7);
    progressaoC(8);
    progressaoD(5);
    progressaoE(5);
    
    // progressaoF numeros que comecao com a letra "D"
    
    cout << "2, 10, 12, 16, 17, 18, 19, 200";
    

    return 0;
}