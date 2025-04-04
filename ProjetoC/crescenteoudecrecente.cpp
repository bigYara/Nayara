#include <iostream>  // Biblioteca para entrada e saída de dados

using namespace std; // Permite usar cin e cout sem precisar de std::

int main() {
    int X, Y; // Declaração das variáveis para armazenar os números

    while (true) { // Loop infinito até encontrarmos a condição de parada
        cin >> X >> Y; // Lê os dois números

        if (X == Y) { // Se os valores forem iguais, paramos o loop
            break;
        }

        if (X < Y) { // Se X for menor que Y, é crescente
            cout << "Crescente" << endl;
        } else { // Caso contrário, é decrescente
            cout << "Decrescente" << endl;
        }
    }

    return 0; // Indica que o programa terminou sem erros
}

