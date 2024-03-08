#include <iostream>
#include <string>
using namespace std;

int main ()

{
    string palavra, nova;

    cout << "Digite uma palavra para inverter: ";
    getline(cin, palavra);

    int tam = palavra.length();
    for (int i = 0; i < tam/2; i++){
        char aux;
        aux = palavra[i];
        palavra[i] = palavra[tam - i - 1];
        palavra[tam - i - 1 ] = aux;
    }

    cout << palavra << endl;
}