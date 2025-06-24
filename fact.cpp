#include <iostream>
using namespace std;
int main() {
    int numero, factorial = 1;
    cout << "Ingresa un número: ";
    cin >> numero;
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }
    cout << "El factorial es: " << factorial << endl;
    return 0;
}
