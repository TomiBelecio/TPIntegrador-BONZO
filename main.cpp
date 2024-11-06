/****************************************************************************************************************************************************
** Descrpcion : VISUAL DEL JUEGO
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

void cargaDados(int dados[],int);

void pedirNombres(string &jugador1, string &jugador2);

void quienEmpieza(int dados[],string jugador1,string jugador2);





int main()
{
   int TAM = 4;
int dados[TAM] ={} ;
string jugador1,jugador2 ;
int numeroProhibido;
int contRondas = 0;
char seguirJugando = 's';


        srand(static_cast<unsigned int>(time(NULL)));

        cargaDados (dados, TAM);
        
        pedirNombres(jugador1, jugador2);
        
        
    setColor(10);
  setColor(FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_RED);cout << "\t\t\t*\t* * * * * * * * * * * * * * * * * * * * * * * * * * * \t    *"<<endl;
  setColor(12);cout << "     BONZO :P\t\t\t*\t    SE VA A LANZAR UN DADO!  \t\t    *                 BONZO :P"<<endl;
  cout <<"\t\t\t\t* \t\t\t\t\t\t    *"<< endl;
  cout << "\t\t\t \t*   SI EL NUMERO QUE CAE ES IMPAR EMPIEZA "<< jugador1<<"      *" <<endl;
  cout << "\t\t\t \t*   DE LO CONTRARIO EMPIEZA "<< jugador2<<" \t\t    *" <<endl;
  cout << "\t\t\t*\t* * * * * * * * * * * * * * * * * * * * * * * * * * *\t    *"<<endl;
    cout << endl;
    setColor(15);cout << "\t\t\t\t        ->PULSE CUALQUIER TECLA PARA LANZAR<-" <<endl;
  setColor(1);  system("pause");



        quienEmpieza(dados,jugador1,jugador2);



   //inicio del juego
   //condicion while que toque numero prohibido o completar 6 rondas

    while (seguirJugando == 's' || seguirJugando == 'S') {

            contRondas++;
           cargaDados (dados, TAM);
            cout << endl;
cout << "\t\t\t\t\t   # # # # # \t# # # # #    # # # # #"<< endl;
cout << "\t\t\t\t\t   #       #\t#       #    #       #"<< endl;
cout << "\t\t\tTURNO\t\t   #  ("<<dados[1]<<")  #\t#  ("<<dados[2]<<")  #    #  ("<<dados[3]<<")  #    "<< endl;
cout << "PUNTOS: \t\tJUGADOR2           #       #    #       #    #       #"<< endl;
cout << "\t\t\t\t\t   # # # # #    # # # # #    # # # # #"<< endl;
cout <<"RONDA: "<<contRondas<< endl;
 for (int x=1;x<TAM;x++) {
    if (dados[x] == contRondas) {
        seguirJugando = 'n';
        break;
    }
 }
if (seguirJugando == 's' || seguirJugando == 'S') {
            cout << endl;
            cout << "PARA AVANZAR A LA SIGUIENTE RONDA PRESIONE (S) O (N) PARA NO" << endl;
            cin >> seguirJugando;
        }




    }

    cout<<"TURNO DEL SIGUIENTE JUGADOR"<<endl;







    return 0;
}

void cargaDados(int dados[],int tam) {

    for (int x=1; x<tam; x++){

        dados[x] =  rand() % 6 +1;
    }

}

// Función para pedir el nombre de los jugadores y confirmar
void pedirNombres(string &jugador1, string &jugador2) {
    cout << "Introduce el nombre del Jugador 1: ";
    getline(cin, jugador1);

    cout << "Introduce el nombre del Jugador 2: ";
    getline(cin, jugador2);
    }

    void quienEmpieza(int dados[],string jugador1,string jugador2){

            if (dados[1] % 2 == 0) {

          cout << "\t\t\t\t\t\t   # # # # # "<< endl;
      cout << "\t\t\t\t\t\t   #       # "<< endl;
      cout << "\t\t\t\tPAR\t\t   #  ("<<dados[1]<<")  #"<< endl;
      cout << "\t\t\t\tEMPIEZA:"<<jugador2<<"        #       #"<< endl;
      cout << "\t\t\t\t\t\t   # # # # # "<< endl;
        setColor(15);  cout << "\n\t\t\t\t        ->PULSE CUALQUIER TECLA PARA EMPEZAR<-" <<endl;
          system("pause");

    } else {
          cout << "\t\t\t\t\t\t   # # # # # "<< endl;
      cout << "\t\t\t\t\t\t   #       # "<< endl;
      cout << "\t\t\t\tIMPAR\t\t   #  ("<<dados[1]<<")  #"<< endl;
      cout << "\t\t\t\tEMPIEZA:"<<jugador1<<"        #       #"<< endl;
      cout << "\t\t\t\t\t\t   # # # # # "<< endl;
        setColor(15);  cout << "\n\t\t\t\t        ->PULSE CUALQUIER TECLA PARA EMPEZAR<-" <<endl;
           system("pause");

    }

    }
