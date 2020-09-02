/*
Faça um programa que solicite um número ao usuário, seu programa deve garantir que o número 
digitado pelo usuário é maior do que 1 e é um número ímpar. Depois disso, utilize o laço de 
repetição while para gerar o padrão abaixo até o número digitado pelo usuário:

Digite um número: 5 <- número que o usuário digitou
1
12
123
1234
12345
*/

#include <iostream>

using namespace std;

int main(){
    int numero, contador = 1, contador2 = 1;

    do{
        cout << "Digite um numero maior que 1 e impar: ";
        cin >> numero;
    }while(numero <= 1 || numero % 2 == 0);
        
    while(contador <= numero){
        contador2 = 1;
        while(contador2 <= contador){
            cout << contador2 <<" ";
            contador2 ++;
        }   
        cout << endl; 
        contador += 1;
    }
    return 0;
}
