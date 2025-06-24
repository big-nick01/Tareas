#include <iostream>
using namespace std;
int main() {
    int numero, divisores = 0;
    cout << "Ingresa un número: ";
    cin >> numero;
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            divisores++;
        }
    }
    if (divisores == 2) {
        cout << numero << " es primo." << endl;
    } else {
        cout << numero << " no es primo." << endl;
    }
    return 0;
}
