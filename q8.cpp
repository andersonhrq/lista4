//8. Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando se a segunda string lida está contida dentro da primeira. (estude a função strstr() que realiza esta tarefa)
//anderson henrique de if23
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char morango1[40];
    char morango2[40];

    cout << "digite a primeira string: ";
    cin.getline(morango1, sizeof(morango1));

    cout << "digite a segunda string: ";
    cin.getline(morango2, sizeof(morango2));

    if (strstr(morango1, morango2)) {
        cout << "a segunda string ta contida na primeira" << endl;
    } else {
        cout << "a segunda string nao esta contida na primeira" << endl;
    }
    return 0;
}
