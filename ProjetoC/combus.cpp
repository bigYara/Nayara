#include <iostream>  // Biblioteca para entrada e sa�da de dados

using namespace std; // Permite usar cin e cout sem std::

int main() {
    int opcao; // Vari�vel para armazenar o tipo de combust�vel digitado
    int alcool = 0, gasolina = 0, diesel = 0; // Contadores

    while (true) { // Loop infinito at� encontrar a op��o de sa�da (4)
        cin >> opcao; // L� o c�digo digitado pelo usu�rio

        if (opcao == 4) { // Se o usu�rio digitar 4, encerra o programa
            break;
        }

        if (opcao == 1) {
            alcool++; // Conta um voto para �lcool
        } else if (opcao == 2) {
            gasolina++; // Conta um voto para Gasolina
        } else if (opcao == 3) {
            diesel++; // Conta um voto para Diesel
        }
        // Se for um n�mero inv�lido, ele simplesmente ser� ignorado
    }

    // Exibe a mensagem de agradecimento e os totais de cada combust�vel
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;

    return 0; // Indica que o programa terminou sem erros
}

