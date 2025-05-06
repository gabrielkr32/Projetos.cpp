// Fórmulas Físicas usadas 

//assumindo a velocidade ( g= 9.8 m/s²)

//Conceito >> quando um corpo e lancado com um angulo em relacao ao solo, ele descreve um movimento obliquio
// tres grandezas importantes sarao calculadas>> 

// velociadade inicial - v0
// angulo de lancamento - 0 
// aceleracao da gravidade = 9.8 m/s²

//Formulas>> conversao de angulo para radianos(funcoes 'sin()' , e 'cos()', do c++ usa, radiano)


// **Altura máxima (H)**:

// H=(v0⋅sin⁡(θ))22gH = \frac{(v_0 \cdot \sin(\theta))^2}{2g}

// H=2g(v0⋅sin(θ))2
//----------------------------------------------

// **Alcance total (R)**:

// R=v02⋅sin⁡(2θ)gR = \frac{v_0^2 \cdot \sin(2\theta)}{g}

// R=gv02⋅sin(2θ)

//------------------------------------------------
// **tempo total de voo (T)**:

// T=2⋅v0⋅sin⁡(θ)gT = \frac{2 \cdot v_0 \cdot \sin(\theta)}{g}

// T=g2⋅v0⋅sin(θ)
// ------------------------------------------------

#include <iostream>
#include <cmath>                   // para > sin, cos, pow, M_PI

using namespace std;

int main() {
    double v0, angulo, g = 9.8;
    double alturaMax, alcance, tempoVoo;

    cout << "Simulador de Lançamento Obliqio de Foguetes\n";
    cout << "............................................\n";


    //entrada> 
    cout << "Digite a velocidade inicial (m/s); ";
    cin >> v0;

    cout <<"Digite o angulo de lancamento (em graus): ";
    cin >> angulo;

    //conversão para radianos
    double anguloRad = angulo * M_PI / 180;

    //calculos
    alturaMax = pow(v0 * sin(angulo), 2) / (2 * g);
    alcance = pow(v0, 2) * sin(2 * anguloRad) / g;
    tempoVoo = (2 * v0 * sin (anguloRad)) / g;

    //resultado

    cout << "\nResultados da simulação\n";
    cout << "Altura maxima: " << alturaMax << "metros\n";
    cout << "alcance total: " << alcance << "metros\n";
    cout << "tempo de voo: "  << tempoVoo << "segundos\n";

    return 0 ;

}