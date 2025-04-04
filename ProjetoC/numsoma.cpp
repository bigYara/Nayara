#include <iostream>  // Biblioteca para entrada e sa�da de dados

using namespace std;

int main() {
    int X, Y; // Vari�veis para armazenar os n�meros de entrada
    cin >> X >> Y; // L� os dois n�meros

    // Identificar os limites do intervalo
    int menor = min(X, Y);
    int maior = max(X, Y);
    
    int soma = 0; // Vari�vel para armazenar a soma dos �mpares

    // Percorrer os n�meros entre menor e maior (excluindo os pr�prios)
    for (int i = menor + 1; i < maior; i++) {
        if (i % 2 != 0) { // Verifica se o n�mero � �mpar
            soma += i; // Adiciona � soma
        }
    }

    cout << soma << endl; // Imprime o resultado

    return 0;
}

