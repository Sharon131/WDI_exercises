//Program sprawdzajacy, czy kazdy element tablicy zawiera cyfre parzysta
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

bool parz(int n)					//n-badana liczba na parzystosc cyfr. Funkcja parz zwraca true, gdy kt�ra� cyfra liczby jest parzysta
{
	int digit=0;					//zmienna przechowuj�ca ilo�� cyfr badanej liczby;
	int num=n;						//pomocnicza do liczenia chociazby ilosci cyfr
	
	if(n%2==0)
	{
		return true;
	}
	
	while(num!=0)				//policzenie ilosci cyfr liczby
	{
		digit++;
		num/=10;
	}
	
	for(int g=0;g<digit;g++)		//sprawdzanie kazdej cyfry z osobna
	{
		num=n%10;
		n/=10;
		if(num%2==0)
		{
			return true;
		}
	}
	
	return false;
}

int main()
{
	srand(time(NULL));				//aby liczby generowaly sie losowo, nie pseudolosowo
	int t;				//rozmiar tablicy
	cout << "Podaj rozmiar tablicy, ktora bedziesz sprawdzac: " << endl;
	cin >> t;
	int *tab = new int[t]; 		//sprawdzana tablica, jeje elementy generowane losowo
	int flag=0;					//flaga. Je�li kt�ry� element tablicy nie b�dzie zawiera� �adnej cyfry parzystej, wtedy =1
	
	for(int g=0;g<t;g++)
	{
		tab[g]=rand();
		
		if(!parz(tab[g]))
		{
			flag=1;
			cout << "W zadanej tablicy znajduja sie elementy, ktore nie maja ani jednej cyfry parzystej" << endl;
		}
	}

	if(flag==0)
	{
		cout << "Warunek spe�niony. Kazdy element tej tablicy zawiera cyfre parzysta." << endl;
	}
	
	cout << "A oto i elementy tej tablicy do sprawdzenia recznego: " << endl;
	for(int y=0;y<t;y++)
	{
		cout << tab[y] << endl;
	}
	return 0;
}

