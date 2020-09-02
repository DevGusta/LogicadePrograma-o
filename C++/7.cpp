/*
Faça um algoritmo que solicite um número inteiro ao usuário, caso este número esteja entre 10 e 20 
ou entre 40 e 50 exiba a mensagem: “Número na faixa correta”, caso contrário exiba a mensagem: “Número incorreto”.
*/

#include <iostream>

using namespace std;

int main(){
    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    if(numero>=10 && numero<=20 || numero>=40 && numero<=50)
        cout << "Numero na faixa correta";
    else
        cout << "Numero incorreto";

    return 0;
}
