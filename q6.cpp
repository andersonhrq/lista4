//6. Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra por esse caractere. Ao final, imprima a nova string e o número de vogais que ela possui.
//anderson henrique de if23
#include <iostream>
#include <string>
using namespace std;

int main() {
  int vogais = 0;
  string morango;
  cout << "digite uma string: ";
  getline(cin, morango);
  for (int i = 0; i < morango.length(); ++i) 
  {
      if (morango[i] == 'a' || morango[i] == 'A' ||
       morango[i] == 'e' || morango[i] == 'E' ||
       morango[i] == 'i' || morango[i] == 'I' ||
       morango[i] == 'o' || morango[i] == 'O' ||
       morango[i] == 'u' || morango[i] == 'U') 
      {
        vogais++;
        morango[i] = '?';
        }
    }
    cout << "nova string: " << morango << endl;
    cout << "número de vogais: " << vogais << endl;
    return 0;
}