// sistema de cardapio de Pizza

//projeto simples que caluclara o custo total da ordem. 



#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    const double PIZZA = 15.50,
                 REFRIGERANTE = 2.00,
                 FRANGO_FRITO = 7.00, //CHICKEN_NUGGETS
                 PALITO_DE_QUEIJO = 9.75; //BREADSTICKS
    double numItens = 0,
           menuItem,
           total = 0;
    char itemLetter;
    
    cout << "======================================================\n"
         <<"\t\tBem Vindo a Divina Pizza!\n"
         << "*******************************************************" << endl;
    cout << fixed << setprecision(2) << right;  
    
    do{
        cout <<"===================================================\n\n"
             << "\tA\tPizza" << setw(26) << PIZZA
             << "\n\tB\tSoda" <<setw(27) << REFRIGERANTE
             << "\n\tC\tChicken Nuggets" << setw(20) << FRANGO_FRITO
             << "\n\tD\tBreadstickes" << setw(20) << PALITO_DE_QUEIJO
             << "\n\tE\tExit" << endl;


        cout << "\nPor favor, insira o próximo item do menu: ";
        cin >> itemLetter;
        
        
        switch(itemLetter){
            case 'A':
            menuItem = PIZZA;
            break;
            case 'B':
            menuItem = REFRIGERANTE;
            break;
            case 'C':
            menuItem = FRANGO_FRITO;
            break;
            case 'D':
            menuItem = PALITO_DE_QUEIJO;
            break;
            case 'E':
            break;
            default:
                cerr << "\nPor favor, escolha uma opção válida\n";
        }
    if(itemLetter == 'A' || itemLetter == 'B' || itemLetter == 'C' || itemLetter == 'D')
       numItens++;

    cout << "\nNumber of itens: " << "\nNumber of itens: " << setprecision(0) << numItens << endl;

    if (itemLetter == 'A' || itemLetter == 'B' || itemLetter == 'C' || itemLetter == 'D')
    total += menuItem;

    cout << "Total: " << setprecision(2) << total << endl;

    } while (itemLetter != 'E');

    cout <<"\nThank you Enjoy!" <<  endl;

    return 0;
}
