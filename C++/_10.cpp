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

using namespace std;

int main(){
    int numeroSolicitado = 0;
    int elementoSerie = 3;
    int resultadoFinal = 3;
    
    do{
        cout << "Digite um número: ";
        cin >> numeroSolicitado;

        if(numeroSolicitado <= 1)
            cout << "Número inváldio!" << endl; 

    }while(numeroSolicitado <= 1);

    for(int i = 1; i < numeroSolicitado ; i++){
        int fatorIncremento = 10;

        for (int j=1; j < i; j++){
            fatorIncremento = fatorIncremento * 10;
        }

        elementoSerie = elementoSerie + (fatorIncremento * 3) ;
        resultadoFinal = resultadoFinal + elementoSerie;
    }

    cout << "Resultado da soma é: " << resultadoFinal; 
}
