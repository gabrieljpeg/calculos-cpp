#include <iostream>
#include <locale.h>
using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	float x, y;
	float multiplicacao;

	cout << "Forneça um número: ";
	cin >> x;

	cout << "Forneça outro número: ";
	cin >> y;
	
	multiplicacao = x * y;

	cout << "Resultado da mutiplicação: " << multiplicacao;

return 0;
}