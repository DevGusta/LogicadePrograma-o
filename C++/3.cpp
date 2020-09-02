/*
Faça um algoritmo que solicita ao usuário um valor inteiro e exibe uma mensagem informando se o número é par ou ímpar.
*/

#include <iostream>

using namespace std;

int main(){
    int numero, resto;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    resto = numero % 2;

    if(resto == 0){
        cout << "O numero digitado eh par.";
    }else{
        cout << "O numero digitado eh impar.";
        }

    return 0;    
}
