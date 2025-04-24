#include <iostream>
using namespace std;

int main() {
    char operacao; // estou criando a variavel da operação
    double num1, num2; // variaveis que iram receber os valores digitados pelo usuario

cout <<"Digite a operação (+, -, *, /): ";
cin >> operacao;

cout << "Digite dois numeros: ";
cin >> num1, num2;   // receber e quardar nas variaveis os valores digitados pelo User


switch (operacao) { 
    case '+':
        cout << "Resultado: " << num1 + num2 << endl; //calculando os valores recebidos/segue assim para os demais
        break;
    case '-':
        cout << "Resultado: " << num1 - num2 << endl;     
        break;
    case '*':
        cout << "Resultado: " << num1 * num2 << endl;
        break;
    case '/':
        if( num2 != 0 ) { //abri condicionais para identificar valor negaticvos de divisão
           cout <<"Resultado: " << num1 / num2 << endl;

        } else {
            cout << "Erro: Divisao por zero! " << endl;
        }
        break;
    default:    
       cout << "Operação invalida! " <<endl; 
    }
    
    return 0;

}