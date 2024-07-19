#include "adivinheonumero.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
advinheonumero::advinheonumero() {
    srand(time(0));
    inter = rand() % 1000 +1;
}

void advinheonumero::promp() {
    int palp;
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
void advinheonumero::play() {
    char choice;
    do {
        inter = rand() % 1000 + 1;
        cout << "Bem-vindo ao 'Adivinhe o numero'! Qual e o seu palpite?" << endl;
        promp();
        cout << "Deseja jogar novamente? Se sim, digite Y. Para sair, digite qualquer outra tecla." << endl;
        cin >> choice;
        while (cin.fail() || (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N')) {
            cin.clear();
            cout << "Entrada inválida. Deseja jogar novamente? Se sim, digite Y. Para sair, digite qualquer outra tecla." << endl;
            cin >> choice;
        }
    } while (choice == 'y' || choice == 'Y');
    cout << "Obrigado por jogar!" << endl;
}





