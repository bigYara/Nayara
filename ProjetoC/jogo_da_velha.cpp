#include <iostream>
using namespace std;

int main() {
    // Definição do tabuleiro com variáveis individuais
    char A1 = '1';
	 char A2 = '2';
	  char A3 = '3';
    char B1 = '4';
     char B2 = '5';
      char B3 = '6';
    char C1 = '7';
     char C2 = '8';
      char C3 = '9';
    char opc;
    char jogador = 'X';
    int jogadas = 0;

    do {
        // Exibe o tabuleiro
        cout << "BEM VINDO AO NOSSO JOGO DA VELHA\n\n";
        cout << " " << A1 << "  |  " << A2 << "  |  " << A3 << endl;
      
        cout << " " << B1 << "  |  " << B2 << "  |  " << B3 << endl;
        
        cout << " " << C1 << "  |  " << C2 << "  |  " << C3 << endl << endl;

        // Entrada do jogador
        cout << "Jogador " << jogador << ", digite a posicao desejada: ";
        cin >> opc;

        // Atualiza a posição escolhida
        if (opc == '1' && A1 == '1') A1 = jogador;
        else if (opc == '2' && A2 == '2') A2 = jogador;
        else if (opc == '3' && A3 == '3') A3 = jogador;
        else if (opc == '4' && B1 == '4') B1 = jogador;
        else if (opc == '5' && B2 == '5') B2 = jogador;
        else if (opc == '6' && B3 == '6') B3 = jogador;
        else if (opc == '7' && C1 == '7') C1 = jogador;
        else if (opc == '8' && C2 == '8') C2 = jogador;
        else if (opc == '9' && C3 == '9') C3 = jogador;
        else {
            cout << "Posicao invalida ou ja ocupada Tente novamente \n";
            continue;
        }

        jogadas++;

        // Verifica vitória
        if ((A1 == jogador && A2 == jogador && A3 == jogador) ||
            (B1 == jogador && B2 == jogador && B3 == jogador) ||
            (C1 == jogador && C2 == jogador && C3 == jogador) ||
            (A1 == B1 && B1 == C1 && A1 == jogador) ||
            (A2 == B2 && B2 == C2 && A2 == jogador) ||
            (A3 == B3 && B3 == C3 && A3 == jogador) ||
            (A1 == B2 && B2 == C3 && A1 == jogador) ||
            (A3 == B2 && B2 == C1 && A3 == jogador)) {
            cout << "Jogador " << jogador << " venceu!\n";
            break;
        }

        // Troca de jogador
        jogador = (jogador == 'X') ? 'O' : 'X';

    } while (jogadas < 9);

    // Se todas as jogadas foram feitas sem vencedor, é empate
    if (jogadas == 9) {
        cout << "Empate\n";
    }

    return 0;
}

