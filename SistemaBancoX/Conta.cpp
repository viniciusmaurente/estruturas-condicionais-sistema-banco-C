#include "Conta.h"

Conta::Conta() {
	//ctor
	saldo = 0;
}
Conta::~Conta() {
	//dtor
}
void Conta::VerSaldo() {
	string pass;
	cout << "Informe a SENHA: " << endl;
	cin >> pass;
	if (pass == this->senha) {
		cout << "Seu saldo eh de: " << this->saldo << endl;
	}
	else {
		cout << "SENHA INCORRETA!" << endl;
	}
}
void Conta::CriarConta() {
	cout << "Qual o nome do correntista: " << endl;
	cin >> this->nome;
	cout << "Digite a senha: " << endl;
	cin >> this->senha;
	this->saldo = 0;
}

void Conta::Saque() {
	float valor;
	string pass;
	cout << "Valor a Saque: R$" << endl;
	cin >> valor;
	cout << "Informe a SENHA: " << endl;
	cin >> pass;
	if (pass == this->senha) {
		if (this->saldo - valor >= 0) {
			this->saldo -= valor;
			this->Extrato.push_back(-valor);
		}
		else {
			cout << "Saldo Insuficiente!" << endl;
		}
	}
	else {
		cout << "Senha Incorreta!" << endl;

	}
}

void Conta::Deposito() {
	float valor;
	string pass;
	cout << "Valor de Deposito: R$" << endl;
	cin >> valor;
	cout << "Informe a SENHA:" << endl;
	cin >> pass;
	if (pass == this->senha) {
		this->saldo += valor;
		this->Extrato.push_back(+valor);
	}
	else {
		cout << "senha incorreta!" << endl;
	}
}

string Conta::Login() {
	return this->nome;
}
void Conta::VerExtrato() {
	for (int i = 0; i < Extrato.size(); i++) {
		cout << "- " << Extrato[i] << "\n" << endl;
	}
	cout << "Saldo Atual: R$ " << this->saldo << endl;
}
