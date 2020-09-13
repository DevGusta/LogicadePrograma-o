/*
Faça um programa que solicite um número ao usuário, seu programa deve garantir que o número 
digitado pelo usuário é maior do que 1. Este número representará a quantidade de somas que 
devem ser feitas utilizando o seguinte padrão:

3 + 33 + 333 + 3333 + 33333 + 333333 + …
Valor digitado: 1 -> Resultado: 3
Valor digitado: 2 -> Resultado: 33
Valor digitado: 3 -> Resultado: 369
Valor digitado: 4 -> Resultado: 3702
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int numeroSolicitado;
    int numeroSomado = 0;
    int soma = 0;

    do{
        cout << "Informe um numero maior que 1: ";
        cin >> numeroSolicitado;

        if(numeroSolicitado <= 1)
            cout << "Erro. Digite novamente." << endl;

    }while(numeroSolicitado <= 1);

    for(int potencia = 0; potencia < numeroSolicitado; potencia++){
        numeroSomado = numeroSomado + (3 * pow(10, potencia));
        soma = soma + numeroSomado;
    }
    
    cout << "A soma final eh: " << soma;

    return 0;
}
