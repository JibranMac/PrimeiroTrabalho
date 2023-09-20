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
    int ataque = 2;
    int defesa = 2;
    int agilidade = 2;
    int magia = 2;
    int vida = 100;
    int moedaBronze = 60;
    int moedaPrata = 25;
    int moedaOuro = 1;

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
    cout << "Voce Possui :" << moedaBronze << ", de Bronze!" << endl;
    cout << "Voce Possui :" << moedaPrata << ", de Prata!" << endl;
    cout << "Voce Possui :" << moedaOuro << ", de Ouro!" << endl;
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
                    cout << "O que voce decide fazer?" << endl;
                    cout << "1. Atacar" << endl;
                    cout << "2. Tentar Fugir" << endl;
                    cin >> escolha;
                    cout << "\n";

                    //Caminho 4
                    switch (escolha) {
                    case 1: //Atacar linha 178
                        cout << "Com um pouco de facilidade voce avista uma pilastra quase caindo e com um pouco de estrategia voce atrai o bau proxima a ela e ataca com todo sua forca. Assim, a pilastra acaba caindo em cima do monstro!!!!" << endl;
                        cout << "Ao cair o monstro se desfaz, dropando algumas coisas!" << endl;
                        cout << "O bau dropa 2 moedas de ouro e 20 de prata como tambem mais 1 nivel, aumentando suas habilidades em todos os aspectos!(2)" << endl;
                        nivel += 1;
                        ataque += 2;
                        defesa += 2;
                        agilidade += 2;
                        magia += 2;
                        vida += 2;
                        moedaPrata += 20;
                        moedaOuro += 2;

                        cout << "" << endl;
                        cout << "Habilidades :" << endl;
                        cout << "" << endl;
                        cout << "Nivel: " << nivel << endl;
                        cout << "Ataque: " << ataque << endl;
                        cout << "Defesa: " << defesa << endl;
                        cout << "Magia: " << magia << endl;
                        cout << "Agilidade: " << agilidade << endl;
                        cout << "Vida: " << vida << endl;
                        cout << "Voce Possui: " << moedaPrata << ", de Prata!" << endl;
                        cout << "Voce Possui: " << moedaOuro << ", de Ouro!" << endl;
                        cout << "" << endl;
                        cout << "Logo apos, voce avista de longe um Boss do castelo protegendo uma fonte de luz brilhante e vermelha, como se estivesse carregando algo." << endl;
                        cout << "O que voce faz?" << endl;
                        cout << "1. Atacar de Frente o Boss!" << endl;
                        cout << "2. Analisar a sala." << endl;
                        cout << "3. Procura um local para descansar." << endl;
                        cin >> escolha;
                        cout << "" << endl;



                        //switch



                        break;
                        //caminho 4
                    case 2: //Tentar Fugir linha 178
                        cout << "Ao se assustar com o bau, voce comeca desesperadamente a correr pelo castelo!" << endl;
                        cout << "Voce consegue despistar o bau porem, acaba diminuindo suas habilidades em todos os aspectos e algumas moedas!(-2)." << endl;

                        ataque -= 2;
                        defesa -= 2;
                        agilidade -= 2;
                        magia -= 2;
                        vida -= 2;
                        moedaPrata += 10;
                        moedaBronze += 15;

                        cout << "" << endl;
                        cout << "Habilidades :" << endl;
                        cout << "" << endl;
                        cout << "Nivel: " << nivel << endl;
                        cout << "Ataque: " << ataque << endl;
                        cout << "Defesa: " << defesa << endl;
                        cout << "Magia: " << magia << endl;
                        cout << "Agilidade: " << agilidade << endl;
                        cout << "Vida: " << vida << endl;
                        cout << "Voce Possui: " << moedaBronze << ", de Bronze!" << endl;
                        cout << "Voce Possui: " << moedaPrata << ", de Prata!" << endl;
                        cout << "" << endl;
                        cout << "Porem, mesmo com uma pessima visibilidade voce se deslubra com um botao a sua frente e a uma escadaria tambem, o que voce faria?" << endl;
                        cout << "1. Apertar Botao" << endl;
                        cout << "2. Subir Escadaria" << endl;
                        //switch

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
                cin >> escolha;
                cout << "" << endl;

                //Caminho 3
                switch (escolha){
                    //caminho 3 espada
                case 1://Espada linha 207
                    cout << "Com sua destreza voce acaba bloqueando o primeiro ataque do mosntro e dando um golpe direto no primeiro esqueleto o derrotando, porem recebeu um ataque em suas costas do esqueleto com o cajado de magia" << endl;
                    cout << "Porem, uma flecha nao pode te parar e assim voce acerta com tudo outro golpe sendo totalmente fatal!!" << endl;
                    cout << "Voce derrota os dois esqueletos, mas perde 10 de vida sua vida atual." << endl;
                    cout << "" << endl;
                    vida -= 10;
                    cout << "Ao derrotas os esqueletos voce recebe 10 moedas de prata e tambem, um nivel de habilidade que aumentando suas habilidades em todos os aspectos!(+2)" << endl;
                    nivel += 1;
                    ataque += 2;
                    defesa += 2;
                    agilidade += 2;
                    magia += 2;
                    vida += 2;
                    moedaPrata += 10;

                    cout << "" << endl;
                    cout << "Habilidades :" << endl;
                    cout << "" << endl;
                    cout << "Nivel: " << nivel << endl;
                    cout << "Ataque: " << ataque << endl;
                    cout << "Defesa: " << defesa << endl;
                    cout << "Magia: " << magia << endl;
                    cout << "Agilidade: " << agilidade << endl;
                    cout << "Vida: " << vida << endl;
                    cout << "Voce Possui: " << moedaPrata << ", de Prata!" << endl;
                    cout << "" << endl;
                    cout << "Voce acaba seguindo entre as salas com uma pessima visibilidade e se depara com uma enorme porta, porem voce consegue ver entre a fresta da porta que existe um Boss, protegendo um cristal que emana uma luz vermelha." << endl;
                    cout << "O que voce fara?" << endl;
                    cout << "1. Atacar de Frente o Boss!" << endl;
                    cout << "2. Analisar a sala e ver possivei armadilhas." << endl;
                    cout << "3. Voltar para outro caminho." << endl;
                    //switch

                    break;
                    //caminho 3 cajado
                case 2://Cajado linha 208
                    cout << "Infelizmente, voce tenta atacar o esqueleto que possui o cajado e o esqueleto com espada acaba te acertando e te cortando ao meio!" << endl;
                    cout << "Voce foi morto por um esqueleto!" << endl;
                    cout << "" << endl;
                    cout << "Narrador : Otima tentativa " << nome << " ,tente outro caminho." << endl;
                    return 1;//Retornar == 1, fim de caminho.
                    //fim 3
                    break;
                default://caminho 3 default
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

/*
História-Interativa
Data de entrega: 25/09/2023 (até 22:30) – Enviar no Ava Univali
Modalidade: em GRUPO de 4 ou 5 pessoas (atenção sobre a apresentação)
Descrição:
Uma história-interativa é muito similar a um livro-jogo (também conhecido como "aventura solo"). 
O livro-jogo é uma obra de ficção, que permite que o leitor participe da história, fazendo escolhas 
eficazes (extraído da Wiki).
Esse modelo de conteúdo é experimentado em diferentes plataformas, por exemplo, nas séries e 
filmes interativos disponíveis na Netflix: https://help.netflix.com/pt/node/62526. 
Funcionamento: 
Em cada página ou trecho do livro, há uma parte da história sendo contada. Sempre se começa pela 
página ou trecho 1. Depois dessa leitura introdutória, em que o leitor já é colocado como personagem principal 
da história, são oferecidas algumas opções a ele sobre o rumo que ele deseja ter em sua aventura. Cada uma 
dessas escolhas direciona o jogador para outro trecho específico, e ele deve pular diretamente para esse trecho
(ignorando todos os trechos intermediários ou páginas entre eles). Por exemplo, a parte 1 pode terminar assim:
 Se quiser seguir o velho camponês para ver aonde ele vai, vá para a parte 3.
 Se preferir voltar para casa, vá para a parte 15.
 Se quiser sentar e esperar, vá para a parte 71.
Assim o livro progride. É muito comum que o jogador possa "vencer" a aventura sem passar por todos 
os trechos. Isso acontece porque cada escolha do jogador leva para consequências diferentes, então ele passa 
por diferentes desafios para completar sua aventura (podendo em alguns casos, ter diferentes finais para ela). 
Normalmente seria necessário jogar várias vezes o mesmo livro-jogo para passar por todas as situações 
descritas, escolhendo todas as opções possíveis.
É comum também que essas escolhas sejam influenciadas pelos itens ou habilidades que o personagem 
escolheu em sua criação, ou mesmo durante a aventura. Em determinado momento, o jogador pode se deparar 
com uma situação como a seguinte:
 Se você tiver o item mágico "Olho do Falcão", vá para a parte 210.
 Se você não tiver o item, mas possui a perícia "Rastreamento", vá para a parte 19.
 Caso contrário, vá para a parte 101.
Por isso, seu personagem só conseguirá passar por determinadas partes de uma aventura dependendo 
das características escolhidas em sua criação, ou dos itens ou habilidades que ganhou durante a própria 
aventura. Isso aumenta bastante a diversão uma vez que permite que o jogo tenha uma vida útil maior, mas 
não acaba com a linearidade - uma vez que várias partes do livro são usadas várias vezes pelos diferentes 
"caminhos" que sua aventura toma

O Trabalho
Criar o roteiro da história interativa
Para desenvolver esse trabalho você deve criar um roteiro para sua história, nele você deverá contar a
história e destacar as decisões que o jogador poderá tomar e suas consequências.
Para criar o roteiro, conte a história que você deseja, como se fosse um exercício de literatura, ou seja,
você deve escrever sua história e as decisões importantes que o personagem principal deverá tomar e elabore um
Fluxograma que ilustre os desdobramentos da sua história.
Programar a sua história
Nesse passo você deve criar um programa em linguagem de programação C/C++ que deverá
contar a história prevista no roteiro utilizando comandos de escrita/saída (cout).
Para que o personagem principal possa escolher o rumo que sua história, ou seja, interagir com a
história, o jogo deverá permitir que o jogador insira suas decisões com comandos de leitura/entrada (cin).
Essas entradas deverão ser utilizadas para decidir o rumo que a história irá tomar, para isso utilize as técnicas
de desvio condicional (if ou if..else) aprendidas em aula, conforme exemplo na Figura 1:
Figura 1
O enredo poderá ser alterado por decisões anteriores ou objetos encontrados pelo caminho, para isso
crie variáveis para registrar algumas dessas decisões, conforme Figura 2:
Figura 2
Requisitos da história
O jogo deverá possuir desvios condicionais para permitir ao usuário escolher seu próprio caminho na
história.
O jogo também deverá ter variáveis que representarão objetos encontrados ou decisões de enredo
referente as escolhas feitas pelo jogador. Essas variáveis poderão alterar o curso da história, como no exemplo
da Figura 2.
Lembrem-se que, além das técnicas de programação, a criatividade também será avaliada

Apresentação em Grupo – Avaliação Individual:
O grupo deverá apresentar o trabalho na aula do dia da entrega. Todos os alunos devem apresentar alguma
parte e expressar a sua contribuição para o trabalho. Cada grupo terá um líder. O líder do grupo será o
responsável por validar o que cada membro do grupo fez/contribuiu junto ao professor. Além disso, o líder é o
responsável por manter a comunicação com o grupo para indicar o status do trabalho, o que já foi feito e o que
está faltando, enquanto o trabalho não é concluído.
A apresentação deve evidenciar que todos os requisitos foram cumpridos:
• Roteiro elaborado;
• Fluxograma que representa o roteiro;
• Código-fonte que implementa o roteiro e é condizente com o fluxograma, possuindo:
o Entrada e Saída de informações/dados (cin e cout);
o Variáveis para controlar o estado do programa de acordo com as interações do usuário (podem
ser dos tipos: int, float, char, double, string e bool)
o Condicionais (if, if..else, switch) para os diferentes caminhos que a narrativa pode tomar.
• Execução/demonstração do funcionamento da história interativa.
Somente com a validação do líder é que os demais membros do grupo obterão a nota máxima sobre a
participação no projeto.
O professor poderá perguntar qualquer parte do trabalho dirigindo a pergunta a qualquer integrante.
Critérios de Avaliação:
1. Elaboração do roteiro da história (criatividade) = 20% da nota.
2. Elaboração do fluxograma da história (correta organização do fluxograma) = 20%.
3. Organização e clareza do código-fonte (correta indentação, bons nomes de variáveis, correto
aninhamento) = 10% da nota.
4. Funcionamento correto conforme a especificação = 30% da nota.
5. Apresentação do trabalho = 20% da nota.
Obs.:
• Todas as notas relativas ao código dependem do desempenho na apresentação. Sem apresentação, o
acadêmico terá nota ZERO.
• O trabalho NÃO pode ser feito individualmente. Caso o grupo não possua 4 ou 5 integrantes, terá 1
ponto descontado na nota.
• Não pode ser usado o comando “go to” (será descontado 3 pontos, se for usado).
• Não serão aceitos trabalhos com outras estruturas de programação ainda não estudadas na disciplina,
tais como: laços de repetição, vetores, matrizes, sub-rotinas, structs, classes, etc. Trabalhos com essas
estruturas terão nota ZERO.
Trabalhos acadêmicos em grupo são aqueles em que todos os alunos participam de todas as partes, pois
precisam aprender e contribuir em todos os assuntos. Nesse primeiro momento, deve-se evitar a divisão de
tarefas (ex. aluno 1 faz o roteiro, aluno 2 faz o fluxograma, aluno 3 faz o código, aluno 4 a apresentação).
Conheçam todas as partes do trabalho como se tivessem que apresentar tudo sozinhos/as.
A nota de cada acadêmico será relativa à sua participação em cada critério de avaliação (de 1 a 5) que será
validada pelo líder. Então, por exemplo, se o grupo tirar nota máxima no roteiro (20%), mas o aluno X não
participou da elaboração do roteiro, o aluno X não terá os 20% da nota
*/