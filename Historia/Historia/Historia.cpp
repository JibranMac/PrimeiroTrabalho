#include <iostream>
#include <string> //GETLINE

using namespace std;

int main() {

    // Variaveis do personagem
    int escolha;
    string nome;
    int raca;
    int classe;
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

    // Nome
    cout << "Digite o nome do seu personagem: " << endl;
    getline(cin, nome);
    cout << "\n";

    // Idade (somente o numero)
    cout << "Qual sua idade: " << endl;
    cin >> idade;
    cout << "\n";

    // Genero (M/F)
    cout << "Qual seu Genero (M/F): " << endl;
    cin >> genero;
    cout << "\n";

    // Raca (somente Humano, Anao, Elfo, Orc)
    cout << "Qual a raca do seu personagem: " << endl;
    cout << "1. Humano" << endl;
    cout << "2. Anao" << endl;
    cout << "3. Elfo" << endl;
    cout << "4. Orc" << endl;
    cin >> raca;
    cout << "\n";

    //Escolha de switch para facilitar mas tambem poderia se usar função if.
    switch (raca) {
    case 1://Humano
        agilidade += 5;
        magia += 5;
        defesa += 5;
        ataque += 5;
        vida += 0;
        break;
    case 2://Anao
        agilidade += 0;
        magia += 5;
        defesa += 10;
        ataque += 5;
        vida += 0;
        break;
    case 3://Elfo
        agilidade += 5;
        magia += 10;
        defesa += 0;
        ataque += 5;
        vida += 0;
        break;
    case 4://Orc
        agilidade += 0;
        magia += 0;
        defesa += 5;
        ataque += 15;
        vida += 0;
        break;
    default://Se caso não for nenhuma opção
        cout << "Escolha Novamente sua Raca!" << endl;
        return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
        break;
    }

    // Classe (somente Mago, Arqueiro, Guerreiro, Escudeiro)
    cout << "Qual seria sua classe (Mago, Arqueiro, Guerreiro, Escudeiro): " << endl;
    cout << "1. Mago" << endl;
    cout << "2. Arqueiro" << endl;
    cout << "3. Guerreiro" << endl;
    cout << "4. Escudeiro" << endl;
    cin >> classe;
    cout << "\n";

    //Escolha de switch para facilitar mas tambem poderia se usar função if.
    switch (classe) {
    case 1://Mago
        magia += 10;
        break;
    case 2://Arqueiro
        ataque += 10;
        break;
    case 3://Guerreiro
        agilidade += 10;
        break;
    case 4://Escudeiro
        defesa += 10;
        break;
    default:
        cout << "Escolha Novamente sua Classe!" << endl;
        return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
        break;
    }

    //Mostrar habilidades Iniciais
    cout << "A Maldicao do Castelo! (Capitulo 1)" << endl;
    cout << "\n";
    cout << "Habilidades" << endl;
    cout << "\n";
    cout << "Nivel: " << nivel << endl;
    cout << "Ataque: " << ataque << endl;
    cout << "Defesa: " << defesa << endl;
    cout << "Magia: " << magia << endl;
    cout << "Agilidade: " << agilidade << endl;
    cout << "Vida: " << vida << endl;
    cout << "\n";

    // Início da história
    cout << "Voce acaba de chegar em uma cidade chamada Berserk, a procura de novas aventuras." << endl;
    cout << "\n";
    cout << "Bem vindo, " << nome << " voce chegou a guilda dos aventureiros de Berserk, sinta-se avontade para se cadastrar e escolher suas missoes!" << endl;
    cout << "Enquanto voce olhava as missoes para conseguir algum dinheiro um mensageiro real chega a guilda com uma proposta intrigante..." << endl;
    cout << "Ele informa que um castelo misterioso nas proximidades foi descoberto e esta assombrado por uma terrivel maldicao e a guilda esta em busca de aventureiros para investigar e quebrar a maldicao." << endl;
    cout << "Recompesas : Itens Magicos de alta classe, 500 moedas de Ouro, Tomos de aprendizado e tambem a isenção de impostos." << endl;
    cout << "\n";
    cout << "Voce aceita esta missao? " << endl;
    cout << "1. Aceitar" << endl;
    cout << "2. Recusar" << endl;
    cin >> escolha;
    cout << "\n";

        //caminho 1 aceitar
        switch (escolha) {
        case 1://Aceitar linha 141
            cout << "Voce aceita a missao e parte em direcao ao castelo, preparado para enfrentar os desafios que aguardam." << endl;
            cout << "\n";
            cout << "A medida que voce se aproxima do castelo, uma sensacao de frieza e trevas toma conta do ambiente. Voce entra nas regioes do castelo!" << endl;
            cout << "A escuridao e quase total, mas voce pode enxergar fracamente com seu lampiao." << endl;
            cout << "Voce comeca explorando. A sua esquerda, ha um corredor iluminado fracamente por uma tocha. A sua direita, uma porta antiga e enferrujada." << endl;
            cout << "O que voce faz? (Esquerda/Direita)" << endl;
            cout << "1. Esquerda" << endl;
            cout << "2. Direita" << endl;
            cin >> escolha;
            cout << "\n";

            //caminho 2
            switch (escolha) {
                //caminho 2 esquerda
            case 1://Esquerda linha 154
                cout << "Voce decide continuar pelo corredor a esquerda e percebe alguns morcegos voando e ao fundo do corredor algum objeto brilhando. O que voce decide fazer?" << endl;
                cout << "1. Continuar Explorando" << endl;
                cout << "2. Voltar para a Guilda" << endl;
                cout << "\n";
                cin >> escolha;
                cout << "\n";

                //Caaminho 3
                switch (escolha){
                    //caminho 3
                case 1://continuar explorando linha 165
                    cout << "Voce encontra um bau, mas quando tenta abrir, ele te ataca e voce acaba perdendo 10 de vida. Sua vida atual: " << endl;
                    vida -= 10;
                    cout << "Essa é sua vida atual : " << vida << endl;
                    cout << "O que voce decide fazer?" << endl;
                    cout << "1. Atacar" << endl;
                    cout << "2. Tentar Fugir" << endl;
                    cin >> escolha;
                    cout << "\n";

                    //Caminho 4
                    switch (escolha) {
                    case 1: //Atacar linha 178
                        cout << "Voce derrota o bau e recebe mais um nivel, aumentando suas habilidades em todos os aspectos!" << endl;
                        nivel += 1;
                        ataque += 2;
                        defesa += 2;
                        agilidade += 2;
                        magia += 2;
                        vida += 2;

                        break;
                        //caminho 4
                    case 2: //Tentar Fugir linha 178

                        break;

                    default://caminho 4 default
                        cout << "Escolha novamente Entre : (1) e (2)!" << endl;
                        return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
                        break;
                    }


                    break;
                    //caminho 3
                case 2://voltar para guilda linha 166
                    cout << "Infelizmente, voce tenta fugir, mas os portoes do castelo estao trancados!!" << endl;
                    cout << "Voce acaba morrendo pela maldicao do castelo." << endl;
                    cout << "" << endl;
                    cout << "Narrador : Otima tentativa " << nome << " ,tente outro caminho." << endl;
                    return 1;//Retornar == 1, fim de caminho.
                    //fim 2
                    break;
                    //caminho 3 default
                default:
                    cout << "Escolha novamente Entre : (1) e (2)!" << endl;
                    return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
                    break;
                }


                break;
                //caminho 2 direita
            case 2://Direita linha 155
                cout << "Voce decide entrar pela porta enferrujada a direita e se depara com dois esqueletos. Um deles possui uma espada e o outro um cajado. Qual voce decide atacar primeiro?" << endl;
                cout << "1. Espada" << endl;
                cout << "2. Cajado" << endl;
                cout << "\n";
                cin >> escolha;
                cout << "\n";

                //Caminho 3
                switch (escolha){
                case 1://Espada linha 207
                    cout << "Voce derrota os dois esqueletos, mas perde 10 de vida. Sua vida atual: " << endl;
                    vida -= 10;
                    cout << "Voce tambem recebe mais um nivel, aumentando suas habilidades em todos os aspectos!" << endl;
                    nivel += 1;
                    ataque += 2;
                    defesa += 2;
                    agilidade += 2;
                    magia += 2;
                    vida += 2;


                    break;
                case 2://Cajado linha 208
                    cout << "Infelizmente, voce tenta atacar o esqueleto com cajado e o esqueleto com espada acaba te acertando e te derrotando! (Tente outro caminho)" << endl;



                    break;
                default:
                    cout << "Escolha novamente Entre : (1) e (2)!" << endl;
                    return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
                    break;
                }


                break;
                //caminho 2 default
            default:
                cout << "Escolha novamente Entre : (1) e (2)!" << endl;
                return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
                break;
            }
            //caminho 1 recusar
            break;
        case 2://Recusar linha 142
            cout << "Optando por nao aceitar a missao, voce decide continuar sua jornada em busca de outras aventuras e misterios." << endl;
            cout << "" << endl;
            cout << "Narrador : Otima tentativa " << nome << " ,tente outro caminho." << endl;
            return 1;//Retornar == 1, fim de caminho.
            //fim 1
            break;
            //caminho 1 default
        default:
            cout << "Escolha novamente Entre : (1) e (2)!" << endl;
            return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
            break;
        }


    return 0;
}