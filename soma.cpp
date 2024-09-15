#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	int x, y;
	int soma;

	cout << "Foneça um número: ";
	cin >> x;

	cout << "Forneça outro número: ";
	cin >> y;

	soma = x + y;

	cout << "Resultado da soma: " << soma;

return 0;
}
