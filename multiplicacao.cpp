#include <iostream>
#include <locale.h>
using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	float x, y;
	float multiplicacao;

	cout << "Forne�a um n�mero: ";
	cin >> x;

	cout << "Forne�a outro n�mero: ";
	cin >> y;
	
	multiplicacao = x * y;

	cout << "Resultado da mutiplica��o: " << multiplicacao;

return 0;
}