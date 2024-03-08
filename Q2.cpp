#include <iostream>
#include <string>
using namespace std;
int main ()

{
    int NUMERO = 0, pertence=0;

    cout << "Digite o numero que deseja verificar se pertence e sequencia de Fibo: ";
    cin  >> NUMERO;

    if(NUMERO == 0 || NUMERO == 1)
        cout << "O numero " << NUMERO << " pertence a sequencia de Fibo.";
    
    else{
        int i = 0, j = 1, k;
        while(i <= NUMERO){
            k = i + j;
            i = j;
            j = k;
            if(k == NUMERO)
                pertence = 1;
        }
        
    if(pertence == 1)
        cout << "O numero " << NUMERO << " PERTENCE a sequencia de Fibo." << endl;

    else    
        cout << "O numero " << NUMERO << "  NAO PERTENCE a sequencia de Fibo." << endl;
    }

 
}