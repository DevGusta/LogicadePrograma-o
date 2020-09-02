/*
Faça um programa que solicite um número ao usuário, seu programa deve garantir que o número 
digitado pelo usuário é maior do que 1. Este número representará a quantidade de somas que 
devem ser feitas utilizando o seguinte padrão:

3 + 33 + 333 + 3333 + 33333 + 333333 + …
Valor digitado: 1 -> Resultado: 3
Valor digitado: 2 -> Resultado: 36

*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int numeroSolicitado;
    char numeroPadrao = '3';
    int soma = 0, contador = 1;
    char numeroAtual;

    do{
        cout << "Digite um numero: ";
        cin >> numeroSolicitado;
    }while(numeroSolicitado <= 1);

    while(contador <= numeroSolicitado){
        numeroAtual=(numeroPadrao * contador); 
        int xnumeroAtual = atoi(numeroAtual);
        soma += xnumeroAtual;
        contador ++;
    }
    cout << "O resultado da soma eh: " << soma;
}