#include <iostream> // Biblioteca para entrada e saída de dados (cin e cout)

using namespace std; // Para evitar escrever std::cout e std::cin o tempo todo

int main() { // Função principal, onde o programa começa a rodar
    int X; // Criamos uma variável para armazenar o número que o usuário vai digitar

    cin >> X; // Lemos o número que o usuário digitou

    for (int i = 1; i <= X; i += 2) { // Começamos do 1 e vamos até X, pulando de 2 em 2
        cout << i << endl; // Imprimimos o número na tela
    }

    return 0; // O programa terminou sem erros
}

