#include <iostream>
#include <locale.h>
using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	float x, y;
	float divisao;

	cout << "Forne�a um n�mero: ";
	cin >> x;

	cout << "Forne�a outro n�mero: ";
	cin >> y;

	divisao = x / y;

	cout << "Resultado da divis�o: " << divisao;

return 0;
}