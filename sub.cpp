#include <iostream>
#include <locale.h>
using namespace std;

int main () {

	setlocale(LC_ALL, "Portuguese");

	int x, y;
	int sub;

	cout << "Fone�a um n�mero: ";
	cin >> x;

	cout << "Forne�a outro n�mero: ";
	cin >> y;

	sub = x - y;
	cout << "Resultado da subtra��o: " << sub;

return 0;

}