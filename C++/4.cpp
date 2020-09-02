/*
Faça um algoritmo que solicita ao usuário uma letra (caracter) e exiba uma mensagem informando se 
é uma vogal ou uma consoante (UTILIZE SWITCH-CASE).
*/

#include <iostream>

using namespace std;

int main(){
    char letra;

    cout << "Digite uma letra: ";
    cin >> letra;
    
    switch(letra){
        case 'a':
            cout << "Voce digitou uma vogal.";
            break;
       case 'b':
            cout << "Voce digitou uma consoante";
            break;
        case 'c': 
            cout << "Voce digitou uma consoante";
            break;
        case 'd':
            cout << "Voce digitou uma consoante";
            break;
        case 'e':
            cout <<"Voce digitou uma consoante";
            break;  
    }

    return 0;          
}

