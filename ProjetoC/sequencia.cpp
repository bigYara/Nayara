#include <iostream>  // Biblioteca para entrada e saída

using namespace std; // Evita escrever std::cout e std::cin

int main() {
    int M, N; // Declaração das variáveis para armazenar os números

    while (true) { // Loop infinito até encontrarmos um número = 0
        cin >> M >> N; // Lê dois valores inteiros

        if (M <= 0 || N <= 0) { // Se um dos números for = 0, sai do loop
            break;
        }

        int menor = min(M, N); // Descobre o menor número
        int maior = max(M, N); // Descobre o maior número
        int soma = 0; // Inicializa a soma

        // Percorre os números do menor até o maior e calcula a soma
        for (int i = menor; i <= maior; i++) {
            cout << i << " "; // Exibe o número na tela
            soma += i; // Adiciona o número à soma
        }

        cout << "Sum=" << soma << endl; // Exibe a soma final
    }

    return 0; // Indica que o programa terminou sem erros
}

