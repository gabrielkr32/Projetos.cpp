// calculadora basica com as condicionas if >> else if >> else

#include <iostream>
using namespace std;

int main() { // estrutura do C++
    char operacao; //variavel
    double num1, num2; //Criando duas variaveis 

    cout <<"Escolha a operação, utilizando os SIMBOLOS:  SOMA(+) , SUBTRAÇÃO(-), MULTIPLICAÇÃO(*), DIVISÃO(/): ";
    cin >> operacao;

    cout << "Digite o primeito valor, e apos o ENTER digite o segundo valor: ";
    cin >> num1 >> num2;

    if (operacao == '+') { // abrindo as condições para o calculo baseado nas escolhas
        cout << "Resultado: " << num1 + num2 << endl;

    }else if (operacao == '-'){
        cout << "Resultado: " << num1 - num2 << endl;

    }else if (operacao == '*') {
        cout << "Resultado: " << num1 * num2 << endl;

    }else if (operacao =='/') {
        if (num2 != 0){
            cout <<"Resultado: " <<num1 / num2 <<endl;

        } else  {
            cout << "Erro: Divisao por zero!" << endl;
        }
    } else {
        cout << "Operação invalida" << endl;
    }

    return 0;
}