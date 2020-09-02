/*
Faça um algoritmo que solicita ao usuário um número inteiro e exiba este número na tela. 
Se o número for negativo, antes de ser exibido, ele deve ser transformado no equivalente positivo.
*/

#include <iostream>

using namespace std;

int main(){
    int numero;
    
    cout << "Digite um numero: ";
    cin >> numero;
    if(numero < 0){
        numero = numero * -1;
    }
    
    cout << numero;

    return 0;
}
