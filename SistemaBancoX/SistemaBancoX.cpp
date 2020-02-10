/* Sistema de Banco 
 * 
 *  Created on: 31/03/2015
 *      Author: Vinicius Maurente - viniciusvmaurente@gmail.com
 */
#include <iostream>
#include "Conta.h"
#include <vector>
#include <stdlib.h>

using namespace std;

int main() {
	int opcao;
	vector<Conta>contas;
	Conta novaConta;
	string nome;
	int menu = 1;

	while (1) {
		menu = 1;
		cout << "1-Criar Conta\n2-Login\n3-Sair" << endl;
		cin >> opcao;

		switch (opcao) {

		case 1:
			novaConta.CriarConta();
			contas.push_back(novaConta);
			break;

		case 2:
			cout << "Digite o seu nome: " << endl;
			cin >> nome;

			for (int i = 0; i < contas.size(); i++) {
				if (contas[i].Login() == nome) {
					while (menu == 1) {
						cout << "\n1 - Saldo \n2 - Saque \n3 - Deposito \n4 - Extrato\n5 - Voltar" << endl;
						cin >> opcao;

						switch (opcao) {

						case 1:
							contas[i].VerSaldo();
							break;

						case 2:
							contas[i].Saque();
							break;

						case 3:
							contas[i].Deposito();
							break;

						case 4:
							contas[i].VerExtrato();
							break;

						case 5:
							menu = 0;
							break;

						}
					}
				}
			}
			break;
		case 3: return 0;
		}
	}
}