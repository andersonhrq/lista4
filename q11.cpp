//11. Escreva um programa que leia o nome e o valor de determinada mercadoria de uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.
//anderson henrique de if23
#include <iostream>
#include <string>
using namespace std;

int main() {
    string produto;
    float total;

    cout << "digite o nome de um produto: ";
    getline(cin, produto);

    cout << "digite o valor do produto: ";
    cin >> total;

    float desconto = total * 0.1;
    float valorAvista = total - desconto;

    cout << "Mercadoria: " << produto << endl;
    cout << "Valor total: R$ " << total << endl;
    cout << "Desconto: R$ " << desconto << endl;
    cout << "Valor a ser pago à vista: R$ " << valorAvista << endl;

    return 0;
}
