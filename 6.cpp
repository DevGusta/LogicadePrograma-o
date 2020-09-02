/*
Faça um algoritmo que solicite 3 números inteiros ao usuário, exiba uma mensagem de 
“Números mágicos inseridos corretamente” desde que: o primeiro e o último valor sejam pares e o 
segundo valor seja ímpar. Caso contrário exiba a mensagem: “Números inseridos em ordem errada”.
*/

#include <iostream>

using namespace std;

int main(){
    int numero1, numero2, numero3;
    int resto1, resto2, resto3;

    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero: ";
    cin >> numero2;
    cout << "Digite o terceiro numero: ";
    cin >> numero3;

    resto1 = numero1 % 2;
    resto2 = numero2 % 2;
    resto3 = numero3 % 2;

    if(resto1 == 0){
        if(resto2 == 1){
            if(resto3 == 0){
                cout << "Numeros magicos inseridos corretamente";
            }else{
        cout << "Numeros inseridos em ordem errada";
    }
        }else{
        cout << "Numeros inseridos em ordem errada";
    }
    }else{
        cout << "Numeros inseridos em ordem errada";
    }
    
    return 0;
}