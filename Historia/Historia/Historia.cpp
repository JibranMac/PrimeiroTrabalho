/*
SWITCH é um comando em C que serve para fazer testes condicionais, testando igualdades, 
onde podemos usar várias opções de comparações. Assim como o nosso conhecido par IF ELSE, 
o comando switch também serve para fazer testes condicionais.

switch (expressão)
{
   case value1:
		// código caso expressão
		// seja igual a value1

   case value2:
		// código caso expressão
		// seja igual a value2

   case value3:
		// código caso expressão
		// seja igual a value3

   default:
		// código caso expressão
		// não seja nenhum case acima
}

A instrução if também é conhecida como instrução de tomada de decisão,
pois ela faz a tomada de decisão com base em determinada condição ou expressão.

if (teste){
   // Código caso o
   // teste seja TRUE
}
else {
   // Código caso o
   // teste seja FALSE
}
*/

#include <iostream>
#include <string> //GETLINE .Extrai cadeias de caracteres do fluxo de entrada linha por linha.

using namespace std;

int main() {

	// Variaveis do personagem
	int escolha;
	string nome;
	int raca;
	int classe;
	string genero;
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
	//Tutorial
	cout << "" << endl;
	cout << "--Somente digitar numeros quando for descrito--" << endl;
	cout << "" << endl;
	// Escolha de Personagem
	cout << "A Maldicao do Castelo!" << endl;
	cout << "" << endl;
	cout << "Personalizacao de Personagem" << endl;
	cout << "" << endl;

	// Nome
	cout << "Digite o nome do seu Personagem: " << endl;
	cout << "" << endl;
	getline(cin, nome);
	cout << "" << endl;

	// Idade
	cout << "Qual sua idade? " << endl;
	cout << "" << endl;
	cin >> idade;
	cout << "" << endl;

	// Genero (M/F)
	cout << "Qual seu Genero? " << endl;
	cout << "1. Masculino" << endl;
	cout << "2. Feminino" << endl;
	cout << "" << endl;
	cin >> escolha;
	cout << "" << endl;

	if (escolha == 1) {
		genero = "Masculino";
	}
	else if (escolha == 2) {
		genero = "Feminino";
	}
	else {
		cout << "Escolha Novamente seu Genero!" << endl;
		return 0;
	}

	// Raca
	cout << "Qual a raca do seu personagem: " << endl;
	cout << "1. Humano" << endl;
	cout << "2. Anao" << endl;
	cout << "3. Elfo" << endl;
	cout << "4. Orc" << endl;
	cout << "" << endl;
	cin >> raca;
	cout << "" << endl;

	//Escolha de switch para facilitar mas tambem poderia se usar função if.
	switch (raca) {
	case 1://Humano
		agilidade += 5;
		magia += 5;
		defesa += 5;
		ataque += 5;
		break;
	case 2://Anao
		agilidade += 0;
		magia += 5;
		defesa += 10;
		ataque += 5;
		break;
	case 3://Elfo
		agilidade += 5;
		magia += 10;
		defesa += 0;
		ataque += 5;
		break;
	case 4://Orc
		agilidade += 0;
		magia += 0;
		defesa += 5;
		ataque += 15;
		break;
	default://Se caso não for nenhuma opção
		cout << "Escolha Novamente sua Raca!" << endl;
		return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
		break;
	}

	// Classe
	cout << "Qual seria sua classe: " << endl;
	cout << "1. Mago" << endl;
	cout << "2. Arqueiro" << endl;
	cout << "3. Guerreiro" << endl;
	cout << "4. Escudeiro" << endl;
	cout << "" << endl;
	cin >> classe;
	cout << "" << endl;

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
	default://Se caso não for nenhuma opção
		cout << "Escolha Novamente sua Classe!" << endl;
		return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
		break;
	}

	//Mostrar habilidades Iniciais
	cout << "" << endl;
	cout << "Habilidades" << endl;
	cout << "" << endl;
	cout << "Nivel: " << nivel << endl;
	cout << "Ataque: " << ataque << endl;
	cout << "Defesa: " << defesa << endl;
	cout << "Magia: " << magia << endl;
	cout << "Agilidade: " << agilidade << endl;
	cout << "Vida: " << vida << endl;
	cout << "Voce Possui :" << moedaBronze << ", de Bronze!" << endl;
	cout << "Voce Possui :" << moedaPrata << ", de Prata!" << endl;
	cout << "Voce Possui :" << moedaOuro << ", de Ouro!" << endl;
	cout << "" << endl;

	// Início da história
	cout << "A Maldicao do Castelo! (CAPITULO 1)" << endl;
	cout << "" << endl;
	cout << "Narrador : Voce acaba de chegar em uma cidade chamada Berserk, a procura de novas aventuras." << endl;
	cout << "" << endl;
	cout << "Bem vindo, " << nome << " voce chegou a guilda dos aventureiros de Berserk, sinta-se avontade para se cadastrar e escolher suas missoes!" << endl;
	cout << "Enquanto voce olhava as missoes para conseguir algum dinheiro um mensageiro real chega a guilda com uma proposta intrigante..." << endl;
	cout << "Ele informa que um castelo misterioso nas proximidades foi descoberto e esta assombrado por uma terrivel maldicao e a guilda esta em busca de aventureiros para investigar e quebrar a maldicao." << endl;
	cout << "" << endl;
	cout << "Recompesas : Itens Magicos de alta classe, 500 moedas de Ouro, Tomos de aprendizado e tambem a isencao de impostos." << endl;
	cout << "" << endl;
	cout << "Voce aceita esta missao? " << endl;
	cout << "1. Aceitar" << endl;
	cout << "2. Recusar" << endl;
	cout << "" << endl;
	cin >> escolha;
	cout << "" << endl;

	//caminho 1 aceitar
	switch (escolha) {
	case 1://Aceitar linha 141
		cout << "Voce aceita a missao e parte em direcao ao castelo, preparado para enfrentar os desafios que aguardam." << endl;
		cout << "" << endl;
		cout << "A medida que voce se aproxima do castelo, uma sensacao de frieza e trevas toma conta do ambiente. Voce entra nas regioes do castelo!" << endl;
		cout << "A escuridao e quase total, mas voce pode enxergar fracamente com seu lampiao." << endl;
		cout << "Voce comeca explorando. A sua esquerda, ha um corredor iluminado fracamente por uma tocha. A sua direita, uma porta antiga e enferrujada." << endl;
		cout << "O que voce faz?" << endl;
		cout << "1. Esquerda" << endl;
		cout << "2. Direita" << endl;
		cout << "" << endl;
		cin >> escolha;
		cout << "" << endl;
		
		//caminho 2
		switch (escolha) {
			//caminho 2 esquerda
		case 1://Esquerda linha 154
			cout << "Voce decide continuar pelo corredor a esquerda e percebe alguns morcegos voando e ao fundo do corredor algum objeto brilhando. O que voce decide fazer?" << endl;
			cout << "1. Continuar Explorando" << endl;
			cout << "2. Voltar para a Guilda" << endl;
			cout << "" << endl;
			cin >> escolha;
			cout << "" << endl;

			//Caaminho 3
			switch (escolha) {
				//caminho 3
			case 1://continuar explorando linha 165
				cout << "Voce encontra um bau, mas quando tenta abrir, ele te ataca e voce acaba perdendo 10 de vida. Sua vida atual. " << endl;
				vida -= 10;
				cout << "Voce possui : " << vida << " de vida." << endl;
				cout << "O que voce decide fazer?" << endl;
				cout << "1. Atacar." << endl;
				cout << "2. Tentar Fugir." << endl;
				cout << "" << endl;
				cin >> escolha;
				cout << "" << endl;

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
					cout << "Logo apos, voce avista de longe um Boss do castelo protegendo um cristal de luz brilhante e vermelha, como se estivesse carregando uma grande forca de magia." << endl;
					cout << "O que voce faz?" << endl;
					cout << "1. Atacar de Frente o Boss!" << endl;//morre
					cout << "2. Analisar a sala." << endl;//vive
					cout << "3. Procura um local para descansar." << endl;//vive mas morre dps
					cout << "" << endl;
					cin >> escolha;
					cout << "" << endl;

					switch (escolha) {
					case 1://atac fren
						cout << "Ao tentar atacar de frente o boss, voce acaba caindo em varias armadilhas que estavam espalhadas pelo salao!" << endl;
						cout << "Que pena!, voce foi muito descuidado e acabou morrendo de forma horrivel, tente denovo," << nome << " !." << endl;
						cout << "" << endl;
						return 1;

						break;

					case 2://analisar
						cout << "Ao analisar o salao percebe-se que tem varias armadilhas espalhadas, dificultando seu caminho!" << endl;
						cout << "Sabendo disso voce decide usar as armadilhas ao seu favor contra o boss, o atraindo e fazendo-o cair em todas elas, e assim o matando!" << endl;
						cout << "Apos a derrota do boss voce vai em direcao ao cristal e tenta destrui-lo, porem ao destrui-lo uma grande energia e liberada causando uma explosao, explosao essa que faz com que varios monstros sejam atraidos pelo alto barulho e vao em sua direcao" << endl;
						cout << "Voce, " << nome << " ,ja ferido por conta da explosao tem 3 opcoes" << endl;
						cout << "" << endl;
						cout << "1. Ficar e lutar contra os monstros" << endl;
						cout << "2. Tentar correr" << endl;
						cout << "3. Se enconder" << endl;
						cout << "Decida-se!" << endl;
						cout << "" << endl;
						cin >> escolha;
						cout << "" << endl;

						//Uso do if para demonstrar como seria a formatação do codigo caso fosse usado!

						if (escolha == 1) {
							cout << "Por conta dos ferimentos voce nao consegue lutar contra os monstros e acaba morrendo!" << endl;
							cout << "Infelizmente, " << nome << " ,voce nao pensou no estado do seu corpo e tentou lutar" << endl;
							return 1;
						}
						if (escolha == 2) {
							cout << "Ao tentar correr voce avista um corredor com uma grande porta ao seu fim," << endl;
							cout << "Com esforco voce consegue chegar na porta e entrar antes que os monstros te alcancem, apos se acalmar voce olha a sua volta e percebe que voce esta em uma pequena sala onde tem um bau em seu centro!" << endl;
							cout << "Finalmente voce chegou na sala do tesouro!, com muita empolgacao voce o abre e ve que dentro do bau esta vazio, sua empolgacao se esvai e pensamentos vem a mente" << endl;
							cout << "Foi tudo em vao ?" << endl;
							cout << "Nao ha tesouro ?" << endl;
							cout << "o que eu faco agora?" << endl;
							cout << "sairei daqui vivo?" << endl;
							cout << "Ao refletir sobre sua situacao voce decide voltar e sair do castelo, com muito cuidado e calma voce consegue sair" << endl;
							cout << "Quando voce sai do castelo voce fica horrorizado com o que ve, tudo a sua volta esta destruido e o pouco que tinha de pe estava podre ou velho, apos passar horas investigando a redondeza voce finalmente percebe o que estava acontecendo!" << endl;
							cout << "Tinha se passsado anos e anos fora do castelo sendo que para voce foram somente algumas horas, se ajoelhando no chao com uma face triste, finalmente conheces a:" << endl;
							cout << "MALDICAO DO CASTELO" << endl;
						}
						if (escolha == 3) {
							cout << "Boa tentativa!," << nome << " ,alguns monstros conseguem sentir seu cheiro de sangue e assim voce acaba morrendo!" << endl;
						}

						break;
					case 3://local desc
						cout << "Ao decidir procurar um local para descansar antes da luta contra o boss voce, " << nome << " acaba baixando a guarda e morrendo por um esqueleto andarilho" << endl;
						cout << nome << " ,tente nao se descuidar da proxima!" << endl;
						return 1;
						break;
					}
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
					moedaPrata -= 10;
					moedaBronze -= 15;

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
					cout << "" << endl;
					cin >> escolha;
					cout << "" << endl;

					switch (escolha) {
					case 1://apertar botao
						cout << "Ao apertar o botao, as portas de onde voce esta sao trancadas e um gas venenoso começa a sair e ser despejado das paredes" << endl;
						cout << "Infelizmente, voce nao consegue resistir ao efeito do veneno e acaba SUCUMBINDO!!" << endl;
						cout << "" << endl;
						cout << "Narrador : Otima tentativa " << nome << " ,mas nao caia no veneno." << endl;
						return 1;
						break;
					case 2://subir escadaria
						cout << "Voce sobe as escadas cagado de medo, e a sua frente voce encontra um grande salao com um Boss no seu centro protegendo um grande cristal vermelho, cuja sua luz ilumina todo local!" << endl;
						cout << "O boss parece ter uma grande armadura e deve ter aproximadamente 3 metros de altura. Voce observa mais cuidadosamente e dentro da grande armadura nao existe nenhum ser!!!" << endl;
						cout << "Ele carrega um gigante poste de metal coberto de espinhos e tambem," << endl;
						cout << "o cristal parece carregar uma grande forca de magia, o que voce ira fazer?" << endl;
						cout << "1. Tentar destruir o Cristal." << endl;//vive
						cout << "2. Atacar de Frente o Boss!" << endl;//morre
						cout << "3. Procurar um outro caminho." << endl;//vive mas morre dps
						cout << "" << endl;
						cin >> escolha;
						cout << "" << endl;

						//caminho 5
						switch (escolha) {
						case 1://Tentar destruir o cristal //vive
							cout << "Voce observa bem o Boss, e encontra algum tipo de padrao em sua movimentacao," << endl;
							cout << "parece que a cada 5 voltas durante a sala em que ele da ele fica parado longe do cristal." << endl;
							cout << "Com um pouco de inteligencia voce usa sua furtividade para correr direto no cristal, desferindo um otimo golpe!" << endl;
							cout << "Voce consegue atacar o cristal e em poucos segundos ele explode em varios pedacos," << endl;
							cout << "porem o boss de sala comeca a vir ate voce preparado para te atacar com seu gigante poste de metal coberto de espinhos!!" << endl;
							cout << "o que voce decide?" << endl;
							cout << "1. Esquivar" << endl;// vive
							cout << "2. Atacar" << endl;//vive mas morre dps
							cout << "" << endl;
							cin >> escolha;
							cout << "" << endl;

							switch (escolha) {
							case 1://esquivar vive
								cout << "Voce esquiva do ataque se depara com uma rachadura em sua perna," << endl;
								cout << "como um contra ataque voce consegue destruir uma das pernas, porem algo comeca a acontecer!" << endl;
								cout << "O boss comeca a se transformar e canalizar um grande forca de poder, o que voce ira fazer?" << endl;
								cout << "1. Atacar" << endl;
								cout << "2. Correr" << endl;
								cin >> escolha;

								switch (escolha) {
								case 1:// atacar
									cout << "Enquanto o Boss se transformava voce desfere um ataque com toda sua forca na nuca do Boss, assim fazendo com que ele fosse derrotado!!" << endl;
									cout << "Parabens, " << nome << " voce conseguiu derrotar o Boss do Castelo Amaldicoado." << endl;
									cout << "Voce ganhou mais 20 moedas de ouro 42 de prata e 5 niveis de habilidade, aumentando todos os aspectos de suas habilidades.(+10)" << endl;

									nivel += 5;
									ataque += 10;
									defesa += 10;
									agilidade += 10;
									magia += 10;
									vida += 10;
									moedaPrata += 42;
									moedaOuro += 20;

									cout << "" << endl;
									cout << "Habilidades :" << endl;
									cout << "" << endl;
									cout << "Nivel: " << nivel << endl;
									cout << "Ataque: " << ataque << endl;
									cout << "Defesa: " << defesa << endl;
									cout << "Magia: " << magia << endl;
									cout << "Agilidade: " << agilidade << endl;
									cout << "Vida: " << vida << endl;
									cout << "Voce Possui: " << moedaOuro << ", de Ouro!" << endl;
									cout << "Voce Possui: " << moedaPrata << ", de Prata!" << endl;
									cout << "" << endl;

									cout << "Apos a morte do Boss voce percebe que uma grande porta se abre ao fundo, contendo um enorme bau dourado ainda." << endl;
									cout << "Com muita empolgacao voce sai correndo diretamente para abrir o tesouro! Abrindo o bau voce entra em um estado de choque, o bau esta vazio e alguns pensamentos vem a mente!!" << endl;
									cout << "Qual o proposito disso?" << endl;
									cout << "Como irei sair da qui?" << endl;
									cout << "Como pode! Como pode! Como Pode!!!" << endl;
									cout << "" << endl;
									cout << "Voce comeca a se desesperar cada vez mais, e o castelo comeca a tomar conta de sua mente!" << endl;
									cout << "Conformado com a situacao voce comeca a sair do castelo, POREM esse nao era mais o reino ou a cidade de Bersek que voce conheceu." << endl;
									cout << "Voce fica horrorizado, vendo tudo a sua volta destruido e em ruinas, a cidade com que voce viu da ultima vez estava completa de vegetacao!" << endl;
									cout << "Tinha se passsado anos e anos fora do castelo sendo que para voce foram somente alguns dias, e se ajoelhando no chao com uma face triste, finalmente conheces a : " << endl;
									cout << "MALDICAO DO CASTELO" << endl;

									break;
								case 2:// correr
									cout << "Voce comeca a correr do local mas percebe esta em um local sem volta ou saida sua unica opcao e lutar!" << endl;
									cout << "Bravamente voce encara o Boss e com toda sua forca voce tenta atacar, porem a transformacao e finalizada e infelizmente voce nao e mais pareo para ele! " << endl;
									cout << nome << ", voce e apunhalado em somente um golpe extremamente poderoso, fazendo com que voce morra e o local seja destruido junto ao Boss!" << endl;
									cout << "" << endl;
									cout << "Narrador : Otima tentativa, tente outro caminho!" << endl;
									cout << "" << endl;
									return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
									break;

								default://caso nao escolha nenhuma alternativa
									cout << "Escolha novamente Entre : (1) e (2)!" << endl;
									return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
									break;
								}

								break;
							case 2://atacar vive mas morre dps
								cout << "Voce consegue desferir um grande ataque no Boss fazendo com que ele seja atordoado," << endl;
								cout << "mas logo em seguida voce e atacado perdendo metade de sua vida" << endl;
								vida -= 50;
								cout << "Voce possui : " << vida << ", pontos de vida!" << endl;
								cout << "Com um o resto de sua forca voce decide fazer uma ultima investida." << endl;
								cout << "1. Carregar habilidade especial!" << endl;
								cout << "2. Correr do Boss" << endl;
								cout << "" << endl;
								cin >> escolha;
								cout << "" << endl;

								switch (escolha) {
								case 1://carregar habilidade especial
									cout << "O boss vendo voce parado te ataca com muita facilidade com toda sua força e acaba te matando!" << endl;
									cout << nome << ", infelizmente voce nao possui nenhuma habilidade especial." << endl;
									cout << "Narrador : Otima tentativa, tente outro caminho!" << endl;
									cout << "" << endl;
									return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
								case 2://correr do boss
									cout << "Voce tenta correr do Boss, porem tropeca e caba rolando escadaria a baixo fraturando sua coluna e perdendo sua movimentacao!" << endl;
									cout << "Infelizmente, voce no chao sofre um ultimo golpe fazendo com que voce acabe morrendo!" << endl;
									cout << "Narrador : Otima tentativa " << nome << ", tente outro caminho!" << endl;
									cout << "" << endl;
									return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
									break;
								default://caso nao escolha nenhuma alternativa
									cout << "Escolha novamente Entre : (1) e (2)!" << endl;
									return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
									break;
								}
								break;
							default://caso nao escolha nenhuma alternativa
								cout << "Escolha novamente Entre : (1) e (2)!" << endl;
								return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
								break;
							}
							break;
							//caminho 5
						case 2://Atacar de frente o Boss
							cout << "Com muita coragem voce decide atacar o Boss!" << endl;
							cout << "Voce consegue desferir uma otima sequencia de ataques e causa um grande dano a ele, porem voce acaba tropeçando no desnivel do chao " << endl;
							cout << "e o monstro sem do alguma levanta seu grande poste de metal e ataca com toda sua forca!" << endl;
							cout << "" << endl;
							cout << "Infelizmente, voce nao consegue resistir e acaba esmagado no chao!" << endl;
							cout << "Narrador : Otima tentativa " << nome << " ,tente outro caminho." << endl;
							return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
							cout << "" << endl;

							break;
							//caminho 5
						case 3://Procura outro caminho
							cout << "Voce decide procurar outro caminho para seguir, porem descendo as escadas uma especie de armadilha se ativa fazendo com que voce caia em um outro local do castelo!" << endl;
							cout << "Esse local esta completamente destruido e cheio de musgo por todas as paredes, como se estivesse abandonado por muito tempo." << endl;
							cout << "Voce comeca explorando esse local cuidadosamente e se depara com dois caminhos, qual voce decide passar?" << endl;
							cout << "1. Uma pequena janela." << endl;
							cout << "2. Um salao redondo!" << endl;
							cout << "" << endl;
							cin >> escolha;
							cout << "" << endl;

							//caminho 6 
							switch (escolha) {
							case 1://Pequena janela
								cout << "Voce se joga na janela sem ver o que poderia ter do outro lado!" << endl;
								cout << "" << endl;
								cout << "Infelizmente, voce acaba caindo de um precipicio e nao consegue sobrevivem!" << endl;
								cout << "Narrador : Otima tentativa " << nome << " ,tente outro caminho!" << endl;
								return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
								break;
							case 2://Um salao redondo
								cout << "Voce entra no salao redondo despreocupado, porem as portas se fecham e uma orda de monstros comecas a aparecer ao seu redor!" << endl;
								cout << "Zumbis, Esqueletos, Aranhas atacam voce com toda sua ferosidade e infelizmente voce e desintegrado pelos monstros!" << endl;
								cout << "Narrador : Otima tentativa " << nome << " ,tente outro caminho!" << endl;
								return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
								break;
							default://caso nao escolha nenhuma alternativa
								cout << "Escolha novamente Entre : (1) e (2)!" << endl;
								return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
								break;
							}
							break;
						default://caso nao escolha nenhuma alternativa
							cout << "Escolha novamente Entre : (1), (2) e (3)!" << endl;
							return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
							break;
						}
						break;//caminho 4
					default:
						cout << "Escolha novamente Entre : (1) e (2)!" << endl;
						return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
						break;
					}
					break;//caminho 3
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
			cout << "" << endl;
			cin >> escolha;
			cout << "" << endl;

			//Caminho 3
			switch (escolha) {
				//caminho 3 espada
			case 1://Espada linha 207
				cout << "Com sua destreza voce acaba bloqueando o primeiro ataque do monstro e dando um golpe direto no primeiro esqueleto o derrotando, porem recebeu um ataque em suas costas do esqueleto com o cajado de magia" << endl;
				cout << "Porem, este ataque nao pode te parar e assim voce acerta com tudo outro golpe sendo totalmente fatal!!" << endl;
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
				cout << "1. Atacar de Frente o Boss!" << endl;//vive 
				cout << "2. Analisar a sala e ver possivei armadilhas." << endl;//vive mas morre
				cout << "3. Voltar para outro caminho." << endl;//morre
				cout << "" << endl;
				cin >> escolha;
				cout << "" << endl;

				switch (escolha) {
				case 1:// atac frent
					//switch
					cout << "Voce ataca diretamente o Boss na esperanca de conseguir infrigir algum dano, e definitivadamente voce consegue tirar uma boa parte de sua armadura, bem onde estava desgastada!!" << endl;
					cout << "Em um contra golpe, voce acaba sofrendo uma perda de 50% de sua vida e sendo jogado longe com o impacto. " << endl;
					vida = vida / 2;
					cout << "Porem voce nao desiste e se levanta bravamente (o tempo parece parar para voce). Em um piscar de olhos voce descobre possivei estrategias de ataque! " << endl;
					cout << "" << endl;
					cout << "O que voce fara?" << endl;
					cout << "1. Correr e usar uma pilastra meio caida para se impulsionar e desferir seu golpe!" << endl;
					cout << "2. Utilizar o local para fazer uma especie de armadilha. " << endl;
					cout << "" << endl;
					cin >> escolha;
					cout << "" << endl;

					switch (escolha) {
					case 1://Correr e usar uma pilastra meio caida para se impulsionar e desferir seu golpe!
						cout << "Voce com o sangue a flor da pele corre, corre com tanta adrenalina que seu ataque parece ser totalmente fatal!" << endl;
						cout << "Quando voce saltou diretamente para a cabeca do Boss, passa alguns flashbacks em sua mente, sobre toda sua trajetoria e todos seus desafios! " << endl;
						cout << "Antes de chegar na cidade de Berserk " << nome << ", era um general que avia traido seu reino por dinherio." << endl;
						cout << "Voce era imcomparavel comparado aos outros aventureiros e guerreiros do seu reino seu nivel de habilidade era nivel 10 quase o maximo!" << endl;
						cout << "" << endl;

						nivel += 10;
						ataque += 41;
						defesa += 41;
						agilidade += 41;
						magia += 41;
						vida += 54;
						moedaPrata += 65;
						moedaOuro += 144;

						cout << "" << endl;
						cout << "Antigas Habilidades:" << endl;
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

						cout << "Porem, voce perdeu toda sua forca de vontade, toda sua forca apos uma maldicao ser cravada em sua alma!" << endl;
						cout << "A fim de sua aventura com tua sua destreza e rancor do seu passado voce arranca a cabeca do BOSS!!" << endl;
						cout << "" << endl;
						cout << "Enquanto voce saia do castelo, voce chorava, chorava por todos os erros do seu passado e o porque abandonou sua vida." << endl;
						cout << "Na saida do castelo, segurando a cebeca do boss em suas maos voce se depara com algo estranho." << endl;
						cout << "A paisagem nao era a mesma de dias atras, o terreno estava todo destruido a selva tinha devorado o caminho de onde voce tinha vindo!" << endl;
						cout << "Conforme voce chegava a cidade de Berserk voce se toca da sua situacao, algo inacreditavel, voce cai de joelhos no chao desesperado e em choque!" << endl;
						cout << "O tempo dentro do castelo era diferente do tempo normal, tinham se passado anos, decadas, seculos? voce nao sabia a resposta porem estava preso em um tempo de onde nao veio!" << endl;
						cout << "Essa e a : MALDICAO DO CASTELO!" << endl;

						break;
					case 2://Utilizar o local para fazer uma especie de armadilha.
						cout << "Voce decide utilizar as armadilhas do local ao seu favor, voce faz todo o possivel para ativar nos momentos exatos da passagem do Boss!" << endl;
						cout << "Apos algumas tentativas, voce consegue infringir algum dano a ele porem nada efetivo e como uma ultima medida voce vislumbra um lustre enorme pindurado no teto." << endl;
						cout << "Como uma ultima forca voce consegue arrebendar o lustre fazendo cair exatamente em cima do Boss sendo totalmente efetivo, porem algo acontece no mesmo momento!" << endl;
						cout << "Isso acaba destruindo o andar inteiro por causa de uma enorme explosao causada pelo Boss quando morreu, isso faz com que voce seja soterrado vivo sem nenhuma chance de sobrevivencia " << endl;
						cout << "Narrador : Otima tentativa voce estava quase la " << nome << " ,tente outro caminho!" << endl;
						return 1;//Retornar == 1, fim de caminho.
						break;
					default://caso nao escolha nenhuma alternativa
						cout << "Escolha novamente Entre : (1), (2) e (3)!" << endl;
						return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
						break;
					}
					break;
				case 2:// analisar
					//switch
					cout << "Voce analisa a sala e se depara com diversos tipos de botoes no chao." << endl;
					cout << "Indiferente de sua habilidade voce entra na sala do Boss e comeca a utilizar todas as armadilhas!" << endl;
					cout << "Voce consegue Destruir um dos bracos dele, porem o ritmo da luta so estava aumentando e voce decide por fim fazer uma investida final." << endl;
					cout << "Voce avista duas oportunidades, qual voce escolheria?" << endl;
					cout << "1. Tentar atacar suas costas em um contra ataque!" << endl;
					cout << "2. Fazer uma investida final!" << endl;
					cout << "" << endl;
					cin >> escolha;
					cout << "" << endl;

					switch (escolha) {
					case 1://Tentar atacar suas costas em um contra ataque!
						cout << "Voce espera um ataque do Boss!" << endl;
						cout << "Voce rebece o ataque, porem nao consegue desviar e nem se defender fazendo com que voce perda seu equilibrio caindo no chao." << endl;
						cout << "Enquanto voce tentava levantar todo machucado, voce percebe ter perdido seu braco!" << endl;
						cout << "Infelizmente voce acaba morrendo antes mesmo do ultimo ataque do Boss!" << endl;
						cout << "Narrador : Otima tentativa voce estava quase la " << nome << " ,tente outro caminho!" << endl;
						return 1;//Retornar == 1, fim de caminho.
						break;
					case 2://Fazer uma investida final!
						cout << "Com toda sua forca voce faz sua ultima investida!" << endl;
						cout << "" << endl;
						cout << "Voce corre em direcao ao Boss com muita confianca e infelizmente voce tropeca e bate a cabeca com tudo em uma pilastra fazendo com que voce perdece a consiencia e o Boss desferisse um ultimo golpe em voce!" << endl;
						cout << "Narrador : Otima tentativa voce estava quase la " << nome << " ,tente outro caminho!" << endl;
						return 1;//Retornar == 1, fim de caminho.
						break;
					default://caso nao escolha nenhuma alternativa
						cout << "Escolha novamente Entre : (1) e (2)!" << endl;
						return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
						break;
					}
					break;
				case 3:// voltar outr cam
					cout << "Voce tenta voltar para outro caminho mas se depara com uma horda de monstros correndo atras de voce, voce consegue derrotar alguns porem aparecem mais e mais a medida que voce corre!" << endl;
					cout << "Infelizmente a quantidade de monstro era tao grande que voce acaba sendo derrotado de tanto lutar, pelo seu proprio cansaco!" << endl;
					cout << "Narrador : Otima tentativa " << nome << " ,tente outro caminho!" << endl;
					return 1;//Retornar == 1, fim de caminho.
					break;
				default://caso nao escolha nenhuma alternativa
					cout << "Escolha novamente Entre : (1), (2) e (3)!" << endl;
					return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
					break;
				}
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
			default://caso nao escolha nenhuma alternativa
				cout << "Escolha novamente Entre : (1) e (2)!" << endl;
				return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
				break;
			}
			break;
			//caminho 2 default
		default://caso nao escolha nenhuma alternativa
			cout << "Escolha novamente Entre : (1) e (2)!" << endl;
			return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
			break;
		}
		//caminho 1 recusar
		break;
	case 2://Recusar linha 142
		cout << "Optando por nao aceitar a missao, voce decide continuar sua jornada em busca de outras aventuras e misterios." << endl;
		cout << "" << endl;
		cout << "Narrador: " << nome << " ,Tente outro caminho." << endl;
		return 1;//Retornar == 1, fim de caminho.
		//fim 1
		break;
		//caminho 1 default
	default://caso nao escolha nenhuma alternativa
		cout << "Escolha novamente Entre : (1) e (2)!" << endl;
		return 1;//Retornar == 1, caso não tenha escolha dos determinadas escolhas.
		break;
	}
	return 0;
}