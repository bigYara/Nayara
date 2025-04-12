#include <iostream> // Biblioteca para entrada e sa�da padr�o (cin, cout)
using namespace std; // Para evitar usar std:: antes de cout, cin, etc.

int main() {
   
    // Esses s�o os valores "verdadeiros" das cartas no tabuleiro.
    // Eles n�o s�o mostrados ao jogador diretamente.
    // Cada letra aparece duas vezes, formando pares: A, B, C
    char V1 = 'A', V2 = 'B', V3 = 'C', V4 = 'C', V5 = 'B', V6 = 'A';

    
    // O jogador v� essas letras (1 a 6) ao inv�s dos valores reais.
    // Quando um par for encontrado, o n�mero ser� substitu�do por 'X' ou 'R'
    char P1 = '1', P2 = '2', P3 = '3', P4 = '4', P5 = '5', P6 = '6';

 
    int pontosX = 0; // Pontua��o do jogador X
    int pontosR = 0; // Pontua��o do jogador R
    char jogador = 'X'; // Come�a com o jogador X
    int paresEncontrados = 0; // Quando chegar a 3, o jogo termina

    // ======== LOOP PRINCIPAL DO JOGO ===========
    // O jogo continua at� que os 3 pares sejam encontrados
    while (paresEncontrados < 3) {

        // ======== MOSTRAR O TABULEIRO ===========
        cout << "\nJOGO DA MEMORIA\n";
        cout << " " << P1 << " | " << P2 << " | " << P3 << "\n";
        cout << " " << P4 << " | " << P5 << " | " << P6 << "\n";

        // ======== ENTRADA DO JOGADOR ===========
        int pos1, pos2; // Guardam as posi��es escolhidas (1 a 6)
        cout << "\nJogador " << jogador << ", escolha duas cartas (1 a 6): ";
        cin >> pos1 >> pos2;

        // ======== VERIFICA��O DE VALORES INV�LIDOS ===========
        // Se o jogador escolheu a mesma posi��o duas vezes ou n�meros fora de 1 a 6
        if (pos1 == pos2 || pos1 < 1 || pos1 > 6 || pos2 < 1 || pos2 > 6) {
            cout << "Jogada invalida. Tente novamente.\n";
            continue; // Volta para o in�cio do loop
        }

        // ======== VERIFICAR SE AS CARTAS J� FORAM USADAS ===========
        // Pegamos o valor atual (X, R ou n�mero) das posi��es escolhidas
        char c1 = (pos1 == 1 ? P1 : pos1 == 2 ? P2 : pos1 == 3 ? P3 :
                   pos1 == 4 ? P4 : pos1 == 5 ? P5 : P6);
        char c2 = (pos2 == 1 ? P1 : pos2 == 2 ? P2 : pos2 == 3 ? P3 :
                   pos2 == 4 ? P4 : pos2 == 5 ? P5 : P6);

        // Se uma das posi��es j� estiver marcada como 'X' ou 'R', foi usada
        if (c1 == 'X' || c1 == 'R' || c2 == 'X' || c2 == 'R') {
            cout << "Uma das cartas ja foi escolhida. Tente novamente.\n";
            continue;
        }

        // ======== REVELAR OS VALORES DAS POSI��ES ESCOLHIDAS ===========
        char v1 = (pos1 == 1 ? V1 : pos1 == 2 ? V2 : pos1 == 3 ? V3 :
                   pos1 == 4 ? V4 : pos1 == 5 ? V5 : V6);
        char v2 = (pos2 == 1 ? V1 : pos2 == 2 ? V2 : pos2 == 3 ? V3 :
                   pos2 == 4 ? V4 : pos2 == 5 ? V5 : V6);

        // Mostra ao jogador os valores que ele virou
        cout << "VC virou: " << pos1 << " = " << v1 << ", " << pos2 << " = " << v2 << endl;

        // ======== CHECAGEM DE PAR ===========
        if (v1 == v2) {
            cout << "Par encontrado!\n";

            // Marca as posi��es com o s�mbolo do jogador
            if (pos1 == 1) P1 = jogador;
            else if (pos1 == 2) P2 = jogador;
            else if (pos1 == 3) P3 = jogador;
            else if (pos1 == 4) P4 = jogador;
            else if (pos1 == 5) P5 = jogador;
            else P6 = jogador;

            if (pos2 == 1) P1 = jogador;
            else if (pos2 == 2) P2 = jogador;
            else if (pos2 == 3) P3 = jogador;
            else if (pos2 == 4) P4 = jogador;
            else if (pos2 == 5) P5 = jogador;
            else P6 = jogador;

            paresEncontrados++; // Atualiza a quantidade de pares encontrados

            // Atualiza a pontua��o do jogador
            if (jogador == 'X') pontosX++;
            else pontosR++;

            // ======== VERIFICAR FIM DO JOGO ===========
            if (paresEncontrados == 3) {
                cout << "\nFIM DE JOGO!\n";
                cout << "Pontos de X: " << pontosX << ", Pontos de R: " << pontosR << "\n";

                // Mostra quem venceu
                if (pontosX > pontosR) cout << "Jogador X venceu!\n";
                else if (pontosR > pontosX) cout << "Jogador R venceu!\n";
                else cout << "Empate!\n";

                break; // Sai do loop
            }

        } else {
            // Se os valores forem diferentes, n�o forma par
            cout << "Nao foi par.\n";

            // Alterna o jogador: se for X vira R, se for R vira X
            jogador = (jogador == 'X') ? 'R' : 'X';
        }
    }

    return 0; // Fim do programa
}

