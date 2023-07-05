//14. Escreva um programa que leia duas strings e as imprima em ordem alfabética, a ordem em que elas aparecem num dicionário.
//anderson henrique de if23
#include <iostream>
#include <string>
using namespace std;

int main() {
    string morango1, morango2;
    cout << "digite a primeira string: ";
    getline(cin, morango1);
    cout << "digite a segunda string: ";
    getline(cin, morango2);
    if (morango1 < morango2) {
        cout << morango1 << endl;
        cout << morango2 << endl;
    } else {
        cout << morango2 << endl;
        cout << morango1 << endl;
    }
    return 0;
}
