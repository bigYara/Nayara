#include <iostream>  // Biblioteca para entrada e sa�da de dados

using namespace std; // Permite usar cin e cout sem precisar de std::

int main() {
    int X, Y; // Declara��o das vari�veis para armazenar os n�meros

    while (true) { // Loop infinito at� encontrarmos a condi��o de parada
        cin >> X >> Y; // L� os dois n�meros

        if (X == Y) { // Se os valores forem iguais, paramos o loop
            break;
        }

        if (X < Y) { // Se X for menor que Y, � crescente
            cout << "Crescente" << endl;
        } else { // Caso contr�rio, � decrescente
            cout << "Decrescente" << endl;
        }
    }

    return 0; // Indica que o programa terminou sem erros
}

