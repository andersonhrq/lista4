//10. Escreva um programa que leia uma string do teclado e mostre um menu para o usuário escolher se quer converter para maiúsculo ou minúsculo.
//anderson henrique de if23
//peguei ajuda
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string in;
    cout << "digite uma string: ";
    getline(cin, in);

    int opcao;
    cout << "escolha uma opção:\n";
    cout << "1. trocar para maiúsculas\n";
    cout << "2. trocar para minúsculas\n";
    cout << "Opção: ";
    cin >> opcao;

    string output;
    if (opcao == 1) {
        for (char c : in) {
            output += toupper(c);
        }
    } else if (opcao == 2) {
        for (char c : in) {
            output += tolower(c);
        }
    } else {
        cout << "opção inválida!\n";
        return 0;
    }
    cout << "resultado: " << output;
    return 0;
}
