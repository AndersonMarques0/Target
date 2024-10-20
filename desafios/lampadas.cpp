#include <iostream>

using namespace std;

// Função para simular a descoberta das lâmpadas
void descobrirLampadas() {
    
    string lampada1 = "fria";
    string lampada2 = "fria";
    string lampada3 = "fria";

    
    cout << "Liguei o primeiro interruptor e esperei alguns minutos para aquecer a lâmpada." << endl;
    lampada1 = "quente";

    
    cout << "Esperando 2 segundos";

    
    cout << "Desliguei o primeiro interruptor e liguei o segundo." << endl;
    lampada1 = "quente";  
    lampada2 = "acesa";

    
    cout << "\nAgora, indo para a sala das lâmpadas...\n" << endl;

    
    if (lampada1 == "acesa")
        cout << "Lampada 1 está acesa: Controlada pelo segundo interruptor." << endl;
    else if (lampada1 == "quente")
        cout << "Lampada 1 está quente: Controlada pelo primeiro interruptor." << endl;
    else
        cout << "Lampada 1 está apagada e fria: Controlada pelo terceiro interruptor." << endl;

    if (lampada2 == "acesa")
        cout << "Lampada 2 está acesa: Controlada pelo segundo interruptor." << endl;
    else if (lampada2 == "quente")
        cout << "Lampada 2 está quente: Controlada pelo primeiro interruptor." << endl;
    else
        cout << "Lampada 2 está apagada e fria: Controlada pelo terceiro interruptor." << endl;

    if (lampada3 == "acesa")
        cout << "Lampada 3 está acesa: Controlada pelo segundo interruptor." << endl;
    else if (lampada3 == "quente")
        cout << "Lampada 3 está quente: Controlada pelo primeiro interruptor." << endl;
    else
        cout << "Lampada 3 está apagada e fria: Controlada pelo terceiro interruptor." << endl;
}

int main() {
    descobrirLampadas();
    return 0;
}
