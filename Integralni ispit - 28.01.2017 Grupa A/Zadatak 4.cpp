#include<iostream>
#include<iomanip>

using namespace std;
void unos(int[][10], int);
void ispis(int[][10], int);

int main()
{
	int n, matrica[10][10];

	cout << "Izaberite velicinu matrice: ";
	do {
		cin >> n;
		if (n < 1 || n>10)
			cout << "Unos nije validan!" << endl;
	} while (n < 1 || n>10);

	unos(matrica, n);
	cout << endl << endl;

	cout << "Dobili ste sl matricu: " << endl;
	ispis(matrica, n);
	cout << endl;

	if (n % 2 == 0)
		cout << "------> 0" << endl << endl;
	else
		cout << "------> 1" << endl << endl;



}
void unos(int niz[][10], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			niz[i][j] = rand() % 100;
}
void ispis(int niz[][10], int n)
{
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << setw(3) << niz[i][j] << " ";
		cout << endl;
	}
}

// druga mogucnost koja je ispravnija
/*
#include<iostream>
#include<iomanip>

using namespace std;
void unos(int[][10], int);
void ispis(int[][10], int);
int provjera(int mat[][10], int);

int main()
{
	int n, matrica[10][10], rez=0;

	cout << "Izaberite velicinu matrice: ";
	do {
		cin >> n;
		if (n < 1 || n>10)
			cout << "Unos nije validan!" << endl;
	} while (n < 1 || n>10);

	unos(matrica, n);
	cout << endl << endl;

	cout << "Dobili ste sl matricu: " << endl;
	ispis(matrica, n);
	cout << endl;
	rez = 1;
	if (n % 2 == 0) {
		rez = -1;
		cout << rez << endl;
		return 0;
	}
	else {
		unos(matrica, n);
		rez = provjera(matrica, n);
	}
	cout << rez << endl;

	system("pause>0");
	return 0;
}
void unos(int niz[][10], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin>> niz[i][j];
}
void ispis(int niz[][10], int n)
{
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << setw(3) << niz[i][j] << " ";
		cout << endl;
	}
}
int provjera(int mat[][10], int n)
{
	int rez = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (mat[i][j] != mat[n - 1 - i][n - 1 - j]) {
				rez = 0;
				break;
			}
		}
	}
	return rez;
}
*/
