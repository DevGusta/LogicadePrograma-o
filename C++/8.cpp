/*
Faça um programa que solicite um número ao usuário, seu programa deve garantir que o número 
digitado é maior que 1. Por fim, o programa deve exibir dois resultados:
a.	A soma de todos os números entre 1 e o número digitado (incluindo 1 e o número digitado 
na soma);
b.	A média de todos os números entre 1 e o número digitado (incluindo 1 e o número digitado 
na soma).
*/

#include <iostream>

using namespace std;

int main(){
    int numeroDigitado, i, qtdNumeros=0;
    int soma = 0, media;
    bool trueorfalse = false;

    while(trueorfalse == false){
        cout << "Digite um numero maior que 1: ";
        cin >> numeroDigitado;
        if(numeroDigitado <= 1){
            cout << "Voce digitou um numero menor/igual a 1.Tente novamente.\n";
        }else{
            trueorfalse = true;
        }   
    }
    for (i = 1; i <=numeroDigitado; i++){
        soma += i;    
        qtdNumeros += 1;
    }
    media = soma / qtdNumeros;

    cout << "A soma de todos os numeros entre 1 e " << numeroDigitado << " eh: " << soma;
    cout << "\nA media de todos os numeros entre 1 e " << numeroDigitado << " eh: " << media;

    return 0;
}
