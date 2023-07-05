//3. Sem usar a função strlen(), faça um programa que leia e imprima quantos caracteres ela possui.
//anderson henrique de if23
#include <iostream>
#include <string>
using namespace std;

int main() {
    int tamanho = 0;
    string morango;
    cout << "digite uma string: ";
    getline(cin, morango);
    tamanho = morango.size();
    cout << "a string possui " << tamanho << " caracteres";
    return 0;
}

