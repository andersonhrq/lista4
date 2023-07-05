//7. Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um palíndromo ou não. Exemplos de palíndromos: ovo, arara, rever, asa, osso etc.
//anderson henrique de if23
//peguei ajuda pra fazer
#include <iostream>
#include <string>
using namespace std;

bool palindromo(string morango) {
    int length = morango.length();
    for (int i = 0; i < length / 2; i++) {
        if (morango[i] != morango[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string in;
    cout << "digite um palindromo: ";
    cin >> in;
    if (palindromo(in)) {
        cout << "a palavra '" << in << "' é um palindromo" << endl;
    } else {
        cout << "a palavra '" << in << "' não é um palindromo" << endl;
    }
    return 0;
}
