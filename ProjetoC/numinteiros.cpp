#include <iostream> // Biblioteca para entrada e sa�da de dados (cin e cout)

using namespace std; // Para evitar escrever std::cout e std::cin o tempo todo

int main() { // Fun��o principal, onde o programa come�a a rodar
    int X; // Criamos uma vari�vel para armazenar o n�mero que o usu�rio vai digitar

    cin >> X; // Lemos o n�mero que o usu�rio digitou

    for (int i = 1; i <= X; i += 2) { // Come�amos do 1 e vamos at� X, pulando de 2 em 2
        cout << i << endl; // Imprimimos o n�mero na tela
    }

    return 0; // O programa terminou sem erros
}

