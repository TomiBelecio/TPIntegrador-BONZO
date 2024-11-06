/****************************************************************************************************************************************************
** Descrpcion : juego
** Autor: Tomas Belecio
** Fecha : 01/11/2024
****************************************************************************************************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <windows.h>

using namespace std;

void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void lanzarDados(int dados[], int tam) {
    for (int i = 0; i < tam; i++) {
        dados[i] = rand() % 6 + 1;  
    }
}

void mostrarDados(int dados[], int tam) {
    cout << "  Dados: ";
    for (int i = 0; i < tam; i++) {
        cout << dados[i] << " ";
    }
    cout << endl;
}

void quienEmpieza(string &jugador1, string &jugador2) {
    int dado;
    srand(static_cast<unsigned int>(time(NULL)));  

    dado = rand() % 6 + 1;  

    setColor(14); 
    if (dado % 2 == 1) { 
        cout << "  El dado ha salido IMPAR (" << dado << "), así que " << jugador1 << " empieza el juego!" << endl;
    } else {  
        cout << "  El dado ha salido PAR (" << dado << "), así que " << jugador2 << " empieza el juego!" << endl;
    }
    setColor(15); 
}


int main() {
    srand(static_cast<unsigned int>(time(NULL)));  
    int tam = 3;  
    string jugador1, jugador2;
 int puntosJugador1 = 0, puntosJugador2 = 0;

for (int ronda = 1; ronda <= 6; ronda++) {
        int numeroProhibido = ronda;
     
}
    
    
    
return 0;    
}
