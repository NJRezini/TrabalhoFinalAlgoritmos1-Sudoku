#include <iostream>
#include <stdio.h>
#include <time.h>
#include <windows.h>

using namespace std;

#define I 9 

int principal[I][I] = 
{ 
    4,9,5,2,8,7,3,6,1,
    7,2,8,6,1,3,4,9,5,
    3,6,1,9,5,4,7,2,8,
    6,5,3,8,4,9,2,1,7,
    9,8,4,1,7,2,6,5,3,
    2,1,7,5,3,6,9,8,4,
    1,3,2,4,6,5,8,7,9,
    5,4,6,7,9,8,1,3,2,
    8,7,9,3,2,1,5,4,6 
};

int templet[I][I];
int gameType, menu, error = 1, line, column, chances, remaining, dificulty;
bool stay = true;

int main() {

    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    cout << "Tipo =" << gameType << endl;
    system("cls");
    Sleep(1000);
    srand(time(NULL));
    while (stay) {

        gameType = rand() % 4 + 1;

        cout << "SUDOKU\n";
        cout << "1 - Jogar\n";
        cout << "2 - Dificuldade\n";
        cout << "3 - Sobre\n";
        cout << "4 - Fim\n";
        system("pause");
        cin >> menu;
        system("cls");

        switch (menu) {
        case 1:

            break;
        case 2:
            cout << "Escolha a dificuldade \n";
            cout << "1 - Facil \n";
            cout << "2 - Medio \n";
            cout << "3 - Dificil \n";
            cin >> dificulty;
            break;
        case 3:

            cout << "Developed by Nathan Jose Rezini at Jun/21";
            break;
        case 4:
            stay = false;
            break;
        default:

        }
    }
}