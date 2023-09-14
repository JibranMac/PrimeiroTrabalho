#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variáveis do personagem
    string escolha;
    string nome;
    string cabelo;
    string raca;
    string olhos;
    string classe;
    char genero;
    int idade;

    // Variáveis de Habilidades
    int nivel = 0;
    int ataque = 0;
    int defesa = 0;
    int agilidade = 0;
    int magia = 0;
    int vida = 0;

    // Escolha de Personagem
    cout << "    A Maldicao do Castelo!      " << endl;
    cout << "\n";
    cout << "Personalizacao de Personagem\n";
    cout << "\n";

    cout << "Digite o nome do seu personagem : \n";
    cin.ignore();
    getline(cin, nome);

    cout << "Qual sua idade : \n";
    cin >> idade;

    cout << "Qual seu Genero (M/F) : \n";
    cin >> genero;

    cout << "Qual a cor de seus olhos : \n";
    cin >> olhos;

    cout << "Qual a cor de seu cabelo : \n";
    cin >> cabelo;

    cout << "Qual a raca do seu personagem (Humano, Anao, Elfo, Orc) : \n";
    cin >> raca;

    cout << "Qual seria sua classe (Mago, Arqueiro, Guerreiro, Escudeiro) : \n";
    cin >> classe;
    cout << "\n";

    // Ajustando as habilidades com base na classe escolhida
    if (classe == "Mago" || classe == "mago") {
        nivel += 1;
        agilidade += 5;
        magia += 15;
        defesa += 0;
        ataque += 0;
        vida += 0;
    }
    else if (classe == "Arqueiro" || classe == "arqueiro") {
        nivel += 1;
        agilidade += 5;
        magia += 0;
        defesa += 0;
        ataque += 15;
        vida += 0;
    }
    else if (classe == "Escudeiro" || classe == "escudeiro") {
        nivel += 1;
        agilidade += 0;
        magia += 0;
        defesa += 15;
        ataque += 5;
        vida += 0;
    }
    else if (classe == "Guerreiro" || classe == "guerreiro") {
        nivel += 1;
        agilidade += 0;
        magia += 0;
        defesa += 5;
        ataque += 15;
        vida += 0;
    }
    // Ajustando as habilidades com base na raça escolhida
    if (raca == "Humano") {
        agilidade += 5;
        magia += 5;
        defesa += 5;
        ataque += 5;
        vida += 10;
    }
    else if (raca == "Anao") {
        agilidade += 1;
        magia += 1;
        defesa += 15;
        ataque += 5;
        vida += 20;
    }
    else if (raca == "Elfo") {
        agilidade += 5;
        magia += 10;
        defesa += 1;
        ataque += 5;
        vida += 10;
    }
    else if (raca == "Orc") {
        agilidade += 1;
        magia += 1;
        defesa += 15;
        ataque += 5;
        vida += 20;
    }

    // Continuação da história
    cout << "A Maldicao do Castelo! (Capitulo 1)" << endl;
    cout << "\n";
    cout << "Habilidades" << endl;
    cout << "\n";
    cout << "Nivel : " << nivel << endl;
    cout << "Ataque : " << ataque << endl;
    cout << "Defesa : " << defesa << endl;
    cout << "Vida : " << vida << endl;
    cout << "Agilidade : " << agilidade << endl;
    cout << "Magia : " << magia << endl;
    cout << "\n";

    // Início da história
    cout << "Voce esta em uma cidade medieval, pertencente a uma guilda de aventureiros, buscando por uma nova missao emocionante." << endl;
    cout << "De repente, um mensageiro real chega a guilda com uma proposta intrigante..." << endl;
    cout << "Ele informa que um castelo misterioso nas proximidades esta assombrado por uma terrivel maldicao e a guilda esta em busca de um corajoso aventureiro para investigar e quebrar a maldicao." << endl;
    cout << "Voce aceita esta missao? (S/N)" << endl;
    cin >> escolha;
    cout << "\n";

    if (escolha == "S" || escolha == "s" || escolha == "Sim" || escolha == "SIM" || escolha == "sim") {
        cout << "Decidindo corajosamente aceitar a missao, voce parte em direcao ao castelo assombrado, preparado para enfrentar os desafios que aguardam." << endl;
    }
    else if (escolha == "N" || escolha == "n" || escolha == "Não" || escolha == "NÃO" || escolha == "não") {
        cout << "Optando por nao aceitar a missao, voce decide continuar sua jornada em busca de outras aventuras e misterios." << endl;
    }
    return 0;
}