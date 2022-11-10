
#include<iostream>
using namespace std;



int main() {
	int ano;
	cout << " escriba el año a verificar" << endl;
	cin >> ano;
	if ((ano%4==0)) {
		cout << " el año es bisiesto" << endl;
	} else {
		cout << " no es un año bisiesto " << endl;
	}
	if ((ano%100==0 && ano%400==0)) {
		cout << " es un año bisiesto" << endl;
	}
	return 0;
}

