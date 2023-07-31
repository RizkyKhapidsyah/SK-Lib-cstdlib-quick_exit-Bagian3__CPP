#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

void quick_exit1() {
	cout << "Exit Function 1" << endl;
}

void quick_exit2() {
	cout << "Exit Function 2" << endl;
}

int main() {
	at_quick_exit(quick_exit1);
	at_quick_exit(quick_exit2);

	quick_exit(0);

	_getch();
	return 0;
}