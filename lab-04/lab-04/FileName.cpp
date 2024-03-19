#include<iostream>

using namespace std;

#define PI 3.14145
#define osszead(X, Y) (X) + (Y) 
#define szoroz(X, Y) (X) * (Y) 
#define oszt(X, Y) (X) / (Y) 


int a = 5;

int fv(int b) {
	cout << b << endl;
	cout << a<< endl;
		char x = 'c';

	{
		double b = 3.5;
		cout << b << endl;
		cout << a << endl;

	}

	return a + 1;
}

int add(int a, int b)
{
	return a + b;
}

int main()
{
	//int a = 15;
	cout << fv(a);

	cout << "makro: " << endl;
	cout << osszead(3, 4) << endl;
	cout << szoroz(8, 7) << endl;
	cout << oszt(8, 12) << endl;
	cout << szoroz(PI, 5 * 5) << endl;

	cout << endl << endl << "time:" << endl;
	clock_t kezd, veg;
	kezd = clock();
	int k;
	for (int i = 0; i < 2 * pow(10, 9);i++)
	{
		//k = osszead(1, 1);
		k = add(1, 1);
	}
	veg = clock();
	cout << (float)(veg - kezd) << endl;
	return 0;



}
