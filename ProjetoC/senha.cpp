#include <iostream>  // Biblioteca para entrada e sa�da de dados

using namespace std; // Permite usar cin e cout sem std::

int main() {
    int senha; // Declara��o da vari�vel para armazenar a senha digitada pelo usu�rio

    while (true) { // Loop infinito at� que a senha correta seja digitada
        cin >> senha; // L� a senha do usu�rio

        if (senha == 2002) { // Se a senha for correta
            cout << "Acesso Permitido" << endl;
            break; // Sai do loop e encerra o programa
        } else { // Se a senha estiver errada
            cout << "Senha Invalida" << endl;
        }
    }

    return 0; // Indica que o programa terminou sem erros
}

