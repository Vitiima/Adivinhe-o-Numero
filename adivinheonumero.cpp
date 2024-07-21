#include "adivinheonumero.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
adivinheonumero::adivinheonumero() {
    srand(time(0));
    inter = rand() % 1000 +1;
}

void adivinheonumero::promp() {
     float palp;
    if (cin >> palp) {
        if (palp > inter) {
            cout << "Muito Alto, Tente Novamente" << endl;
            promp();
            return;
        }
        if (palp < inter) {
            cout << "Muito Baixo Tente Novamente" << endl;
            promp();
            return;
        }
        cout << "Parabens voce advinhou o Numero!" << endl;
    }
    return;
}
void adivinheonumero::play() {
    char choice;
    do {
        cin.clear();
        inter = rand() % 1000 + 1;
        cout << "Bem-vindo ao 'Adivinhe o numero'! Qual e o seu palpite?" << endl;
        promp();
        cout << "Deseja jogar novamente? Se sim, digite Y. Para sair, digite qualquer outra tecla." << endl;
        cin >> choice;
        while (choice != 'y' && choice != 'Y') {
            cin.clear();
            break;
        }
    } while (choice == 'y' || choice == 'Y');
    cout << "Obrigado por jogar!" << endl;
}





