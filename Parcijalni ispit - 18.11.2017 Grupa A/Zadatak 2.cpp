#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float x, f = 0 , M = 1.0;
	int m;
	char odabir;
	cout << "Unesite realan broj x: ";
	cin >> x;
	do {
		cout << "Unesite cijeli broj m veci od nule: ";
		cin >> m;
	} while (m <= 0);
	cout << "Unesite jednu od sl. funkcija: s +, o -, m * i d /.";
	cin >> odabir;
	switch (odabir) {
	case 's': for (int i = 1; i <= m; i++) f += (x - i)*i; cout << "Rezultat je: " << f << endl; break;
	case 'o': for (int i = 1; i <= m; i++) f -= (x - i)*i; cout << "Rezultat je: " << f << endl; break;
	case 'm': for (int i = 1; i <= m; i++) M *= (x - i)*i; cout << "Rezultat je: " << M << endl; break;
	case 'd': for (int i = 1; i <= m; i++) M /= (x - i)*i; cout << "Rezultat je: " << M << endl; break;
	default: cout << "Unesena funkcija je nepostojeca!" << endl;
	}
	system("pause>0");
	return 0;
}