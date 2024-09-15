#include <iostream>
#include <locale.h>
using namespace std;

int main () {

	setlocale(LC_ALL, "Portuguese");

	int x, y;
	int sub;

	cout << "Foneça um número: ";
	cin >> x;

	cout << "Forneça outro número: ";
	cin >> y;

	sub = x - y;
	cout << "Resultado da subtração: " << sub;

return 0;

}