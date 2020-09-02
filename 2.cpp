/*
Faça um algoritmo que solicita ao usuário as notas de três provas. Calcule a média aritmética e 
informe se o aluno foi Aprovado ou Reprovado (o aluno é considerado aprovado com a média igual ou superior a 6).
*/

#include <iostream>

using namespace std;

int main(){
    float nota1, nota2, nota3, notaFinal;

    cout << "Digite sua primeira nota: ";
    cin >> nota1;
    cout << "Digite a sua segunda nota: ";
    cin >> nota2;
    cout << "Digite sua terceira nota: ";
    cin >> nota3;

    notaFinal = (nota1 + nota2 + nota3)/3;

    cout << notaFinal;
    if(notaFinal >= 6){
        cout << "Parabens. Voce foi aprovado.";
    }else{
        cout << "Que pena. Voce foi reprovado.";
    }
    return 0;
}