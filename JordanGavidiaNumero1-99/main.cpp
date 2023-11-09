#include <iostream>
using namespace std;
int main() {
    string playAgain;
        cout << "###################################################" << endl;
        cout << "## Universidad de las Fuerzas Armadas ESPE SD    ##" << endl;
        cout << "## ESTUDIANTE: JORDAN JAIR GAVIDIA CARRILLO      ##" << endl;
        cout << "## CARRERA: ITIN                                 ##" << endl;
        cout << "## ASIGNATURA: Programacion Orientada a Objetos  ##" << endl;
        cout << "## NIVEL: Segundo Nivel                          ##" << endl;
        cout << "## DOCENTE: Martínez Verónica                    ##" << endl;
        cout << "## FECHA: 09/11/2023                             ##" << endl;
        cout << "## TEMA: Adivinansa del 1 al 99                 ##" << endl;
        cout << "###################################################" << endl;
    do {
        int mini = 1;
        int maxi = 99;
        int num;
        string respusuario;
        cout << "##        PIENSA EN UN NUMERO ENTRE 1 Y 99       ##" << endl;
        cout << "                     .--------." << endl;
        cout << "                   .'          '." << endl;
        cout << "                  /   O      O   | " << endl;
        cout << "                 :                :" << endl;
        cout << "                 | -------------- |" << endl;
        cout << "                 : ',          ,' :" << endl;
        cout << "                  |  '-......-'  /" << endl;
        cout << "                   '.          .'" << endl;
        cout << "                     '-......-' " << endl;
        cout << "###################################################" << endl;
        while (mini <= maxi) {
            num = (mini + maxi) / 2;
            cout << " * Tu numero es " << num << "?" << endl;
            cout << " (responde con 'menor', 'mayor' o 'igual')" << endl;
            cout << " - ";
            cin >> respusuario;
            cout << "##################################################" << endl;
            if (respusuario != "menor" && respusuario != "mayor" && respusuario != "igual") {
            cout << "Esa no es una opcion valida. Responde con 'menor', 'mayor' o 'igual'." << endl;
            }
            if (respusuario == "igual") {
                cout << "Adivine tu numero!" << endl;
                break;
            } else if (respusuario == "mayor") {
                mini = num + 1;
            } else if (respusuario == "menor") {
                maxi = num - 1;
            }
        }
        if (mini > maxi) {
            cout << "No pude adivinar tu numero en 6 intentos. ¡mala suerte!" << endl;
        }
        cout << "Quieres jugar de nuevo? (responde 'si' o 'no'): "<<endl;
        cout << "                     .--------." << endl;
        cout << "                   .' -        '." << endl;
        cout << "                  /   O     ===  | " << endl;
        cout << "                 :                :" << endl;
        cout << "                 | -------------- |" << endl;
        cout << "                 : ',          ,' :" << endl;
        cout << "                  |  '-......-'  /" << endl;
        cout << "                   '.          .'" << endl;
        cout << "                     '-......-' " << endl;
        cin >> playAgain;
    } while (playAgain == "si");
    return 0;
}
