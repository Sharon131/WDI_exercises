//Program znajdujacy dzielniki podanej liczby naturalnej
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a;		//Liczba, ktorej dzielniki szukamy
	cout << "Podaj liczbe, ktorej dzielniki chcesz poznac:	";
	cin >> a;
	cout << "Dzielniki danej liczby to: " << endl << 1 << endl;
	
	for(int g=2;g<=sqrt(a);g++)
	{
		if(a%g==0)
		{
			cout << g << endl;
		}
		if(g!=sqrt(a) && a%g==0)
		{
			cout << a/g << endl;
		}
	}
	cout << a << endl;
	cout << "KONIEC" << endl;
	return 0;
}

