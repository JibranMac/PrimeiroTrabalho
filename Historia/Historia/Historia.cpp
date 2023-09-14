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
        vida += 100;
    }
    else if (classe == "Arqueiro" || classe == "arqueiro") {
        nivel += 1;
        agilidade += 5;
        magia += 0;
        defesa += 0;
        ataque += 15;
        vida += 100;
    }
    else if (classe == "Escudeiro" || classe == "escudeiro") {
        nivel += 1;
        agilidade += 0;
        magia += 0;
        defesa += 15;
        ataque += 5;
        vida += 100;
    }
    else if (classe == "Guerreiro" || classe == "guerreiro") {
        nivel += 1;
        agilidade += 0;
        magia += 0;
        defesa += 5;
        ataque += 15;
        vida += 100;
    }
    // Ajustando as habilidades com base na raça escolhida
    if (raca == "Humano") {
        agilidade += 5;
        magia += 5;
        defesa += 5;
        ataque += 5;
        vida += 0;
    }
    else if (raca == "Anao") {
        agilidade += 1;
        magia += 1;
        defesa += 15;
        ataque += 5;
        vida += 0;
    }
    else if (raca == "Elfo") {
        agilidade += 5;
        magia += 10;
        defesa += 1;
        ataque += 5;
        vida += 0;
    }
    else if (raca == "Orc") {
        agilidade += 1;
        magia += 1;
        defesa += 15;
        ataque += 5;
        vida += 0;
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
    cout << "Voce acaba de chegar em uma cidade chamada Aguas Escuras, a procura de novas aventuras." << endl;
    cout << "\n";
    cout << "Voce, " << nome << " ,chega a guilda de aventureiros, buscando por uma nova missao." << endl;
    cout << "De repente, um mensageiro real chega a guilda com uma proposta intrigante..." << endl;
    cout << "Ele informa que um castelo misterioso nas proximidades que esta assombrado por uma terrivel maldicao e a guilda esta em busca de aventureiros para investigar e quebrar a maldicao." << endl;
    cout << "Voce aceita esta missao? (S/N)" << endl;
    cin >> escolha;
    cout << "\n";

    if (escolha == "S" || escolha == "s" || escolha == "Sim" || escolha == "SIM" || escolha == "sim") {
        cout << "Voce aceita a missao, e parte em direcao ao castelo, preparado para enfrentar os desafios que aguardam." << endl;
        cout << "\n";
        cout << "A medida que voce se aproxima do castelo, uma sensação de frieza e trevas toma conta do ambiente. Voce entra nas regioes do castelo!" << endl;
        cout << "A escuridao e quase total, mas voce pode enxergar fracamente, pois esta com seu lampiao." << endl;
        cout << "Voce começar explorando. A sua esquerda, ha um corredor iluminado fracamente por uma tocha. A sua direita, uma porta antiga e enferrujada." << endl;
        cout << "O que voce faz? (Esquerda/Direita)" << endl;
        cin >> escolha;
        cout << "\n";

        if (escolha == "Esquerda" || escolha == "esquerda") {
            cout << "Voce decide continuar pelo corredor a esquerda, e acaba percebe alguns morcegos voando e ao fundo do corredor algum objeto brilhando. O que voce decide fazer? (Continuar explorando),(voltar para guilda)";
            cout << "\n";
            cin >> escolha;

            if (escolha == "Continuar explorando" || escolha == "continuar explorando" || escolha == "continuar" || escolha == "Continuar") {
                cout << "Voce encontra um bau, porem quando tenta abrir o bau te ataca e voce acaba perdendo 10 de vida" << vida - 10 << endl;
                cout << "O que voce decide fazer? (Atacar),(Voltar a Guilda)";
                cin >> escolha;
                if (escolha == "Atacar" || escolha == "atacar") {
                    cout << "Voce acaba derrotando o bau e recebe mais um nivel que fez voce receber mais 2 de habilidade em todos" << nivel + 1 << vida + 2 << ataque + 2 << defesa + 2 << agilidade + 2 << defesa + 2 << magia + 2 << endl;
                }




                //continuar multipla escolha e historia




                else if (escolha == "Voltar a Guilda" || escolha == "voltar a guilda" || escolha == "Voltar" || escolha == "voltar") {
                    cout << "Infelizmente voce tenta fugir, porem os portoes do castelo estao trancados e o cheff do castelo acaba te derrotando! (tente outro caminho)" << endl;
                }
                    //fim do caminho 2
            }
        }
        else if (escolha == "Direita" || escolha == "direita") {
            cout << "Voce decide entrar pela porta enferrujada a direita, e se depara com dois esqueletos, um possui uma espada e outro um cajado, qual voce decide atacar primeiro? (Espada),(Cajado)";
            cout << "\n";
            cin >> escolha;

            if (escolha == "Espada" || escolha == "espada") {
                cout << "Voce acaba dando conta de derrotar os dois esqueletos e acabou recebendo mais um nivel com que fez receber mais 2 de habilidade em todos" << nivel + 1 << vida + 2 << ataque + 2 << defesa + 2 << agilidade + 2 << defesa + 2 << magia + 2 << endl;
            }




            //continuar multipla escolha e historia




            else if (escolha == "Cajado" || escolha == "cajado") {
                cout << "Infelizmente voce tenta fugir, porem os portoes do castelo estao trancados e o cheff do castelo acaba te derrotando! (tente outro caminho)" << endl;
            }
                    //fim do caminho 3
        }
    }
    else if (escolha == "N" || escolha == "n" || escolha == "Não" || escolha == "NÃO" || escolha == "não") {
        cout << "Optando por nao aceitar a missao, voce decide continuar sua jornada em busca de outras aventuras e misterios." << endl;
    }
                    //fim do caminho 1
    return 0;
}