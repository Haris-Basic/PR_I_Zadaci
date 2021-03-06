#include<iostream>

using namespace std;

void unos(int[], int);
bool dobarbroj(int);

int main()
{
	int niz[10] = {}, n = 0, brojac = 0;
	cout << "Unesite neki broj N" << endl;

	do {
		if (n > 10 || n <= 0)
			cout << "Unos nije validan!" << endl;
		cin >> n;
	} while (n > 10 || n <= 0);

	unos(niz, n); // poziv funkcije za upis niz

	for (int i = 0; i < n; i++) // ispis unesenog niza
		cout << niz[i] << " ";
	cout << endl << endl;

	for (int i = 0; i < n; i++) {
		if (dobarbroj(niz[i])) {
			cout << niz[i] << " " << endl;
		}
	}
	system("pause>0");
}

void unos(int niz[], int limit) // funkcija za unos niza
{
	for (int i = 0; i < limit; i++) {
		cout << "unesite [" << i << "] clan: ";
		cin >> niz[i];
	}
}

bool dobarbroj(int broj) //funkcija za trazenje dobrog broja
{
	int cifra1 = 0, cifra2 = 0;

	while (broj > 10) {
		cifra1 += broj % 10;
		cifra2 = broj / 10 % 10;
		broj /= 10;
		if (cifra1> cifra2)
			return false;

	}
	return true;
}
