#include <iostream>
using namespace std;
int n;
int main() {
	do {
		cout << "BIOGRAFIA:" << endl;
		cout << "Mi nombre esNaomy Yailin Paredes Paredes de Santa Cruz de la Sierra y estudio Ing.  Sistemas en la U.S.F.X. Y E.Parvularia en CEPAD" << endl;
		
		cout << "Desea volver imprimir la biografia?" << endl;
		cout << "Si=1 No=0" << endl;
		cout << "Respueta:";
		cin >> n;
		cout << "" << endl;
	} while (n >= 1);

	return 0;
}