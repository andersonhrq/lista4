//5. Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada na mesma variável. Em seguida, imprima a string invertida.
//anderson henrique de if23
#include <iostream>
#include <string>
using namespace std;

int main() {
    string morango;
    cout << "digite uma string: ";
    getline(cin, morango);
    int length = morango.length();
    for (int i = 0; i < length / 2; i++) {
        char temp = morango[i];
        morango[i] = morango[length - i - 1];
        morango[length - i - 1] = temp;
    }
    cout << "a string  de forma invertida é: " << morango;
    return 0;
}
