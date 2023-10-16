#include <iostream>

using namespace std;

int main(){

    /*
    * 1. Faça um programa que exiba 30 vezes na tela a mensagem “Olá, tudo bem?”
    int contador;

    contador = 0;

    while (contador <= 30){
        cout << contador << " - Ola tudo bem\n";
        contador++;
    }
    cout << "Fora do Loop\n";
    return 0;
    */
    //----------------------------------------------------------------------------------------------------------------------
    /*
    //2. Faça um algoritmo que leia 10 valores inteiros e mostre a sua soma. 

     int somatorio = 0;
     int vlr_digitado;

     for (int contador = 1;contador <= 10; contador++){
         cout << "Digite o " << contador << " valor.\n";
         cin >> vlr_digitado;
         somatorio += vlr_digitado;
     }
     cout << "A soma dos valores e : " << somatorio << endl;
    return 0;
    */
    //----------------------------------------------------------------------------------------------------------------------
    /*
    //3. Chico tem 1, 50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1, 10 metro e
    //    cresce 3 centímetros por ano.Construa um algoritmo que calcule e imprima quantos anos
    //    serão necessários para que Zé seja maior que Chico.

    float chicoAltura = 1.50;  // Altura inicial de Chico em metros
    float zeAltura = 1.10;     // Altura inicial de Zé em metros
    int anos = 0;

    // Enquanto Zé for menor ou igual a Chico, continue crescendo ambos
    while (zeAltura <= chicoAltura) {
        chicoAltura += 0.02;  // Chico cresce 2 centímetros por ano (0.02 metros)
        zeAltura += 0.03;     // Zé cresce 3 centímetros por ano (0.03 metros)
        anos++;
    }
    cout << "Serao necessarios " << anos << " anos para que Ze seja maior que Chico." << endl;
    cout << "| Altura do chico e : " << chicoAltura << " |\n";
    cout << "| Altura do chico e : " << zeAltura << " |\n";
    return 0;
     */
     //----------------------------------------------------------------------------------------------------------------------
     /*
        //4. Elabore um algoritmo que leia um conjunto indeterminado de valores e informe, ao final,
        //     o maior e o menor valor lidos.O algoritmo deverá ser encerrado se o usuário digitar um
        //     valor negativo ou o valor 0.

    int valor_digitado;
    int maior = 0, menor = INT_MAX;

    do
    {
        cout << "Digite um valor: \n";
        cin >> valor_digitado;

        if (valor_digitado > 0 && valor_digitado < menor){
            menor = valor_digitado;
        }
        if (valor_digitado > 0 && valor_digitado > maior) {
            maior = valor_digitado;
        }
    } while (valor_digitado > 0);
    
    cout << "O maior valor digitado foi : " << maior << endl
         << "O menor valor digitado foi : " << menor << endl;
    return 0;
     */
     //----------------------------------------------------------------------------------------------------------------------
     /*
    //5. Faça um algoritmo que solicite um valor para o usuário, e gere a tabuada deste valor.Por
        //exemplo, se o usuário informar o valor 2 deverá ser gerada a tabuada do número 2,
        //variando de 0 a 10.

    int tabuada;

    cout << "Qual tabuada voce quer? [1-10]\n";
    cin >> tabuada;

    int operador2 = 0;
    while (operador2 <= 10){
        cout << tabuada << " X " << operador2 << " = " << tabuada * operador2 << endl;
        operador2++;
    }
    return 0;
    */
}