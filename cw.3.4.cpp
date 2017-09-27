//Czy w tablicy istnije liczba spelniajaca warunek %7==0? Zadanie 3 z æw. nr 3
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int t;				//zmienna wyznaczajaca wielkosc sprawdzanej tablicy
	cout << "Podaj ilosc elementow tablicy, ktora bedziesz sprawdzac: " << endl;
	cin >> t;
	int *tab = new int[t];				//tablica sprawdzana
	int flag=0;							//zmienna pzechowujaca informacje, czy w tablicy istnieje jakas liczba nie spelniajaca warunku
	
	for(int g=0;g<t;g++)
	{
		tab[g]=rand();
	}
	
	for(int h=0;h<t;h++)
	{
		if(tab[h]%7!=0)					//warunek
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout << "W tej tablicy istnieje liczba niepodzielna przez 7" << endl;
	}
	else
	{
		cout << "W tej tablicy wszytkie liczby sa podzielne przez 7" << endl;
	}
	
	cout << "Ta tablica przyjela nastepujace wartosci: " << endl;
	
	for(int i=0;i<t;i++)
	{
		cout << tab[i] << endl;
	}
	
	
	return 0;
}

