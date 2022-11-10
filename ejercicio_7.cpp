
#include<iostream>
using namespace std;


int main() {
	float total;
	int v;
	cout << " gran oferta de 15% todo febrero" << endl;
	cout << "ingrese total del valor de las compras ";
	cin >> v;
	total = v-(v/100)*15;
	cout << " valor total a pagar es de " << total << " cordobas en total" << endl;
	return 0;
}

