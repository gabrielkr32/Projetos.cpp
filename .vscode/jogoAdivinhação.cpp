//jogo de adivinhação com um numero fixico
// a ideia é fazer o ususario acertar o numero que eu irei escolher dentro do codigo 


#include <iostream>
using namespace std;

int main() {
    int numeroSecreto = 7;   // numero fixo
    int palpite;
    int tentativas = 0;


    cout <<"Tente adivinhar o numero de 1 a 0\n";


    do{
        cout << "Digite seu palpite: ";
        cin >> palpite;
        tentativas++;

        if (palpite > numeroSecreto) {
            cout << "Muito alto!! Tente novamente.\n";
        } else if (palpite < numeroSecreto) {
            cout << "Muito baixo! Tente novamente.\n";
        } else{
            cout << "PArabens!! Você acertou em " << tentativas << " tentativas.\n";
        }
    } while (palpite != numeroSecreto);

    return 0;

}