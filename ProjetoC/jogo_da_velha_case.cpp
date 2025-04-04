#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int main()
{
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
        cout << "\nBEM VINDO AO NOSSO JOGO DA VELHA\n\n";
        cout << " " << A1 << " | " << A2 << " | " << A3 << endl;
        cout << "---+---+---" << endl;
        cout << " " << B1 << " | " << B2 << " | " << B3 << endl;
        cout << "---+---+---" << endl;
        cout << " " << C1 << " | " << C2 << " | " << C3 << endl << endl;

        // Entrada do jogador
        cout << "Jogador " << jogador << ", digite a posicao desejada: ";
        cin >> opc;

        // Atualiza o tabuleiro com um switch
        switch(opc) {
            case '1': if (A1 == '1') A1 = jogador; else { cout << "Posição inválida!\n"; continue; } break;
            case '2': if (A2 == '2') A2 = jogador; else { cout << "Posição inválida!\n"; continue; } break;
            case '3': if (A3 == '3') A3 = jogador; else { cout << "Posição inválida!\n"; continue; } break;
            case '4': if (B1 == '4') B1 = jogador; else { cout << "Posição inválida!\n"; continue; } break;
            case '5': if (B2 == '5') B2 = jogador; else { cout << "Posição inválida!\n"; continue; } break;
            case '6': if (B3 == '6') B3 = jogador; else { cout << "Posição inválida!\n"; continue; } break;
            case '7': if (C1 == '7') C1 = jogador; else { cout << "Posição inválida!\n"; continue; } break;
            case '8': if (C2 == '8') C2 = jogador; else { cout << "Posição inválida!\n"; continue; } break;
            case '9': if (C3 == '9') C3 = jogador; else { cout << "Posição inválida!\n"; continue; } break;
            default: cout << "Posição inválida!\n"; continue;
        }

        jogadas++; // Conta o número de jogadas

        // Verifica se o jogador venceu
        if ((A1 == jogador && A2 == jogador && A3 == jogador) || // Linha 1
            (B1 == jogador && B2 == jogador && B3 == jogador) || // Linha 2
            (C1 == jogador && C2 == jogador && C3 == jogador) || // Linha 3
            (A1 == B1 && B1 == C1 && A1 == jogador) || // Coluna 1
            (A2 == B2 && B2 == C2 && A2 == jogador) || // Coluna 2
            (A3 == B3 && B3 == C3 && A3 == jogador) || // Coluna 3
            (A1 == B2 && B2 == C3 && A1 == jogador) || // Diagonal principal
            (A3 == B2 && B2 == C1 && A3 == jogador))   // Diagonal secundária
        {
            cout << "\nJogador " << jogador << " venceu!\n";
            break; // Sai do loop e encerra o jogo
        }

        // Se todas as jogadas foram feitas e ninguém venceu, é empate
        if (jogadas == 9) {
            cout << "\nEmpate!\n";
            break;
        }

        // Troca o jogador
        jogador = (jogador == 'X') ? 'O' : 'X';

    } while (true);

    return 0;
}
