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
    int nivel = 1;
    int ataque = 10;
    int defesa = 10;
    int agilidade = 10;
    int magia = 10;
    int vida = 100;

    // Escolha de Personagem
    cout << "A Maldicao do Castelo!" << endl;
    cout << "\n";
    cout << "Personalizacao de Personagem" << endl;
    cout << "\n";

    cout << "Digite o nome do seu personagem: " << endl;
    cin.ignore();
    getline(cin, nome);

    cout << "Qual sua idade: " << endl;
    cin >> idade;

    cout << "Qual seu Genero (M/F): " << endl;
    cin >> genero;

    cout << "Qual a cor de seus olhos: " << endl;
    cin >> olhos;

    cout << "Qual a cor de seu cabelo: " << endl;
    cin >> cabelo;

    cout << "Qual a raca do seu personagem (Humano, Anao, Elfo, Orc): " << endl;
    cin >> raca;

    cout << "Qual seria sua classe (Mago, Arqueiro, Guerreiro, Escudeiro): " << endl;
    cin >> classe;
    cout << "\n";

    // Ajustando as habilidades com base na classe escolhida
    if (classe == "Mago" || classe == "mago") {
        magia += 5;
    }
    else if (classe == "Arqueiro" || classe == "arqueiro") {
        ataque += 5;
    }
    else if (classe == "Escudeiro" || classe == "escudeiro") {
        defesa += 5;
    }
    else if (classe == "Guerreiro" || classe == "guerreiro") {
        ataque += 5;
    }

    // Ajustando as habilidades com base na raca escolhida
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
        vida += 10;
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
        vida += 10;
    }

    // Continuação da história

    cout << "A Maldicao do Castelo! (Capitulo 1)" << endl;
    cout << "\n";
    cout << "Habilidades" << endl;
    cout << "\n";
    cout << "Nivel: " << nivel << endl;
    cout << "Ataque: " << ataque << endl;
    cout << "Defesa: " << defesa << endl;
    cout << "Vida: " << vida << endl;
    cout << "Agilidade: " << agilidade << endl;
    cout << "Magia: " << magia << endl;
    cout << "\n";

    // Início da história
    cout << "Voce acaba de chegar em uma cidade chamada Aguas Escuras, a procura de novas aventuras." << endl;
    cout << "\n";
    cout << nome << " chega a guilda de aventureiros, buscando por uma nova missao." << endl;
    cout << "De repente, um mensageiro real chega a guilda com uma proposta intrigante..." << endl;
    cout << "Ele informa que um castelo misterioso nas proximidades esta assombrado por uma terrivel maldicao e a guilda esta em busca de aventureiros corajosos para investigar e quebrar a maldicao." << endl;
    cout << "Voce aceita esta missao? (S/N)" << endl;
    cin >> escolha;
    cout << "\n";

    if (escolha == "S" || escolha == "s" || escolha == "Sim" || escolha == "SIM" || escolha == "sim") {
        cout << "Voce aceita a missao e parte em direcao ao castelo, preparado para enfrentar os desafios que aguardam." << endl;
        cout << "\n";
        cout << "A medida que voce se aproxima do castelo, uma sensacao de frieza e trevas toma conta do ambiente. Voce entra nas regioes do castelo!" << endl;
        cout << "A escuridao e quase total, mas voce pode enxergar fracamente com seu lampiao." << endl;
        cout << "Voce comeca explorando. A sua esquerda, ha um corredor iluminado fracamente por uma tocha. A sua direita, uma porta antiga e enferrujada." << endl;
        cout << "O que voce faz? (Esquerda/Direita)" << endl;
        cin >> escolha;
        cout << "\n";

        //historia caminho 1

        if (escolha == "Esquerda" || escolha == "esquerda") {
            cout << "Voce decide continuar pelo corredor a esquerda e percebe alguns morcegos voando e ao fundo do corredor algum objeto brilhando. O que voce decide fazer? (Continuar explorando/Voltar para a guilda)" << endl;
            cout << "\n";
            cin >> escolha;

            if (escolha == "Continuar explorando" || escolha == "continuar explorando" || escolha == "continuar" || escolha == "Continuar") {
                cout << "Voce encontra um bau, mas quando tenta abrir, ele te ataca e voce acaba perdendo 10 de vida. Sua vida atual: " << endl;
                vida -= 10;
                cout << "O que voce decide fazer? (Atacar/Voltar a Guilda)" << endl;
                cin >> escolha;
                if (escolha == "Atacar" || escolha == "atacar") {
                    cout << "Voce derrota o bau e recebe mais um nivel, aumentando suas habilidades em todos os aspectos!" << endl;
                    nivel += 1;
                    ataque += 2;
                    defesa += 2;
                    agilidade += 2;
                    magia += 2;
                    vida += 2;



                    //continuar historia
                    //cout nessa fase para desenrolar a historia
                    //cin para gravar
                    //if para declarar novos caminhos





                }
            }
            else if (escolha == "Voltar para a guilda" || escolha == "voltar para a guilda" || escolha == "Voltar" || escolha == "voltar") {
                cout << "Infelizmente, voce tenta fugir, mas os portoes do castelo estao trancados, e o chefe do castelo acaba te derrotando! (Tente outro caminho)" << endl;
            }
        }

        //historia caminho 2

        else if (escolha == "Direita" || escolha == "direita") {
            cout << "Voce decide entrar pela porta enferrujada a direita e se depara com dois esqueletos. Um deles possui uma espada e o outro um cajado. Qual voce decide atacar primeiro? (Espada/Cajado)" << endl;
            cout << "\n";
            cin >> escolha;

            if (escolha == "Espada" || escolha == "espada") {
                cout << "Voce derrota os dois esqueletos, mas perde 10 de vida. Sua vida atual: " << endl;
                vida -= 10;
                cout << "Voce tambem recebe mais um nivel, aumentando suas habilidades em todos os aspectos!" << endl;
                nivel += 1;
                ataque += 2;
                defesa += 2;
                agilidade += 2;
                magia += 2;
                vida += 2;



                //continuar historia
                //cout nessa fase para desenrolar a historia
                //cin para gravar
                //if para declarar novos caminhos





            }
            else if (escolha == "Cajado" || escolha == "cajado") {
                cout << "Infelizmente, voce tenta atacar o esqueleto com cajado e o esqueleto com espada acaba te acertando e te derrotando! (Tente outro caminho)" << endl;
            }
        }
    }
    else if (escolha == "N" || escolha == "n" || escolha == "Não" || escolha == "NÃO" || escolha == "não") {
        cout << "Optando por nao aceitar a missao, voce decide continuar sua jornada em busca de outras aventuras e misterios." << endl;
    }
    // Fim do caminho 1

    return 0;
}