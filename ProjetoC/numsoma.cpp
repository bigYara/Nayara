#include <iostream>  // Biblioteca para entrada e saída de dados

using namespace std;

int main() {
    int X, Y; // Variáveis para armazenar os números de entrada
    cin >> X >> Y; // Lê os dois números

    // Identificar os limites do intervalo
    int menor = min(X, Y);
    int maior = max(X, Y);
    
    int soma = 0; // Variável para armazenar a soma dos ímpares

    // Percorrer os números entre menor e maior (excluindo os próprios)
    for (int i = menor + 1; i < maior; i++) {
        if (i % 2 != 0) { // Verifica se o número é ímpar
            soma += i; // Adiciona à soma
        }
    }

    cout << soma << endl; // Imprime o resultado

    return 0;
}

