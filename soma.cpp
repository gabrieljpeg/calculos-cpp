#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	int x, y;
	int soma;

	cout << "Fone�a um n�mero: ";
	cin >> x;

	cout << "Forne�a outro n�mero: ";
	cin >> y;

	soma = x + y;

	cout << "Resultado da soma: " << soma;

	return 0;
}