#include <iostream>
#include <string>

using namespace std;

string inverter_string(const string& s) {
    string resultado;

    for (int i = s.length() - 1; i >= 0; i--) {
        resultado += s[i];
    }

    return resultado;
}

int main() {
    string entrada;
    cout << "Digite uma string para inverter: ";
    getline(cin, entrada);

    string string_invertida = inverter_string(entrada);
    cout << "String invertida: " << string_invertida << endl;

    return 0;
}