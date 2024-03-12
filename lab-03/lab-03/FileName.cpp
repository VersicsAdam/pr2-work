#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

double atlag(int*, int);

void csere(int* x, int* y);

void csere2(int& x, int& y);


void feltolt(int& tmb[], int n);

void kiir(int& tmb[], int);

void max(int& tmb[], int);





int main()
{
	int jegy[10] = { 1, 2, 3, 23, 34, 56, 23, 45, 21, 23 };
	int jegy2[10] = { 10, 25 ,43, 23, 34, 56, 23, 45, 21, 23 };
	cout << "\nszamtani atlag: " << atlag(jegy, 10) << endl;
	cout << "\nszamtani atlag: " << atlag(jegy2, 10) << endl;

	/*int szam1, szam2;
	cout << "elso szam: ";
	cin >> szam1;
	cout << "masodik szam: ";
	cin >> szam2;
	cout << "csere elott: " << szam1 << ", " << szam2 << endl;
	csere(&szam1, &szam2);
	cout << "csere utan: " << szam1 << ", " << szam2 << endl;

	*/



	srand(unsigned)time(NULL));
	int db;

	do
	{
		cout << "hany tanuloja van a csoportnak? ";
		cin >> db;
		if (db < 1 || db > 10)
		{
			cout << " nem jo a szam " << endl;
		}
	} while (db < 1 || db > 10);

	int *jegy = new int[db];
	feltolt(jegy, db);
	kiir(jegy, db);
	cout << "\n a legnagyobb dolgozat erteke: " << max(jegy, db) << endl;


	return 0;
}

double atlag(int* tmb, int db)
{
	double osszeg = 0;
	for (int i = 0; i < db; i++)
	{
		osszeg += tmb[i];
	}
	return osszeg / db;
}

void csere(int* x, int* y)
{

	int seged;
	seged = *x;
	*x = *y;
	*y = seged;

}

void csere2(int& x, int& y)
{
	int seged = x;
	x = y;
	y = seged;

}


void feltolt(int* tmb[], int n)
{
	for (int i = 0; i < n; i++)
	{
		*tmb[i] = (rand() % 100) + 1;
	}
}



void kiir(int* tmb[], int n)
{
	cout << "\na csoport jegyei: \n";
	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << tmb[i];
	}
	cout << endl;
}


void max(int& tmb[], int n)
{
	int max = tmb[0];
	for (int i = 1; i < n; i++)
	{
		if (max < tmb[i]) {
			max = tmb[i];
		}
	}
	return max;

}



