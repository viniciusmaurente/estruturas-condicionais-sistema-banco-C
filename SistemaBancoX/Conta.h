#ifndef CONTA_H
#define CONTA_H
#include <iostream>
#include <vector>
using namespace std;

class Conta
{
public:
	Conta();
	virtual ~Conta();
	void CriarConta();
	void VerSaldo();
	void Saque();
	void Deposito();
	string Login();
	void VerExtrato();

protected:
private:
	float saldo;
	string nome;
	string senha;
	vector<float>Extrato;
};

#endif /* CONTA_H_ */
