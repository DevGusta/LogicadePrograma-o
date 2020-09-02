/*
Faça um algoritmo que solicita ao usuário dois números inteiros. O primeiro é o valor das horas e o 
segundo dos minutos. Verifique se a hora é válida ou inválida e exiba uma mensagem 
correspondente (São válidas as horas entre 00:00 e 23:59).
*/

#include <iostream>

using namespace std;

int main(){
    int hora, minutos;

    cout << "Digite a hora: ";
    cin >> hora;

    cout << "Digite os minutos: ";
    cin >> minutos;

    if(hora > 24 || hora <0 ){
        cout << "Horario invalido";
    }else if(minutos < 0 || minutos > 59){
        cout << "Horario invalid";
    }else
    {
        cout << "Horario valido";
    }

    return 0;
}