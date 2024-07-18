#include "advinheonumero.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
advinheonumero::advinheonumero() {
    srand(time(0));
    inter = rand() % 1000;
}

void advinheonumero::promp() {
    int palp;
    while (cin >> palp) {
        if (palp > inter) {
            cout << "Muito Alto, Tente Novamente" << endl;
            promp();
            return;
        }
        if (palp < inter) {
            cout <<"Muito Baixo Tente Novamente" << endl;
            promp();
            return;
        }
        cout << "Parabens voce advinhou o Numero!" << endl;
        break;
    }
    return;
}
void advinheonumero::play() {
    char choice;
    cout <<"Bem vindo ao Advinhe o numero, Qual seu palpite?"<<endl;
    do {
        promp();
        cout << "Deseja jogar novamente? Se sim Digite Y"<< endl;
        cin >> choice;
    } while (choice == 'y' | choice == 'Y');
    cout << "Obrigado Por Jogar!" << endl;
    return;
}





