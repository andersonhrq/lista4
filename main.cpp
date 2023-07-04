#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string string, four;
    cout << "Digite uma string: ";
    getline(cin, string);
    for (int i = 0; i < 4 && i < string.size(); ++i) {
      four += string[i];
    }
    cout << "As quatro primeiras  4 letras são: " << four << endl;
    return 0;
}