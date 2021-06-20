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

int gabarito[I][I];
int tipo, menu, mais = 0, d, erro = 1, linha, coluna, fica, chances, L, C, falta;

int main() {

    srand(time(NULL));

    tipo = rand() % 4 + 1;

    cout << "Tipo =" << tipo << endl;
    Sleep(1000);
    srand(time(NULL));
    cout << "SUDOKU";
    cout << "1 - Jogar";
    cout << "2 - Dificuldade";
    cout << "3 - Sobre";
    cout << "4 - Fim";
}