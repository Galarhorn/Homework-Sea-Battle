#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <Windows.h>
#include "Sea Battle Header.h"
using namespace std;
string fp, sp; // fp == первый игрок, sp == второй игрок

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "\t\tДобро пожаловать в игру морской бой!" << "\n\n";
	cout << "Введите имя первого игрока: " << "\n\n";
	cin >> fp;
	cout << "\nВведите имя второго игрока: " << "\n\n";
	cin >> sp;
	cout << "\nПоле игрока " << fp << "\n\n";
	StartFieldFirstPlayer();
	cout << "\nПоле игрока " << sp << "\n\n";
	StartFieldSecondPlayer();
}
