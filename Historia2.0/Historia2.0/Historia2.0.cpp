#include <iostream>

using namespace std;

int main() {
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
	return 0;
}
