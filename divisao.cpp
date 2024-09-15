#include <iostream>
#include <locale.h>
using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	float x, y;
	float divisao;

	cout << "Forneça um número: ";
	cin >> x;

	cout << "Forneça outro número: ";
	cin >> y;

	divisao = x / y;

	cout << "Resultado da divisão: " << divisao;

return 0;
}