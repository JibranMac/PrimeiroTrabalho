											
											//Historia base para usar de exemplo.

/*
#include <iostream>
#include <string>

using namespace std;

int main() {
	string nomePersonagem;
	string escolha;

	cout << "Bem-vindo a Aventura Magica!" << endl;
	cout << "Digite o nome do personagem principal: " << endl;
	cin >> nomePersonagem;

	cout << "\n" << nomePersonagem << " e sua amiga Manuela estao em busca de uma espada lendaria para derrotar o terrivel Dragao de Fogo." << endl;

	cout << "Voces encontram um bosque misterioso. Qual caminho voce escolhe? (A/B):\n";
	cin >> escolha;

	if (escolha == "A" || escolha == "a") {
		cout << "\nVoces decidem entrar no bosque e encontram uma clareira com a espada lendaria! Agora, vocês devem seguir para o covil do Dragao de Fogo." << endl;
	}
	else if (escolha == "B" || escolha == "b") {
		cout << "\nVoces decidem contornar o bosque e encontram um rio perigoso. O que voce faz? (A/B):\n";
		cin >> escolha;

		if (escolha == "A" || escolha == "a") {
			cout << "\nVoces tentam atravessar o rio, mas sao arrastados pela correnteza e acabam perdendo tempo. Finalmente, voces encontram a espada lendaria e seguem para o covil do Dragao de Fogo." << endl;
		}
		else if (escolha == "B" || escolha == "b") {
			cout << "\nVoces decidem seguir ao redor do rio e encontram um atalho para a espada lendaria! Agora, voces devem seguir para o covil do Dragao de Fogo." << endl;
		}
		else {
			cout << "\nOpcao invalida. Você esta perdido na floresta." << endl;
			return 0;
		}
	}
	else {
		cout << "\nOpcao invalida. Você esta perdido na floresta." << endl;
		return 0;
	}

	cout << "\nVoces finalmente chegam ao covil do Dragao de Fogo. O que voce faz? (A/B):\n";
	cin >> escolha;

	if (escolha == "A" || escolha == "a") {
		cout << "\nVoces tentam falar com o Dragao de Fogo em uma tentativa de paz, mas ele ataca imediatamente! A batalha comeca!" << endl;
	}
	else if (escolha == "B" || escolha == "b") {
		cout << "\nVoces entram no covil de forma furtiva e tentam roubar o tesouro sem acordar o Drageo de Fogo. Infelizmente, o Dragao acorda e a batalha comeca!" << endl;
	}
	else {
		cout << "\nOpcao invalida. O Dragao de Fogo ataca enquanto voce esta indeciso!" << endl;
	}

	// Lógica da batalha com o Dragão de Fogo pode ser implementada aqui...

	cout << "\nFim da aventura! O destino de " << nomePersonagem << " e Manuela sera revelado na proxima jornada." << endl;

	return 0;
}
*/

					//Inicio da Narrativa, A Maldicao do Castelo! (Capitulo 1)

#include <iostream>
#include <string>

using namespace std;

int main() {
					//Variaveis
	string escolha;
	string nome;
	string cabelo;
	string raca;
	string olhos;
	string classe;
	char genero;
	int idade;
	
					//Escolha de Personagem
	cout << "    A Maldicao do Castelo!      " << endl;
	cout << "\n";
	cout << "Personalizacao de Personagem\n";
	cout << "\n";

	cout << "Digite o nome do seu personagem : \n";
	getline(cin, nome);
	
	cout << "Qual sua idade : \n";
	cin >> idade;

	cout << "Qual seu Genero (F/M) : \n";
	cin >> genero;

	cout << "Qual a cor de seus olhos : \n";
	cin >> olhos;

	cout << "Qual a cor de seu cabelo : \n";
	cin >> cabelo;

	cout << "Qual a raca do seu personagem(Humano, Anao, Elfo, Orc) : \n";
	cin >> raca;

	cout << "Qual seria sua classe (Mago, Arqueiro, Guerreiro, Escudeiro) : \n";
	cin >> classe;
	cout << "\n";
					//Fim da Escolha de Personagem
	cout << "Parabens, voce escolheu as caracteristicas do seu personagem " << nome << " , agora vamos comecar nossa aventura!!\n";
	cout << "\n";
	cout << "\n";
				
	cout << "A Maldicao do Castelo! (Capitulo 1)";
	cout << "\n";
	cout << "Habilidades\n";
	cout << "\n";
	cout << "Nivel : 1\n";
	cout << "Ataque : 1\n";
	cout << "Defesa : 1\n";
	cout << "Agilidade : 1\n";
	cout << "Magia : 1\n";
	cout << "\n";
					//Inicio Da Historia
	cout << "Vamos comecar?(S/N)\n";
	cin >> escolha;

	if (escolha == "S" || escolha == "s" || escolha == "Sim" || escolha == "SIM" || escolha == "sim") {
		cout << "Era uma vez " << nome << " vagando pelas florestas obscuras do mundo!\n";
	}
	else if (escolha == "N" || escolha == "n" || escolha == "Nao" || escolha == "NAO" || escolha == "nao") {
		cout << "Entao vai se... kkkkkk coringuei\n";
	}
	return 0;
}
