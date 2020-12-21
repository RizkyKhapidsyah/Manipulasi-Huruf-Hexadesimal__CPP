#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>

/* Created by Rizky Khapidsyah */

using namespace std;

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
	int a;
	cout << "Penggunaan ios::uppercase\n";
	cout << "-------------------------\n";
	cout << "Tanpa Dengan \n";
	cout << "Konversi Konversi \n";
	cout << "-------------------------\n";

	for (a = 1; a <= 15; a++) {
		cout << hex << a << endl;
	}
		
	for (a = 1; a <= 15; a++) {
		gotoxy(15, a + 5);
		cout << setiosflags(ios::uppercase) << hex << a << endl;
	}

	_getch();
	return 0;
}

