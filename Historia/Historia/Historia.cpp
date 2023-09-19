#include <iostream>
#include <string>
#include <cctype> // Para a função tolower

using namespace std;

int main() {
    // Variaveis do personagem
    string escolha;
    string nome;
    string cabelo;
    string raca;
    string olhos;
    string classe;
    char genero;
    int idade;

    // Variaveis de Habilidades
    int nivel = 1;
    int ataque = 0;
    int defesa = 0;
    int agilidade = 0;
    int magia = 0;
    int vida = 100;

    // Escolha de Personagem
    cout << "A Maldicao do Castelo!" << endl;
    cout << "\n";
    cout << "Personalizacao de Personagem" << endl;
    cout << "\n";

    // Nome (somente ate 25 caracteres)
    cout << "Digite o nome do seu personagem (ate 25 caracteres): " << endl;
    cin.ignore();
    getline(cin, nome);
    if (nome.length() > 25) {
        nome = nome.substr(0, 25);
    }

    // Idade (somente o numero)
    cout << "Qual sua idade: " << endl;
    cin >> idade;

    // Genero (M/F)
    cout << "Qual seu Genero (M/F): " << endl;
    cin >> genero;
    genero = tolower(genero); // Converter para minusculas
    if (genero != 'm' && genero != 'f') {
        cout << "Genero invalido. Escolha 'M' ou 'F'." << endl;
        return 1; // Encerrar o programa devido a entrada invalida
    }

    // Cor dos olhos (somente texto)
    cout << "Qual a cor de seus olhos: " << endl;
    cin >> olhos;

    // Cor do cabelo (somente texto)
    cout << "Qual a cor de seu cabelo: " << endl;
    cin >> cabelo;

    // Raca (somente Humano, Anao, Elfo, Orc)
    cout << "Qual a raca do seu personagem (Humano, Anao, Elfo, Orc): " << endl;
    cin >> raca;
    if (raca != "Humano" && raca != "Anao" && raca != "Elfo" && raca != "Orc") {
        cout << "Raca invalida. Escolha entre 'Humano', 'Anao', 'Elfo' ou 'Orc'." << endl;
        return 1; // Encerrar o programa devido a entrada invalida
    }

    // Classe (somente Mago, Arqueiro, Guerreiro, Escudeiro)
    cout << "Qual seria sua classe (Mago, Arqueiro, Guerreiro, Escudeiro): " << endl;
    cin >> classe;
    if (classe != "Mago" && classe != "Arqueiro" && classe != "Guerreiro" && classe != "Escudeiro") {
        cout << "Classe invalida. Escolha entre 'Mago', 'Arqueiro', 'Guerreiro' ou 'Escudeiro'." << endl;
        return 1; // Encerrar o programa devido a entrada invalida
    }

    cout << "\n";

    // Ajustando as habilidades com base na classe escolhida
    if (classe == "Mago" || classe == "mago") {
        magia += 10;
    }
    else if (classe == "Arqueiro" || classe == "arqueiro") {
        ataque += 10;
    }
    else if (classe == "Escudeiro" || classe == "escudeiro") {
        defesa += 10;
    }
    else if (classe == "Guerreiro" || classe == "guerreiro") {
        ataque += 10;
    }

    // Ajustando as habilidades com base na raca escolhida
    if (raca == "Humano") {
        agilidade += 5;
        magia += 5;
        defesa += 5;
        ataque += 5;
        vida += 0;
    }
    else if (raca == "Anao") {
        agilidade += 0;
        magia += 5;
        defesa += 10;
        ataque += 5;
        vida += 0;
    }
    else if (raca == "Elfo") {
        agilidade += 5;
        magia += 10;
        defesa += 0;
        ataque += 5;
        vida += 0;
    }
    else if (raca == "Orc") {
        agilidade += 0;
        magia += 0;
        defesa += 5;
        ataque += 15;
        vida += 0;
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

    /*
    *
    *
    *
Exemplo if para estudar




    #include <iostream>
#include <string>
using namespace std;

int main() {
    char escolha;

    cout << "Você está em um túnel. Deseja ir para a esquerda (E) ou para a direita (D)? ";
    cin >> escolha;

    if (escolha == 'E' || escolha == 'e') {
        cout << "Você encontrou um monstro. Deseja atacar (A) ou correr (C)? ";
        cin >> escolha;

        if (escolha == 'A' || escolha == 'a') {
            cout << "Você ganhou a batalha!" << endl;

            cout << "Qual lado você gostaria de seguir novamente, escadas (S) ou descansar (D)? ";
            cin >> escolha;

            if (escolha == 'S' || escolha == 's') {
                cout << "Você encontrou a saída! Parabéns!" << endl;
            } else if (escolha == 'D' || escolha == 'd') {
                cout << "Você descansou, mas alguém te achou e te eliminou. Você perdeu." << endl;
            } else {
                cout << "Escolha inválida." << endl;
            }
        } else if (escolha == 'C' || escolha == 'c') {
            cout << "Você correu, mas encontrou um beco sem saída. Você perdeu." << endl;
        } else {
            cout << "Escolha inválida." << endl;
        }
    } else if (escolha == 'D' || escolha == 'd') {
        cout << "Você encontrou um servo. Deseja atacar (A) ou fugir (F)? ";
        cin >> escolha;

        if (escolha == 'A' || escolha == 'a') {
            cout << "Você atacou e venceu!" << endl;
        } else if (escolha == 'F' || escolha == 'f') {
            cout << "Você tentou fugir, mas acabou morto." << endl;
        } else {
            cout << "Escolha inválida." << endl;
        }
    } else {
        cout << "Escolha inválida." << endl;
    }

    return 0;
}
    */



    // Início da história
    cout << "Voce acaba de chegar em uma cidade chamada Berserk, a procura de novas aventuras." << endl;
    cout << "\n";
    cout << "Bem vindo, " << nome << " voce chegou a guilda dos aventureiros de Berserk, sinta-se avontade para se cadastrar e escolher suas missoes!" << endl;
    cout << "Enquanto voce olhava as missoes para conseguir algum dinheiro um mensageiro real chega a guilda com uma proposta intrigante..." << endl;
    cout << "Ele informa que um castelo misterioso nas proximidades foi descoberto e esta assombrado por uma terrivel maldicao e a guilda esta em busca de aventureiros para investigar e quebrar a maldicao." << endl;
    cout << "Recompesas : Itens Magicos de alta classe, 500 moedas de Ouro, Tomos de aprendizado e tambem a isenção de impostos." << endl;
    cout << "\n";
    cout << "Voce aceita esta missao? (S/N)" << endl;
    cin >> escolha;
    cout << "\n";

    //Conferir caminho e sintax

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
                    if (escolha == "Voltar a Guilda") {
                        cout << "" << endl;
                    }




                    //Falta o if
                    // somente um else if pode ser usado
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