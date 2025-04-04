#include <iostream>  // Biblioteca para entrada e saída de dados

using namespace std; // Permite usar cin e cout sem std::

int main() {
    int opcao; // Variável para armazenar o tipo de combustível digitado
    int alcool = 0, gasolina = 0, diesel = 0; // Contadores

    while (true) { // Loop infinito até encontrar a opção de saída (4)
        cin >> opcao; // Lê o código digitado pelo usuário

        if (opcao == 4) { // Se o usuário digitar 4, encerra o programa
            break;
        }

        if (opcao == 1) {
            alcool++; // Conta um voto para Álcool
        } else if (opcao == 2) {
            gasolina++; // Conta um voto para Gasolina
        } else if (opcao == 3) {
            diesel++; // Conta um voto para Diesel
        }
        // Se for um número inválido, ele simplesmente será ignorado
    }

    // Exibe a mensagem de agradecimento e os totais de cada combustível
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;

    return 0; // Indica que o programa terminou sem erros
}

