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
       case 'e':
            cout << "Voce digitou uma vogal";
            break;
        case 'i': 
            cout << "Voce digitou uma vogal";
            break;
        case 'o':
            cout << "Voce digitou uma vogal";
            break;
        case 'u':
            cout <<"Voce digitou uma vogal";
            break;  
        default:
            cout << "Voce digitou uma consoante";
    }

    return 0;          
}

