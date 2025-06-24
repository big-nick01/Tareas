#include <iostream>
#include <string>
using namespace std;
int main() {
    int numero, suma = 0;
    cout << "Ingresa un número: ";
    cin >> numero;
    string str = to_string(numero);
    for (int i = 0; i < str.length(); i++) {
        suma += str[i] - '0';
    }
    cout << "La suma de los dígitos es: " << suma << endl;
    return 0;
}
