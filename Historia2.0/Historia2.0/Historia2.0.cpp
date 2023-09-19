#include <iostream>

using namespace std;

int main() {

	int escolha;

	cout << "Voce segue chega no castelo e se depara com dois lados, qual deseja ir?" << endl;
	cout << "1. Esquerda" << endl;
	cout << "2. Direita" << endl;
	cin >> escolha;

	switch (escolha) {
	case 1:
		cout << "Voce decide ir pela esquerda" << endl;
	break;
	case 2:
		cout << "Voce decide ir pela direita" << endl;
		break;
	default:
		cout << "Escreva novamente." << endl;
		break;
	}
	return 0;
}
	/*
	//variaveis
	int escolha;

	cout << "Voce tem dois caminhos a percorrer" << endl;
	cout << "1. Correr" << endl;
	cout << "2. Atacar" << endl;
	cin >> escolha;
	if (escolha == 1) {
		cout << "Voce conseguiu fugir" << endl;
		cout << "Porem um monstro consegue te encontrar e te ataca, o que voce faz?" << endl;
		cout << "1. Esquivar" << endl;
		cout << "2. Atacar" << endl;
		cin >> escolha;
		if (escolha == 1) {
			cout << "Voce consegue se esquivar" << endl;
		}
		else if (escolha == 2) {
			cout << "Voce consegue derrotar o monstro" << endl;
		}
	}
	else if (escolha == 2) {
		cout << "Voce tenta atacar mas nao tem forca suficiente ainda" << endl;
	}
	*/

