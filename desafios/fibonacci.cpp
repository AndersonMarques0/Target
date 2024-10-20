#include <iostream>

using namespace std;

void fibonacci (int num) {
    
    if(num == 0 || num == 1 || num == 2){
        cout << "O número pertence a sequência de Fibonacci!";
        return;
    }else {
        int f=2, ant=1;
        while(f<num) {
            f = f + ant;
            ant = f - ant;
            
            if(f == num) {
                cout << "O número pertence a sequência de Fibonacci!";
                return;
            }else if(f > num && ant < num){
                cout << "O número não pertence a sequência de Fibonacci!";
                return;
            }
            
        }
        
    }
    
    
    
    
}

int main()
{
    int num;
    cout << "Este programa verifica se o número digitado pertence ou não a sequência de fibonacci.\n";
    cout << "Digite um número: ";
    cin >> num;
    fibonacci(num);
    
    

    return 0;
}