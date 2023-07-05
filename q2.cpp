//2. Faça um programa que leia uma string e imprima as quatro primeiras letras dela.
//anderson henrique de if23
#include <iostream>
#include <string>
using namespace std;

int main() {
    string morango, four;
    cout << "digite uma string: ";
    getline(cin, morango);
    for (int i = 0; i < 4 && i < morango.size(); ++i) {
        four += morango[i];
    }
    cout << "as quatro primeiras letras são: " << four;
    return 0;
}
