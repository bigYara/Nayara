#include <iostream>  // Biblioteca para entrada e sa�da

using namespace std; // Evita escrever std::cout e std::cin

int main() {
    int M, N; // Declara��o das vari�veis para armazenar os n�meros

    while (true) { // Loop infinito at� encontrarmos um n�mero = 0
        cin >> M >> N; // L� dois valores inteiros

        if (M <= 0 || N <= 0) { // Se um dos n�meros for = 0, sai do loop
            break;
        }

        int menor = min(M, N); // Descobre o menor n�mero
        int maior = max(M, N); // Descobre o maior n�mero
        int soma = 0; // Inicializa a soma

        // Percorre os n�meros do menor at� o maior e calcula a soma
        for (int i = menor; i <= maior; i++) {
            cout << i << " "; // Exibe o n�mero na tela
            soma += i; // Adiciona o n�mero � soma
        }

        cout << "Sum=" << soma << endl; // Exibe a soma final
    }

    return 0; // Indica que o programa terminou sem erros
}

