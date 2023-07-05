//4. Faça um programa que leia uma string e a imprima de trás para a frente.
//anderson henrique de if23
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "digite uma string: ";
    getline(cin, str);
    cout << "atring de forma invertida é: ";
    for (int i = str.length() - 1; i >= 0; --i) {
        cout << str[i];
    }
    return 0;
}