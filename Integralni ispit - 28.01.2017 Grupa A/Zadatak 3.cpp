/* Napisati glavni program i funkciju medij koja se poziva naredbom medij(v,n) i koja nalazi medijan tj.  srednji član u sortiranom nizu v.
 Ako je n paran, tada je medijan aritmetička sredina od srednja dva člana. Ako je n neparan, tada je medijan član u sredini (na n/2-om mjestu).
 U glavnom programu korisnik unosi veličinu niza n (1<=n<=10) te članove niza koje prije proslijeđivanja funkciji sortira,
 poziva funkciju te ispisom na ekran dobija medijan.*/
#include<iostream>

using namespace std;

float medij(int[], int);

int main()
{
	int n, niz[10] = {};

	cout << "Unesite velicinu niza:" << endl;
	do {
		cin >> n;
	} while (n < 1 && n>10);

	cout << "Unesite clanove niza:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "Unesite [" << i << "] clan niza:";
		cin >> niz[i];
	}

	bool promjena = true;
	while (promjena) {
		promjena = false;
		for (int i = 0; i < n - 1; i++) {
			if (niz[i] > niz[i + 1]) {
				int privremena = niz[i];
				niz[i] = niz[i + 1];
				niz[i + 1] = privremena;
				promjena = true;
			}
		}
	}

	cout << endl << endl;
	for (int i = 0; i < n; i++)
		cout << niz[i] << " ";
	cout << endl << endl;
	cout << "Medijan unesenog niza je: " << medij(niz, n) << endl;
	system("pause>0");
	return 0;
}
float medij(int v[], int n)
{
	float artsr = 0, suma=0;
	if (n % 2 == 0) {
		suma = v[n / 2-1] + v[n / 2];
		artsr = suma / 2;
	}
	else {
		artsr = v[n / 2];
	}
	return artsr;
}
