// serverConnect.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int Number;

int main()
{
	while (1) {
		cout << "Hello, i am a server :)\n";
		cout << "Enter a number:\n";
		cin >> Number;
		cout << "You typed: " << Number << "\n";
		cout << "-------------------------\n";
		cout << "\n";
	}
	return 0;
}


