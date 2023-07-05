//9. Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando quantas vezes a segunda string lida está contida dentro da primeira.
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

    int count = 0;
    size_t foundPos = morango1.find(morango2, 0);
    while (foundPos != string::npos) {
        count++;
        foundPos = morango1.find(morango2, foundPos + morango2.length());
    }
    if (count > 0) {
        cout << "a segunda string está contida na primeira " << count << " vez(es)" << endl;
    } else {
        cout << "a segunda string nao está contida na primeira" << endl;
    }

    return 0;
}
