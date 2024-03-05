#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main()
{
	int f = 10;
	int *mut;
	int& fi = f;
	mut = &f;




	cout << "f=" << f << ", fi=" << fi << ", *mut=" << *mut << endl;
	fi = 20;
	cout << "f=" << f << ", fi=" << fi << ", *mut=" << *mut << endl;

	cout << "&f" << " " << &fi << " " << mut << " " << &mut << endl;

	//vektorok

	vector <int> jegyek(3);
	char bet;
	int szam;
	int i;
	for ( i = 0; i < 3; i++)
	{
		cout << "adja meg az " << i + 1 << ". jegyet(1-5): ";
		cin >> jegyek[i];
	}

	cout << "akar meg jegyet felvenni? (y/n)" << endl;
	cin >> bet;
	if (bet == 'y')
	{
		do
		{
			cout << "jegy (1-5): ";
			cin >> szam;
			jegyek.push_back(szam);
			cout << "akar megegyet (y/n)" <<endl;
			cin >> bet;
			i++;
		} while (bet == 'y');
		
	}

	cout << "jegyek szama " << jegyek.size() << endl;

	cout << "osztalyzatok: " << endl;
	for (i = 0; i < jegyek.size(); i++)
	{
		cout << jegyek.at(i) << ", ";
	}

	jegyek.pop_back();

	cout <<endl << endl << "osztalyzatok: " << endl;
	for (i = 0; i < jegyek.size(); i++)
	{
		cout << jegyek.at(i) << ", ";
	}


	jegyek.insert(jegyek.begin() + 1, 1);

	cout << endl << endl << "osztalyzatok: " << endl;
	for (i = 0; i < jegyek.size(); i++)
	{
		cout << jegyek.at(i) << ", ";
	}









}