#include <iostream>  // Biblioteca para entrada e saída de dados

using namespace std; // Permite usar cin e cout sem std::

int main() {
    int senha; // Declaração da variável para armazenar a senha digitada pelo usuário

    while (true) { // Loop infinito até que a senha correta seja digitada
        cin >> senha; // Lê a senha do usuário

        if (senha == 2002) { // Se a senha for correta
            cout << "Acesso Permitido" << endl;
            break; // Sai do loop e encerra o programa
        } else { // Se a senha estiver errada
            cout << "Senha Invalida" << endl;
        }
    }

    return 0; // Indica que o programa terminou sem erros
}

